/*
 * RadioManager.cpp
 *
 *  Created on: 2016-02-01
 *      Author: Roger
 */

#include <src/RadioManager/RadioManager.h>

RadioManager::RadioManager(QObject *_parent) :
    QObject(_parent),
    m_radioManager1(new PpsWatch("/pps/services/unifiedradiomgr/status", this)),
    m_radioManager2(new PpsWatch("/pps/services/geolocation/status", this))
{
    connect(m_radioManager1, SIGNAL(ppsFileReady(const QVariantMap&)), this, SLOT(onPpsFileReady(const QVariantMap&)));
    connect(m_radioManager2, SIGNAL(ppsFileReady(const QVariantMap&)), this, SLOT(onPpsFileReady(const QVariantMap&)));
}

void RadioManager::onPpsFileReady(const QVariantMap& map) {
    if (map.contains("airplane_mode")) {
        const QVariantMap airplane_mode = map["airplane_mode"].toMap();
        if (airplane_mode.contains("mode")) {
            if (m_airplaneModeEnabled != (airplane_mode["mode"].toString() != "OFF")) {
                m_airplaneModeEnabled = (airplane_mode["mode"].toString() != "OFF");
                emit airplaneModeEnabledChanged(m_airplaneModeEnabled);
            }
        }
    }

    if (map.contains("bedside_mode")) {
        const QVariantMap bedside_mode = map["bedside_mode"].toMap();
        if (bedside_mode.contains("mode")) {
            if (m_bedsideModeEnabled != (bedside_mode["mode"].toString() != "OFF")) {
                m_bedsideModeEnabled = (bedside_mode["mode"].toString() != "OFF");
                emit bedsideModeEnabledChanged(m_bedsideModeEnabled);
            }
        }
    }

    if (map.contains("bluetooth")) {
        const QVariantMap bluetooth = map["bluetooth"].toMap();
        if (bluetooth.contains("state")) {
            if (m_bluetoothEnabled != (bluetooth["state"].toString() != "OFF")) {
                m_bluetoothEnabled = (bluetooth["state"].toString() != "OFF");
                emit bluetoothEnabledChanged(m_bluetoothEnabled);
            }
        }
    }

    if (map.contains("cellular")) {
        const QVariantMap cellular = map["cellular"].toMap();
        if (cellular.contains("state")) {
            if (m_cellularEnabled != (cellular["state"].toString() != "OFF")) {
                m_cellularEnabled = (cellular["state"].toString() != "OFF");
                emit cellularEnabledChanged(m_cellularEnabled);
            }
        }
    }

    if (map.contains("data_service_mode")) {
        const QVariantMap data_service_mode = map["data_service_mode"].toMap();
        if (data_service_mode.contains("state")) {
            if (m_dataServiceModeEnabled != (data_service_mode["state"].toString() != "OFF")) {
                m_dataServiceModeEnabled = (data_service_mode["state"].toString() != "OFF");
                emit dataServiceModeEnabledChanged(m_dataServiceModeEnabled);
            }
        }
    }

    if (map.contains("ecm_mode")) {
        const QVariantMap ecm_mode = map["ecm_mode"].toMap();
        if (ecm_mode.contains("mode")) {
            if (m_ecmModeEnabled != (ecm_mode["mode"].toString() != "OFF")) {
                m_ecmModeEnabled = (ecm_mode["mode"].toString() != "OFF");
                emit ecmModeEnabledChanged(m_ecmModeEnabled);
            }
        }
    }

    if (map.contains("status")) {
        const QVariantMap status = map["status"].toMap();
        if (status.contains("location_manager_location_on")) {
            if (m_gpsEnabled != status["location_manager_location_on"].toBool()) {
                m_gpsEnabled = status["location_manager_location_on"].toBool();
                emit gpsEnabledChanged(m_gpsEnabled);
            }
        }
    }

    if (map.contains("nfc")) {
        const QVariantMap nfc = map["nfc"].toMap();
        if (nfc.contains("state")) {
            if (m_nfcEnabled != (nfc["state"].toString() != "OFF")) {
                m_nfcEnabled = (nfc["state"].toString() != "OFF");
                emit nfcEnabledChanged(m_nfcEnabled);
            }
        }
    }

    if (map.contains("wifi")) {
        const QVariantMap wifi = map["wifi"].toMap();
        if (wifi.contains("state")) {
            if (m_wifiEnabled != (wifi["state"].toString() != "OFF")) {
                m_wifiEnabled = (wifi["state"].toString() != "OFF");
                emit wifiEnabledChanged(m_wifiEnabled);
            }
        }
    }
}
