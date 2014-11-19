//
//  NLImageCropperView.h
//  NLImageCropper
//
// Copyright © 2014, gyan (gyanaprakashgouda471@gmail.com)
// All rights reserved.
//
#import <UIKit/UIKit.h>
#import "NLCropViewLayer.h"
#define IMAGE_BOUNDRY_SPACE 10
enum rectPoint { LeftTop = 0, RightTop=1, LeftBottom = 2, RightBottom = 3, MoveCenter = 4, NoPoint = 1};
@interface NLImageCropperView : UIView
{
    UIImageView* _imageView;
    UIImage* _image;
    NLCropViewLayer* _cropView;
    enum rectPoint _movePoint;
    CGRect _cropRect;
    CGRect _translatedCropRect;
    CGPoint _lastMovePoint;
    CGFloat _scalingFactor;
}
- (void)setCropRegionRect:(CGRect)cropRect;
- (void) setImage:(UIImage*)image;
- (void) setFrame:(CGRect)frame;
- (void) reLayoutView;
- (UIImage *)getCroppedImage;
@end
