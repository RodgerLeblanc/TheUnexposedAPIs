import bb.cascades 1.3

Container {
    Label { text: "Auto Update Time Zone: " + _timeZone.autoUpdateTimeZone }
    Label { text: "Last Zone Detected: " + _timeZone.lastZoneDetected }
    Label { text: "Set Time Automatically: " + _timeZone.setTimeAutomatically }
}
