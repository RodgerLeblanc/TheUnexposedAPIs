import bb.cascades 1.3

Container {
    Label { text: "Connected: " + _wifiWatcher.connected }
    Label { text: "Connection State: " + _wifiWatcher.connectionState }
    Label { text: "Connection SSID: " + _wifiWatcher.connectionSsid }
    Label { text: "Connection BSSID: " + _wifiWatcher.connectionBssid }
}
