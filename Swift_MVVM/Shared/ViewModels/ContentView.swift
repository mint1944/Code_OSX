//
//  mainView.swift
//  Shared
//
//  Created by MINt K on 27/8/2022.
//

import SwiftUI

struct ContentView: View {
    var body: some View {
        TabView {
            ChatView()
                .tabItem {
                    Label("消息", systemImage: "message")
                }
        }
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}
