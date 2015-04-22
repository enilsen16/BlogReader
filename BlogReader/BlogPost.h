//
//  BlogPost.h
//  BlogReader
//
//  Created by Erik Nilsen on 4/21/15.
//  Copyright (c) 2015 Erik Nilsen. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BlogPost : NSObject

@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *author;
@property (nonatomic, strong) NSString *thumbnail;
@property (nonatomic, strong) NSString *date;
@property (nonatomic, strong) NSURL *url;


- (id) initWithTitle:(NSString *) title;
+ (id) blogPostWithTitle:(NSString *) title;
- (NSURL *) thumbnailURL;

- (NSString *) formattedDate;

@end
