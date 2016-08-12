//
//  UUID.m
//  黄栋梁
//
//  Created by huangdl on 14-6-5.
//  Copyright (c) 2014年 huangdl. All rights reserved.
//

#import "UUID.h"

@implementation UUID

+(NSString *)uuid
{
    CFUUIDRef uuid_ref = CFUUIDCreate(NULL);
    CFStringRef strref=CFUUIDCreateString(NULL, uuid_ref);
    NSString *string=[NSString stringWithFormat:@"%@",strref];
    return string;
}

@end
