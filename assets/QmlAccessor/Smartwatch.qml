import bb.cascades 1.3

Container {
    Label {
        text: "Will send a message to Pebble or Vector smartwatch if Talk2Watch or Bridge app is installed on the phone. If none of those apps are installed, nothing will happen (it's safe to use it even if those apps are not installed)."
        multiline: true
    }
    TextField {
        id: smartwatchTextField
        hintText: "Message to send to smartwatch"
    }
    Button {
        text: "Send message to smartwatch"
        onClicked: {
            _t2w.sendSms(smartwatchTextField.text, Application.applicationName)
        }
    }
}
