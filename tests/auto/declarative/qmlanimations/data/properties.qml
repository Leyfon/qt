import Qt 4.6

Rectangle {
    width: 400
    height: 400
    Rectangle {
        id: theRect
        objectName: "TheRect"
        color: "red"
        width: 50; height: 50
        x: 100; y: 100
        x: NumberAnimation { to: 200 }
    }
}