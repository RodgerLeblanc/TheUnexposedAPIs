/*
 * HubWatch.cpp
 *
 *  Created on: 2016-02-01
 *      Author: Roger
 */

#include <src/HubWatch/HubWatch.h>

HubWatch::HubWatch(QObject *_parent) :
    QObject(_parent),
    m_delayTimer(new QTimer(this)),
    m_hubWatch(new PpsWatch("/pps/services/pim/notifybar", this))
{
    // Delay the PPS data read as changes in this PPS sometimes changes twice or three times
    // for a single change.
    m_delayTimer->setSingleShot(true);
    m_delayTimer->setInterval(DELAY_INTERVAL);
    connect(m_delayTimer, SIGNAL(timeout()), this, SLOT(onDelayTimeout()));

    connect(m_hubWatch, SIGNAL(ppsFileReady(const QVariantMap&)), this, SLOT(onPpsFileReady(const QVariantMap&)));
}

QString HubWatch::getMapString(const QVariantMap& map) {
    return (map["accountName"].toString() + map["splat"].toString() + map["unreadCount"].toString());
}

void HubWatch::onDelayTimeout() {
    const QVariantList ppsList = m_oldPpsMap["dat"].toList();
    for (int i = 0; i < ppsList.size(); i++) {
        bool isNewMessage = false;
        const QVariantMap thisMap = ppsList[i].toMap();

        if (getMapString(m_lastPimUpdated) != getMapString(thisMap)) {
            m_lastPimUpdated = thisMap;
            emit lastPimUpdatedChanged(m_lastPimUpdated);
        }

        const QString accountName = thisMap["accountName"].toString();
        if (!accountName.isEmpty()) {
            const QVariantMap savedHubAccountInfo = m_hubAccountsInfo[accountName].toMap();
            if (savedHubAccountInfo["splat"].toBool() != thisMap["splat"].toBool()) {
                isNewMessage = true;
            }
            if (savedHubAccountInfo["unreadCount"].toInt() < thisMap["unreadCount"].toInt()) {
                isNewMessage = true;
            }

            if (isNewMessage) {
                m_newPimMessage_accountName = accountName;
                newPimMessage_accountNameChanged(m_newPimMessage_accountName);

                m_newPimMessage_splatShown = thisMap["splat"].toBool();
                newPimMessage_splatShownChanged(m_newPimMessage_splatShown);

                m_newPimMessage_unreadCount = thisMap["unreadCount"].toInt();
                newPimMessage_unreadCountChanged(m_newPimMessage_unreadCount);
            }
        }
    }
}

void HubWatch::onPpsFileReady(const QVariantMap& map) {
    if (map.contains("dat")) {
        m_oldPpsMap = map;

        if (m_delayTimer->isActive())
            m_delayTimer->stop();

        m_delayTimer->start();
    }
}
