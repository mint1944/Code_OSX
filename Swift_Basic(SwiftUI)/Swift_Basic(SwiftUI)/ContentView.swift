//
//  ContentView.swift
//  Swift_Basic(SwiftUI)
//
//  Created by MINt K on 20/9/2022.
//

import SwiftUI

struct ContentView: View {
    @State var Closed:Bool = true
    var body: some View {
        HStack(spacing: 0) {
            VStack {
                
            }
            .frame(width: Closed == true ? 100 : 150, height: 400)
            .frame(maxWidth: .infinity, maxHeight: .infinity, alignment: .leading)
            .background(Color.purple)
            .overlay(
                Button(action: { close() }, label: {
                    Image(systemName: "chevron.left")
                        .frame(width: 30, height: 50)
                        .foregroundColor(Color.white)
                        .font(.headline)
                        .background(
                            Rectangle()
                                .frame(width: 30, height: 50)
                                .foregroundColor(Color.black.opacity(0.1))
                        )
                })
                    .buttonStyle(.plain)
                    .offset(x: Closed == true ? 35 : 65)
            )
            VStack {
                
            }
            .frame(width: Closed == true ? 500 : 450, height: 400)
            .background(Color.blue.brightness(0.8))
        }
        .frame(width: 600, height: 400)
        .background(Color.white)
    }
    func close() -> Void {
        if(Closed) {
            Closed = false;
        } else {
            Closed = true;
        }
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}
