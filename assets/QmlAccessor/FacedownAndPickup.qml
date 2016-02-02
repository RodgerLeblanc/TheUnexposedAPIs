import bb.cascades 1.3

Container {
    Label {
        text: "Device is stationnary? " + (_facedownAndPickup.inHand ? "No" : "Yes")
        multiline: true
    }
    Label {
        text: "This property is used by the system for Settings -> Advanced Interactions -> Hold To Stay Awake"
        multiline: true
    }
}
