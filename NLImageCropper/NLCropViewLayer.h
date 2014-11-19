//
//  NLCropViewLayer.h
//  NLImageCropper
//
// Copyright © 2014, gyan (gyanaprakashgouda471@gmail.com)
// All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NLCropViewLayer : UIView
{
    CGRect _cropRect;
    UIImageView* leftTopCorner;
    UIImageView* leftBottomCorner;
    UIImageView* rightTopCorner;
    UIImageView* rightBottomCorner;
}
- (void)setCropRegionRect:(CGRect)cropRect;
@end
