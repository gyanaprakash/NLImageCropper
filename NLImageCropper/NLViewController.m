//
//  NLViewController.m
//  NLImageCropper
//
// Copyright © 2014, gyan (gyanaprakashgouda471@gmail.com)
// All rights reserved.
//

#import "NLViewController.h"

@interface NLViewController ()

@end

@implementation NLViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    _imageCropper = [[NLImageCropperView alloc] initWithFrame:self.view.bounds];
    [self.view addSubview:_imageCropper];
    [_imageCropper setImage:[UIImage imageNamed:@"sample"]];
    [_imageCropper setCropRegionRect:CGRectMake(10, 50, 450, 680)];
#ifndef ARC
    [_imageCropper release];
#endif
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
