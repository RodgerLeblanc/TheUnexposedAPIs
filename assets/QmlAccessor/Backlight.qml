import bb.cascades 1.3

Container {
    Container {
        bottomPadding: ui.du(1)
        layout: StackLayout { orientation: LayoutOrientation.LeftToRight }
        Container {
            layoutProperties: StackLayoutProperties { spaceQuota: 1 }
            Button {
                text: "Set this app brightness to " + thisAppBrightnessSlider.immediateValue.toFixed(0) + "%"
                onClicked: { _backlight.setBrightnessForThisAppOnly(thisAppBrightnessSlider.immediateValue.toFixed(0)) }
            }
        }
        Container {
            layoutProperties: StackLayoutProperties { spaceQuota: 1 }
            Slider { 
                id: thisAppBrightnessSlider 
                fromValue: 0
                toValue: 100
            }
        }
    }
    Container {
        bottomPadding: ui.du(1)
        layout: StackLayout { orientation: LayoutOrientation.LeftToRight }
        Container {
            layoutProperties: StackLayoutProperties { spaceQuota: 1 }
            Button {
                text: "Set display brightness to " + displayBrightnessSlider.immediateValue.toFixed(0) + "%"
                onClicked: { _backlight.setDisplayBrightness(displayBrightnessSlider.immediateValue.toFixed(0)) }
            }
        }
        Container {
            layoutProperties: StackLayoutProperties { spaceQuota: 1 }
            Slider { 
                id: displayBrightnessSlider 
                fromValue: 0
                toValue: 100
            }
        }
    }
    Container {
        bottomPadding: ui.du(1)
        layout: StackLayout { orientation: LayoutOrientation.LeftToRight }
        Container {
            layoutProperties: StackLayoutProperties { spaceQuota: 1 }
            Button {
                text: "Set keypad brightness to " + keypadBrightnessSlider.immediateValue.toFixed(0) + "%"
                onClicked: { _backlight.setKeypadBrightness(keypadBrightnessSlider.immediateValue.toFixed(0)) }
            }
        }
        Container {
            layoutProperties: StackLayoutProperties { spaceQuota: 1 }
            Slider { 
                id: keypadBrightnessSlider 
                fromValue: 0
                toValue: 100
            }
        }
    }
}
