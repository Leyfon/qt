import Qt 4.6

Rectangle {
    id: card
    width: 100; height: 100

    states: [
        State {
            name: "placed"
            onCompleted: card.state = "idle"
            StateChangeScript { script: console.log("entering placed") }
        },
        State {
            name: "idle"
            StateChangeScript { script: console.log("entering idle") }
        }
    ]

    MouseRegion {
        anchors.fill: parent
        onClicked: card.state = "placed"
    }
}