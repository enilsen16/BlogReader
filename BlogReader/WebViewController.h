//
//  WebViewController.h
//  BlogReader
//
//  Created by Erik Nilsen on 4/21/15.
//  Copyright (c) 2015 Erik Nilsen. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WebViewController : UIViewController

@property (strong, nonatomic) NSURL *blogPostURL;
@property (strong, nonatomic) IBOutlet UIWebView *webView;

@end
