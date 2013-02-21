//
//  ScaryBugDoc.h
//  ScaryBugs
//
//  Created by Jacob Wan on 2/21/13.
//  Copyright (c) 2013 Cedexis. All rights reserved.
//

#import <Foundation/Foundation.h>

@class ScaryBugData;

@interface ScaryBugDoc : NSObject

@property (strong) ScaryBugData *data;
@property (strong) UIImage *thumbImage;
@property (strong) UIImage *fullImage;

- (id)initWithTitle:(NSString*)title AndRating:(float)rating AndThumbImage:(UIImage*)thumbImage AndFullImage:(UIImage*)fullImage;

@end
