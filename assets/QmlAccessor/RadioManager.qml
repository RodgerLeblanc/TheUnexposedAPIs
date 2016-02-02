import bb.cascades 1.3

Container {
    Label { text: "Airplane mode enabled: " + _radioManager.airplaneModeEnabled }    
    Label { text: "Bedside mode enabled: " + _radioManager.bedsideModeEnabled }    
    Label { text: "Bluetooth enabled: " + _radioManager.bluetoothEnabled }    
    Label { text: "Cellular enabled: " + _radioManager.cellularEnabled }    
    Label { text: "Data Service mode enabled: " + _radioManager.dataServiceModeEnabled }    
    Label { text: "Ecm mode enabled: " + _radioManager.ecmModeEnabled }    
    Label { text: "GPS enabled: " + _radioManager.gpsEnabled }    
    Label { text: "NFC enabled: " + _radioManager.nfcEnabled }    
    Label { text: "Wifi enabled: " + _radioManager.wifiEnabled }    
}
