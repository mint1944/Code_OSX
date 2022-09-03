//
//  HomeView.swift
//  Swift_MVVM
//
//  Created by MINt K on 3/9/2022.
//

import SwiftUI

struct HomeView: View {
    var body: some View {
        NavigationView {
            Text(/*@START_MENU_TOKEN@*/"Hello, World!"/*@END_MENU_TOKEN@*/)
                .navigationBarTitleDisplayMode(.inline)
                .navigationTitle("首页")
                .navigationBarItems(trailing: Button(action: {  }, label: {Image(systemName: "person.crop.circle.fill")}))
        }
    }
}

struct HomeView_Previews: PreviewProvider {
    static var previews: some View {
        HomeView()
    }
}
