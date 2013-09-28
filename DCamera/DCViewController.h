//
//  DCViewController.h
//  DCamera
//
//  Created by Kashima Takumi on 2013/09/29.
//  Copyright (c) 2013年 TEAM TAKOYAKI. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface DCViewController : UIViewController<AVCaptureVideoDataOutputSampleBufferDelegate>
@property (nonatomic, strong) AVCaptureSession* session;
@property (nonatomic, strong) IBOutlet UIImageView *imageView;
@end
