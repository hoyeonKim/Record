//
//  ViewController.h
//  p212
//
//  Created by SDT-1 on 2014. 1. 16..
//  Copyright (c) 2014년 SDT-1. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface ViewController : UIViewController<UITableViewDataSource,UITableViewDelegate,AVAudioRecorderDelegate>
@property (weak, nonatomic) IBOutlet UITableView *table;
@property (weak, nonatomic) IBOutlet UILabel *status;
-(IBAction)toggleRecording:(id)sender;

@end
