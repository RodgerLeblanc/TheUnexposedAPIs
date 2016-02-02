/*
 * BatterySavingMode.cpp
 *
 *  Created on: 2016-01-31
 *      Author: Roger
 */

#include <src/BatterySavingMode/BatterySavingMode.h>
#include <QDebug>
#include <QStringList>

BatterySavingMode::BatterySavingMode(QObject *_parent) :
    QObject(_parent),
    m_batterySavingMode(new PpsWatch("/pps/services/bfx/.all", this))
{
    connect(m_batterySavingMode, SIGNAL(ppsFileReady(const QVariantMap&)), this, SLOT(onPpsFileReady(const QVariantMap&)));
}

void BatterySavingMode::onPpsFileReady(const QVariantMap& map) {
    /*
     *  msg == launched means active
     *  action number == 0 means it's enabled
     *
     *  11 = turn off data services
     *  12 = turn off location services
     *  13 = turn off advanced interactions
     *  14 = screen timeout in seconds (not customizable)
     *  15 = unknown
     */

    if (map.contains("actions")) {
        const QVariantMap actions = map["actions"].toMap();
        const QStringList actionsKeys = actions.keys();

        bool thisActionIsEnabled = false;



        thisActionIsEnabled = actionsKeys.contains("11");
        if (m_turnOffDataServicesOption != thisActionIsEnabled) {
            m_turnOffDataServicesOption = thisActionIsEnabled;
            emit turnOffDataServicesOptionChanged(m_turnOffDataServicesOption);
        }

        thisActionIsEnabled = actionsKeys.contains("12");
        if (m_turnOffLocationServicesOption != thisActionIsEnabled) {
            m_turnOffLocationServicesOption = thisActionIsEnabled;
            emit turnOffLocationServicesOptionChanged(m_turnOffLocationServicesOption);
        }

        thisActionIsEnabled = actionsKeys.contains("13");
        if (m_turnOffAdvancedInteractionsOption != thisActionIsEnabled) {
            m_turnOffAdvancedInteractionsOption = thisActionIsEnabled;
            emit turnOffAdvancedInteractionsOptionChanged(m_turnOffAdvancedInteractionsOption);
        }

        if (actionsKeys.contains("14")) {
            if (m_screenTimeout != actions["14"].toInt()) {
                m_screenTimeout = actions["14"].toInt();
                emit screenTimeoutChanged(m_screenTimeout);
            }
        }
    }

    if (map.contains("threshold")) {
        if (m_turnOnBatterySavingModeAutomaticallyOption != (map["threshold"].toInt() != 0)) {
            m_turnOnBatterySavingModeAutomaticallyOption = (map["threshold"].toInt() != 0);
            emit turnOnBatterySavingModeAutomaticallyOptionChanged(m_turnOnBatterySavingModeAutomaticallyOption);
        }
    }

    if (map.contains("user_threshold")) {
        if (m_userThreshold != map["user_threshold"].toInt()) {
            m_userThreshold = map["user_threshold"].toInt();
            emit userThresholdChanged(m_userThreshold);
        }
    }

    if (map.contains("limit_cpu_performance")) {
        if (m_limitCpuPerformance != map["limit_cpu_performance"].toBool()) {
            m_limitCpuPerformance = map["limit_cpu_performance"].toBool();
            emit limitCpuPerformanceChanged(m_limitCpuPerformance);
        }
    }

    if (map.contains("msg")) {
        if (m_active != (map["msg"].toString() == "launched")) {
            m_active = (map["msg"].toString() == "launched");
            emit activeChanged(m_active);
        }
    }

    if (map.contains("trigger_source")) {
        if (m_triggerSource != map["trigger_source"].toString()) {
            m_triggerSource = map["trigger_source"].toString();
            emit triggerSourceChanged(m_triggerSource);
        }
    }
}
