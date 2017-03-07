//
//  ViewController.swift
//  MockSFIntegration
//
//  Created by Shad Downey on 3/7/17.
//  Copyright © 2017 Shad Downey. All rights reserved.
//

import UIKit

import ServiceCore
import ServiceKnowledge

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
    }

    @IBAction func buttonPress(_ sender: Any) {
        SCServiceCloud.sharedInstance().knowledge.setInterfaceVisible(true,
                                                                      animated: true,
                                                                      completion: nil)
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}

