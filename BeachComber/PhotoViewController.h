//
//  PhotoViewController.h
//  BeachComber
//
//  Created by Jeff Proctor on 12-07-20.
//  Copyright (c) 2012 University of British Columbia. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PhotoViewController : UIViewController {
    UIImageView *imageView;
    UIImage *image;
}

@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UIImage *image;


- (id)initWithImage:(UIImage*)initialImage;

@end
