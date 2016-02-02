import bb.cascades 1.3

Container {
    Label { text: "Doesn't need access_phone permission" }
    Label { text: "Phone active: " + _phoneActive.phoneActive }    
    Label { text: "Phone area code: " + _phoneActive.countryCode + " " + _phoneActive.areaCode }    
}
