import bb.cascades 1.3

Container {
    Label { 
        text: "This class is more accurate with an headless app that monitors hub changes all day. Mark unread an old message to force a change in the value shown here." 
        multiline: true
    }
    Label { 
        text: "Any new PIM will show here: " + _hubWatch.newPimMessage_accountName + " " + _hubWatch.newPimMessage_unreadCount + (_hubWatch.newPimMessage_splashShown ? " *" : "") 
        multiline: true
    }    
}
