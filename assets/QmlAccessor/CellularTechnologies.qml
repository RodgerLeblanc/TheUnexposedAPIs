import bb.cascades 1.3

Container {
    Label { text: "Carrier name: " + _cellularTechnologies.displayedCarrierName }
    Label { text: "Signal strength bars: " + _cellularTechnologies.signalStrengthBars }
    Label { text: "Technology indicator: " + _cellularTechnologies.technologyIndicator }
}
