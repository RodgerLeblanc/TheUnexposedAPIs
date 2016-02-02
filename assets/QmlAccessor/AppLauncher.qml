import bb.cascades 1.3

Container {
    Label {
        text: "Use AppNinja to get the appId of an app. You can also programmatically retrieve the appId of all apps installed on a device by going through /pps/system/installer/appdetails/"
        multiline: true
    }
    TextField { 
        id: appLauncherTextField 
        hintText: "sys.calculator.gYABgJidBvuZ89m_1j4PV2712.A"
    }
    Button {
        text: "Open this appId"
        onClicked: {
            _appLauncher.openThisApp(appLauncherTextField.text)
        }
    }
}
