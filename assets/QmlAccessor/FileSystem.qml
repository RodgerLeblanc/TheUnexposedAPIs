import bb.cascades 1.3

Container {
    Label { text: "Box capacity: " + _fileSystem.boxCapacity }    
    Label { text: "Dropox free space: " + _fileSystem.dropboxFreespace }    
    Label { text: "Local drive busy: " + _fileSystem.localBusy }    
    Label { text: "SD available: " + _fileSystem.sdOnline}    
}
