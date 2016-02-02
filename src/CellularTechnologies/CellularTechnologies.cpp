/*
 * CellularTechnologies.cpp
 *
 *  Created on: 2016-01-31
 *      Author: Roger
 */

#include <src/CellularTechnologies/CellularTechnologies.h>

CellularTechnologies::CellularTechnologies(QObject *_parent) :
    QObject(_parent),
    m_cellularTechnologies1(new PpsWatch("/pps/services/cellular/radioctrl/.all", this)),
    m_cellularTechnologies2(new PpsWatch("/pps/services/cellular/uicc/card0/status_public", this)),
    m_cellularTechnologies3(new PpsWatch("/pps/services/rum/csm/status_public", this))
{
    connect(m_cellularTechnologies1, SIGNAL(ppsFileReady(const QVariantMap&)), this, SLOT(onPpsFileReady(const QVariantMap&)));
    connect(m_cellularTechnologies2, SIGNAL(ppsFileReady(const QVariantMap&)), this, SLOT(onPpsFileReady(const QVariantMap&)));
    connect(m_cellularTechnologies3, SIGNAL(ppsFileReady(const QVariantMap&)), this, SLOT(onPpsFileReady(const QVariantMap&)));
}

void CellularTechnologies::onPpsFileReady(const QVariantMap& map) {
    if (map.contains("network_technology")) {
        if (m_networkTechnology != map["network_technology"].toString()) {
            m_networkTechnology = map["network_technology"].toString();
            emit networkTechnologyChanged(m_networkTechnology);
        }
    }

    if (map.contains("roaming")) {
        const QVariantMap roaming = map["roaming"].toMap();
        if (roaming.contains("state")) {
            if (m_roaming != roaming["state"].toBool()) {
                m_roaming = map["state"].toBool();
                emit roamingChanged(m_roaming);
            }
        }
    }

    if (map.contains("signal_strength")) {
        const QVariantMap signal_strength = map["signal_strength"].toMap();
        if (signal_strength.contains("bars")) {
            if (m_signalStrengthBars != signal_strength["bars"].toInt()) {
                m_signalStrengthBars = signal_strength["bars"].toInt();
                emit signalStrengthBarsChanged(m_signalStrengthBars);
            }
        }
        if (signal_strength.contains("RSSI")) {
            if (m_signalStrengthRssi != signal_strength["RSSI"].toInt()) {
                m_signalStrengthRssi = signal_strength["RSSI"].toInt();
                emit signalStrengthRssiChanged(m_signalStrengthRssi);
            }
        }
    }

    if (map.contains("configured_technologies")) {
        const QVariantMap configured_technologies = map["configured_technologies"].toMap();
        if (configured_technologies.contains("enabled")) {
            const QString joinSeparator = ",";
            m_configuredTechnologies.sort();
            QStringList enabled = configured_technologies["enabled"].toStringList();
            enabled.sort();
            if (m_configuredTechnologies.join(joinSeparator) != enabled.join(joinSeparator)) {
                m_configuredTechnologies = enabled;
                emit configuredTechnologiesChanged(m_configuredTechnologies);
            }
        }
    }

    if (map.contains("scan_mode")) {
        if (m_scanMode != map["scan_mode"].toString()) {
            m_scanMode = map["scan_mode"].toString();
            emit scanModeChanged(m_scanMode);
        }
    }

    if (map.contains("cell_search_status")) {
        if (m_cellSearchStatus != map["cell_search_status"].toString()) {
            m_cellSearchStatus = map["cell_search_status"].toString();
            emit cellSearchStatusChanged(m_cellSearchStatus);
        }
    }

    if (map.contains("network_technology")) {
        // I don't save it as a QStringList as there should be only one technology used at a time
        const QString joinSeparator = ",";
        const QString network_technology = map["network_technology"].toStringList().join(joinSeparator);
        if (m_networkTechnology != network_technology) {
            m_networkTechnology = network_technology;
            emit networkTechnologyChanged(m_networkTechnology);
        }
    }

    if (map.contains("current_ons")) {
        const QVariantMap current_ons = map["current_ons"].toMap();
        if (current_ons.contains("name_long")) {
            if (m_displayedCarrierName != current_ons["name_long"].toString()) {
                m_displayedCarrierName = current_ons["name_long"].toString();
                emit displayedCarrierNameChanged(m_displayedCarrierName);
            }
        }
    }

    if (map.contains("home_carrier")) {
        const QVariantMap home_carrier = map["home_carrier"].toMap();
        if (home_carrier.contains("name_long")) {
            if (m_parentCarrierName != home_carrier["name_long"].toString()) {
                m_parentCarrierName = home_carrier["name_long"].toString();
                emit parentCarrierNameChanged(m_parentCarrierName);
            }
        }
    }

    if (map.contains("home_country")) {
        if (m_homeCountry != map["home_country"].toString()) {
            m_homeCountry = map["home_country"].toString();
            emit homeCountryChanged(m_homeCountry);
        }
    }

    if (map.contains("connection_state")) {
        if (m_connectionState != map["connection_state"].toString()) {
            m_connectionState = map["connection_state"].toString();
            emit connectionStateChanged(m_connectionState);
        }
    }

    if (map.contains("is_on_emergency_call")) {
        if (m_isOnEmergencyCall != map["is_on_emergency_call"].toBool()) {
            m_isOnEmergencyCall = map["is_on_emergency_call"].toBool();
            emit isOnEmergencyCallChanged(m_isOnEmergencyCall);
        }
    }

    if (map.contains("technology_indicator")) {
        if (m_technologyIndicator != map["technology_indicator"].toString()) {
            m_technologyIndicator = map["technology_indicator"].toString();
            emit technologyIndicatorChanged(m_technologyIndicator);
        }
    }
}
