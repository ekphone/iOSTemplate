//
//  HHNet.m
//  iOS开发模板
//
//  Created by 黄栋梁 on 16/8/9.
//  Copyright © 2016年 黄栋梁. All rights reserved.
//

#import "HHNet.h"


@implementation HHNet
{
    AFHTTPRequestOperationManager *_manager;
}
- (instancetype)init
{
    self = [super init];
    if (self) {
        _manager = [AFHTTPRequestOperationManager manager];
        _manager.responseSerializer = [AFHTTPResponseSerializer serializer];
    }
    return self;
}

-(void)GET:(NSString *)url parameters:(id)parameters success:(void (^)(AFHTTPRequestOperation *, id))success failure:(void (^)(AFHTTPRequestOperation *, NSError *))failure
{
    [_manager GET:url parameters:parameters success:success failure:failure];
}

-(void)POST:(NSString *)URLString parameters:(id)parameters success:(void (^)(AFHTTPRequestOperation *, id))success failure:(void (^)(AFHTTPRequestOperation *, NSError *))failure
{
    [_manager POST:URLString parameters:parameters success:success failure:failure];
}

-(void)POST:(NSString *)URLString parameters:(id)parameters constructingBodyWithBlock:(void (^)(id<AFMultipartFormData>))block success:(void (^)(AFHTTPRequestOperation *, id))success failure:(void (^)(AFHTTPRequestOperation *, NSError *))failure
{
    [_manager POST:URLString parameters:parameters constructingBodyWithBlock:block success:success failure:failure];
}











@end
