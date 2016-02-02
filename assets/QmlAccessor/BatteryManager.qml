import bb.cascades 1.3

Container {
    Label { text: "State of charge: " + _batteryManager.stateOfCharge }    
    Label { text: "mAh consumed now: " + _batteryManager.mAhConsumedNow }    
}
