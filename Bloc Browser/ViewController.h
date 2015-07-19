//
//  ViewController.h
//  Bloc Browser
//
//  Created by psytronx on 7/17/15.
//  Copyright (c) 2015 Logical Dimension. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

/**
 Replaces the web view with a fresh one, erasing all history. Also updates the URL field and toolbar buttons appropriately.
 */
- (void) resetWebView;

@end

