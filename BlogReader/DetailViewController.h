//
//  DetailViewController.h
//  BlogReader
//
//  Created by Erik Nilsen on 4/21/15.
//  Copyright (c) 2015 Erik Nilsen. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

