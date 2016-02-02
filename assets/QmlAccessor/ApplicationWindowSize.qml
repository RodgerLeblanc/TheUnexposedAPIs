import bb.cascades 1.3

Container {
    Label { text: "Screen width: " + _applicationWindowSize.width }
    Label { text: "Screen height: " + _applicationWindowSize.height }
    Label { text: "Active frame width: " + _applicationWindowSize.coverWidth }
    Label { text: "Active frame height: " + _applicationWindowSize.coverHeight }
}
