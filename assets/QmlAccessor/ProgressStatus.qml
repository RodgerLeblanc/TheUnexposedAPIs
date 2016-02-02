import bb.cascades 1.3

Container {
    Label { 
        text: "This is the data shown in progress bar of Quick Settings"
        multiline: true
    }
    Label { text: "App: " + _progressStatus.app }
    Label { text: "Item: " + _progressStatus.item }
    Label { text: "Progress: " + _progressStatus.currentValue + "/" + _progressStatus.endValue }
}
