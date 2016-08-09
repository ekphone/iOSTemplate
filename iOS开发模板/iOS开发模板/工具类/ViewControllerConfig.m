//
//  ViewControllerConfig.m
//  iOS开发模板
//
//  Created by 黄栋梁 on 16/8/9.
//  Copyright © 2016年 黄栋梁. All rights reserved.
//

#import "ViewControllerConfig.h"

@implementation ViewControllerConfig

-(void)configViewController:(UIViewController *)vc
{
    vc.navigationController.navigationBar.barTintColor = [UIColor redColor];
    vc.navigationController.navigationBar.barStyle = UIBarStyleBlackTranslucent;
    vc.navigationController.navigationBar.tintColor = [UIColor whiteColor];
}

@end
