//
//  mainView.swift
//  Shared
//
//  Created by MINt K on 27/8/2022.
//

import SwiftUI

struct mainView: View {
    @StateObject var NewmainViewModel = mainViewModel()
    var body: some View {
        NavigationView {
            List {
                Text("\(NewmainViewModel.new.name)")
                Text("\(NewmainViewModel.new.gender)")
                Text("\(NewmainViewModel.new.age)")
                Text("\(NewmainViewModel.new.word)")
            }
            .navigationTitle("MVVM_Socket")
        }
    }
}

struct mainView_Previews: PreviewProvider {
    static var previews: some View {
        mainView()
    }
}
