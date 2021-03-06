//
//  ALDBigPhotoView.h
//  OutdoorClub
//
//  Created by yulong chen on 12-12-28.
//  Copyright (c) 2012年 qw. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ALDAsyncLoadImage.h"

@interface ALDBigPhotoView : UIScrollView<UIScrollViewDelegate,AsyncLoadImageDelegate> {
	BOOL _isZoomed;
}

-(void) startActivityIndicator;
- (void)killActivityIndicator;

// inits this view to have a button over the image
- (id)initWithFrame:(CGRect)frame target:(id)target action:(SEL)action;

- (void)resetZoom;

-(void) setImage:(UIImage*)image;

@property (assign,nonatomic) id target;
@property (nonatomic) SEL action;
@property (strong, nonatomic,readonly) UIImageView *imageView;
@property (retain,nonatomic) UIImage *defaultImage;
@property (strong, nonatomic,readonly) UIButton *button;
@property (strong, nonatomic,readonly) UIActivityIndicatorView *activity;

- (void)setImageWithURL:(NSString *)imageUrl;
- (void)setImageWithURL:(NSString *)imageUrl placeholderImage:(UIImage *)placeholder;
@end
