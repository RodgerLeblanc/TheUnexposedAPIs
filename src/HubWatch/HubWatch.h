/*
 * HubWatch.h
 *
 *  Created on: 2016-02-01
 *      Author: Roger
 */

#ifndef HUBWATCH_H_
#define HUBWATCH_H_

#define DELAY_INTERVAL 300

#include <src/PpsWatch/PpsWatch.h>

#include <QTimer>

class HubWatch : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QVariantMap lastPimUpdated READ lastPimUpdated NOTIFY lastPimUpdatedChanged);
    Q_PROPERTY(QString newPimMessage_accountName READ newPimMessage_accountName NOTIFY newPimMessage_accountNameChanged);
    Q_PROPERTY(bool newPimMessage_splatShown READ newPimMessage_splatShown NOTIFY newPimMessage_splatShownChanged);
    Q_PROPERTY(int newPimMessage_unreadCount READ newPimMessage_unreadCount NOTIFY newPimMessage_unreadCountChanged);

public:
    HubWatch(QObject *_parent = 0);

private slots:
    void onDelayTimeout();
    void onPpsFileReady(const QVariantMap&);

private:
    QVariantMap lastPimUpdated() { return m_lastPimUpdated; }
    QString newPimMessage_accountName() { return m_newPimMessage_accountName; }
    bool newPimMessage_splatShown() { return m_newPimMessage_splatShown; }
    int newPimMessage_unreadCount() { return m_newPimMessage_unreadCount; }

    QString getMapString(const QVariantMap& map);

    QVariantMap m_lastPimUpdated;
    QString m_newPimMessage_accountName;
    bool m_newPimMessage_splatShown;
    int m_newPimMessage_unreadCount;

    QVariantMap m_hubAccountsInfo;
    QVariantMap m_oldPpsMap;

    QTimer* m_delayTimer;
    PpsWatch* m_hubWatch;

signals:
    void lastPimUpdatedChanged(QVariantMap&);
    void newPimMessage_accountNameChanged(QString&);
    void newPimMessage_splatShownChanged(bool&);
    void newPimMessage_unreadCountChanged(int&);
};

#endif /* HUBWATCH_H_ */
