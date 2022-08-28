//
//  mainViewModel.swift
//  Swift_MVVM
//
//  Created by MINt K on 27/8/2022.
//

import Foundation

public class mainViewModel: mainModel, ObservableObject {
    
    @Published var new = userInfo()
    
    func getUser() {
        print("用户的姓名为: \(new.name)")
    }
}
