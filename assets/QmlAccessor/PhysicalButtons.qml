import bb.cascades 1.3

Container {
    Label { text: "Power button is " + (_physicalButtons.powerButtonIsUp ? "up" : "down") }
    Label { text: "Plus button is " + (_physicalButtons.plusButtonIsUp ? "up" : "down") }
    Label { text: "PlayPause button is " + (_physicalButtons.playpauseButtonIsUp ? "up" : "down") }
    Label { text: "Minus button is " + (_physicalButtons.minusButtonIsUp ? "up" : "down") }
}
