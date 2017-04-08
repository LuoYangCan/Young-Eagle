//
//  CYHelper.h
//  Young Eagles
//
//  Created by NMID on 2017/4/1.
//  Copyright © 2017年 NMID. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#define screenWidth  [UIScreen mainScreen].bounds.size.width
#define screenHeight [UIScreen mainScreen].bounds.size.height
#define LeftOffX screenWidth * 0.81
#define LeftBlue [UIColor colorWithRed:65/255.0 green:105/255.0 blue:225/255.0 alpha:1]
#define RGreen [UIColor colorWithRed:34/255.0 green:139/255.0 blue:34/255.0 alpha:1]
#define RBlue [UIColor colorWithRed:8/255.0 green:46/255.0 blue:84/255.0 alpha:1]
#define ROrange [UIColor colorWithRed:255/255.0 green:125/255.0 blue:64/255.0 alpha:1]
#define RRed [UIColor colorWithRed:255/255.0 green:69/255.0 blue:0/255.0 alpha:1]
@interface CYHelper : NSObject
+(UIColor *)getColorfrom:(NSIndexPath *)IndexPath;           //从几个背景色中选一个
+(NSString *)getFirstWordFrom:(NSArray *)StrArray andRow:(NSIndexPath *)indexPath;//取名字的第一个字
@end
