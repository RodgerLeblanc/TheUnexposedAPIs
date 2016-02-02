/*
 * SystemSettings.cpp
 *
 *  Created on: 2016-01-31
 *      Author: Roger
 */

#include <src/SystemSettings/SystemSettings.h>

SystemSettings::SystemSettings(QObject *_parent) :
    QObject(_parent),
    m_systemSettings(new PpsWatch("/pps/system/settings", this))
{
    connect(m_systemSettings, SIGNAL(ppsFileReady(const QVariantMap&)), this, SLOT(onPpsFileReady(const QVariantMap&)));
}

void SystemSettings::onPpsFileReady(const QVariantMap& map) {
    if (map.contains("allowAlternateAppSource")) {
        if (m_allowAlternateAppSource != map["allowAlternateAppSource"].toBool()) {
            m_allowAlternateAppSource = map["allowAlternateAppSource"].toBool();
            emit allowAlternateAppSourceChanged(m_allowAlternateAppSource);
        }
    }

    if (map.contains("autoHideActionbar")) {
        if (m_autoHideActionBar != map["autoHideActionbar"].toBool()) {
            m_autoHideActionBar = map["autoHideActionbar"].toBool();
            emit autoHideActionBarChanged(m_autoHideActionBar);
        }
    }

    if (map.contains("bypassScreenlock")) {
        if (m_bypassScreenlock != map["bypassScreenlock"].toBool()) {
            m_bypassScreenlock = map["bypassScreenlock"].toBool();
            emit bypassScreenlockChanged(m_bypassScreenlock);
        }
    }

    if (map.contains("checkAppsForMalware")) {
        if (m_checkAppsForMalware != map["checkAppsForMalware"].toBool()) {
            m_checkAppsForMalware = map["checkAppsForMalware"].toBool();
            emit checkAppsForMalwareChanged(m_checkAppsForMalware);
        }
    }

    if (map.contains("checkAppsForMalware")) {
        if (m_checkAppsForMalware != map["checkAppsForMalware"].toBool()) {
            m_checkAppsForMalware = map["checkAppsForMalware"].toBool();
            emit checkAppsForMalwareChanged(m_checkAppsForMalware);
        }
    }

    if (map.contains("hourFormat")) {
        if (m_hourFormat != map["hourFormat"].toInt()) {
            m_hourFormat = map["hourFormat"].toInt();
            emit hourFormatChanged(m_hourFormat);
        }
    }

    if (map.contains("lang_countryCode")) {
        if (m_langCountryCode != map["lang_countryCode"].toString()) {
            m_langCountryCode = map["lang_countryCode"].toString();
            emit langCountryCodeChanged(m_langCountryCode);
        }
    }

    if (map.contains("lockScreenTimeout")) {
        if (m_lockScreenTimeout != map["lockScreenTimeout"].toInt()) {
            m_lockScreenTimeout = map["lockScreenTimeout"].toInt();
            emit lockScreenTimeoutChanged(m_lockScreenTimeout);
        }
    }

    if (map.contains("messageOnLockscreen_line1")) {
        if (m_messageOnLockscreenLine1 != map["messageOnLockscreen_line1"].toString()) {
            m_messageOnLockscreenLine1 = map["messageOnLockscreen_line1"].toString();
            emit messageOnLockscreenLine1Changed(m_messageOnLockscreenLine1);
        }
    }

    if (map.contains("messageOnLockscreen_line2")) {
        if (m_messageOnLockscreenLine2 != map["messageOnLockscreen_line2"].toString()) {
            m_messageOnLockscreenLine2 = map["messageOnLockscreen_line2"].toString();
            emit messageOnLockscreenLine2Changed(m_messageOnLockscreenLine2);
        }
    }

    if (map.contains("showActionBarLabels")) {
        if (m_showActionBarLabels != map["showActionBarLabels"].toBool()) {
            m_showActionBarLabels = map["showActionBarLabels"].toBool();
            emit showActionBarLabelsChanged(m_showActionBarLabels);
        }
    }

    if (map.contains("swipeToWakeup")) {
        if (m_swipeToWakeup != map["swipeToWakeup"].toBool()) {
            m_swipeToWakeup = map["swipeToWakeup"].toBool();
            emit swipeToWakeupChanged(m_swipeToWakeup);
        }
    }

    if (map.contains("tzDatabaseId")) {
        if (m_tzDatabaseId != map["tzDatabaseId"].toString()) {
            m_tzDatabaseId = map["tzDatabaseId"].toString();
            emit tzDatabaseIdChanged(m_tzDatabaseId);
        }
    }
}
