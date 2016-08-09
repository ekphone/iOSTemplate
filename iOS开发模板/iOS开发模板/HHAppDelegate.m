//
//  HHAppDelegate.m
//  iOS开发模板
//
//  Created by 黄栋梁 on 16/8/9.
//  Copyright © 2016年 黄栋梁. All rights reserved.
//

#import "HHAppDelegate.h"
#import <UMMobClick/MobClick.h>
@implementation HHAppDelegate



- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    
    [super application:application didFinishLaunchingWithOptions:launchOptions];
    
    
    
    /**
     *  appkey,secret参见友盟网站的个人中心,创建的appkey
     */
    UMConfigInstance.appKey = @"57a99100e0f55ada5a00083d";
    UMConfigInstance.secret = @"huangdlek";
    
    [MobClick startWithConfigure:UMConfigInstance];
    
    
    return YES;
}


@end
