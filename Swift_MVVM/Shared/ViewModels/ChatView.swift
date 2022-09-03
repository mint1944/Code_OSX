//
//  ChatView.swift
//  Swift_MVVM
//
//  Created by MINt K on 3/9/2022.
//

import SwiftUI

struct ChatView: View {
    @State var MessageBoxHeight:CGFloat = 70
    var body: some View {
        NavigationView {
            ScrollView {
                VStack(spacing: 0) {
                    HStack(spacing: 0) {
                        HStack {
                            Image(systemName: "server.rack")
                                .font(.title)
                        }
                        .frame(width: MessageBoxHeight, height: MessageBoxHeight)
                        //.background(Color.blue)
                        VStack(alignment: .leading, spacing: 5) {
                            Text("来自服务器")
                                .font(.headline)
                            Text("Messages.....")
                                .font(.footnote)
                        }
                        .frame(maxWidth: .infinity, maxHeight: .infinity, alignment: .topLeading)
                        //.background(Color.cyan)
                        .padding(10)
                    }
                    .frame(height: MessageBoxHeight)
                    .frame(maxWidth: 250)
                    .background(Color.gray.brightness(0.4))
                    .clipShape(RoundedRectangle(cornerRadius: 20, style: .continuous))
                    .frame(maxWidth: .infinity, alignment: .leading)
                    .padding(10)
                    
                    HStack(spacing: 0) {
                        HStack {
                            Image(systemName: "person")
                                .font(.title)
                        }
                        .frame(width: MessageBoxHeight, height: MessageBoxHeight)
                        //.background(Color.blue)
                        VStack(alignment: .leading, spacing: 5) {
                            Text("来自客户端")
                                .font(.headline)
                            Text("Messages.....")
                                .font(.footnote)
                        }
                        .frame(maxWidth: .infinity, maxHeight: .infinity, alignment: .topLeading)
                        //.background(Color.cyan)
                        .padding(10)
                    }
                    .frame(height: MessageBoxHeight)
                    .frame(maxWidth: 250)
                    .background(Color.gray.brightness(0.4))
                    .clipShape(RoundedRectangle(cornerRadius: 20, style: .continuous))
                    .frame(maxWidth: .infinity, alignment: .trailing)
                    .padding(10)
                }
            }
            .navigationBarTitleDisplayMode(.inline)
            .navigationTitle("消息")
            .navigationBarItems(trailing: Button(action: {  }, label: {Image(systemName: "person.crop.circle.fill")}))
        }
    }
}

struct ChatView_Previews: PreviewProvider {
    static var previews: some View {
        ChatView()
    }
}
