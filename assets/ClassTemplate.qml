import bb.cascades 1.3

Container {
    id: thisClass
    property string className
    
    minWidth: _applicationWindowSize.width
    bottomPadding: ui.du(2)
    
    onControlAdded: { control.visible = false }
    onTouch: {
        if (event.isUp()) {
            var classTemplateContent = thisClass.controls[thisClass.count() - 1]
            classTemplateContent.visible = !classTemplateContent.visible
        }
    }
        
    Label {
        text: className
        multiline: true
        textStyle.fontSize: FontSize.XXLarge
    }
}
