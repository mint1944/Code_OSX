//
//  mainView.swift
//  Shared
//
//  Created by MINt K on 27/8/2022.
//

import SwiftUI

struct mainView: View {
    @State var Height:CGFloat = 100
    var body: some View {
        NavigationView {
            ScrollView(showsIndicators: false) {
                VStack(spacing: 0) {
                    ForEach(Range(1...5)) { times in
                        HStack(spacing: 0) {
                            Rectangle()
                                .frame(width: Height, height: Height)
                            VStack(spacing: 0) {
                                
                            }
                            .frame(height: Height)
                            .frame(maxWidth: .infinity)
                            .background(Color.blue)
                        }
                        .frame(height: Height)
                        .frame(maxWidth: .infinity)
                        .background(Color.gray.brightness(0.3))
                        .clipShape(RoundedRectangle(cornerRadius: 15, style: .continuous))
                        .padding(.horizontal)
                        .padding(.vertical, 5)
                    }
                }
            }
            .navigationTitle("Swift 5.0")
        }
    }
}

struct mainView_Previews: PreviewProvider {
    static var previews: some View {
        mainView()
    }
}
