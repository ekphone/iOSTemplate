//
//  SingletonObject.m
//  iOS开发模板
//
//  Created by 黄栋梁 on 16/8/9.
//  Copyright © 2016年 黄栋梁. All rights reserved.
//

#import "SingletonObject.h"

@implementation SingletonObject

+(instancetype)sharedInstance
{
    static id _s = nil;
    if (!_s) {
        _s = [[self alloc]init];
    }
    return _s;
}

@end
