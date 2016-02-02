/*
 * WifiWatcher.cpp
 *
 *  Created on: 2016-02-01
 *      Author: Roger
 */

#include <src/WifiWatcher/WifiWatcher.h>

WifiWatcher::WifiWatcher(QObject *_parent) :
    QObject(_parent),
    m_wifiWatcher(new PpsWatch("/pps/services/wifi/status_public", this))
{
    connect(m_wifiWatcher, SIGNAL(ppsFileReady(const QVariantMap&)), this, SLOT(onPpsFileReady(const QVariantMap&)));
}

void WifiWatcher::onPpsFileReady(const QVariantMap& map) {
    if (map.contains("lan_tether_power")) {
        if (m_lanTetherPowerEnabled != (map["lan_tether_power"].toString() != "off")) {
            m_lanTetherPowerEnabled = (map["lan_tether_power"].toString() != "off");
            emit lanTetherPowerEnabledChanged(m_lanTetherPowerEnabled);
        }
    }

    if (map.contains("lan_tether_state")) {
        if (m_lanTetherState != map["lan_tether_state"].toString()) {
            m_lanTetherState = map["lan_tether_state"].toString();
            emit lanTetherStateChanged(m_lanTetherState);
        }
    }

    if (map.contains("scan_results")) {
        m_scanResults = map["scan_results"].toList();
        emit scanResultsChanged(m_scanResults);
    }

    if (map.contains("wifi_connected")) {
        if (m_connected != map["wifi_connected"].toBool()) {
            m_connected = map["wifi_connected"].toBool();
            emit connectedChanged(m_connected);
        }
    }

    if (map.contains("wifi_connection_state")) {
        const QVariantMap wifi_connection_state = map["wifi_connection_state"].toMap();
        if (wifi_connection_state.contains("state")) {
            if (m_connectionState != wifi_connection_state["state"].toString()) {
                m_connectionState = wifi_connection_state["state"].toString();
                emit connectionStateChanged(m_connectionState);
            }
        }
        if (wifi_connection_state.contains("ssid")) {
            if (m_connectionSsid != wifi_connection_state["ssid"].toString()) {
                m_connectionSsid = wifi_connection_state["ssid"].toString();
                emit connectionSsidChanged(m_connectionSsid);
            }
        }
        if (wifi_connection_state.contains("bssid")) {
            if (m_connectionBssid != wifi_connection_state["bssid"].toString()) {
                m_connectionBssid = wifi_connection_state["bssid"].toString();
                emit connectionBssidChanged(m_connectionBssid);
            }
        }
    }
}
