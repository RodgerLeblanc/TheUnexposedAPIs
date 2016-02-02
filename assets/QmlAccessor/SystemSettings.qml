import bb.cascades 1.3

Container {
    Label { 
        text: "Message On Lockscreen Line 1:\n" + _systemSettings.messageOnLockscreenLine1
        multiline: true
    }    
    Label { 
        text: "Message On Lockscreen Line 2:\n" + _systemSettings.messageOnLockscreenLine2
        multiline: true
    }    
    Label { text: "Swipe To Wakeup: " + _systemSettings.swipeToWakeup }    
}
