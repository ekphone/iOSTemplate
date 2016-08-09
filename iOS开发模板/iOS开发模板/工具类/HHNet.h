//
//  HHNet.h
//  iOS开发模板
//
//  Created by 黄栋梁 on 16/8/9.
//  Copyright © 2016年 黄栋梁. All rights reserved.
//

#import "SingletonObject.h"
#import "AFNetworking.h"

@interface HHNet : SingletonObject

/**
 *  下载,上传,封装AFNetWorking
 */

-(void)GET:(NSString *)url parameters:(id)parameters success:(void (^)(AFHTTPRequestOperation *, id))success failure:(void (^)(AFHTTPRequestOperation *, NSError *))failure;


-(void)POST:(NSString *)URLString parameters:(id)parameters success:(void (^)(AFHTTPRequestOperation *, id))success failure:(void (^)(AFHTTPRequestOperation *, NSError *))failure;

-(void)POST:(NSString *)URLString parameters:(id)parameters constructingBodyWithBlock:(void (^)(id<AFMultipartFormData>))block success:(void (^)(AFHTTPRequestOperation *, id))success failure:(void (^)(AFHTTPRequestOperation *, NSError *))failure;



@end
