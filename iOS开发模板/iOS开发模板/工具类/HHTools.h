//
//  HHTools.h
//  iOS开发模板
//
//  Created by 黄栋梁 on 16/8/9.
//  Copyright © 2016年 黄栋梁. All rights reserved.
//

#import "SingletonObject.h"

@interface HHTools : SingletonObject

#pragma mark --alert
//****************************************************************/
//alert
//****************************************************************/
/**
 *  显示各种形式的警告警告
 */

//显示警告(alert)
-(void)alertShowWarning:(NSString *)warning;

//显示提问,带有确定,取消按钮
-(void)alertShowMessage:(NSString *)msg selecteYES:(void(^)())block cancelCb:(void(^)())cancelcb;

//弹出一个警告框,上面有一个输入框,获取输入信息
-(void)alertShowMessage:(NSString *)msg getMessageCb:(void(^)(NSString *str))callback cancelCb:(void(^)())cancelcb;


#pragma mark --Toast
//****************************************************************/
//toast
//****************************************************************/

/**
 *  Toast:提示信息,例如:显示"登录成功","用户名密码错误"
 */
//显示文字
-(void)toastShowToastMessage:(NSString *)str offsetFromCenter:(CGPoint)offset stillTime:(CGFloat)stillTime;

//显示文字和图片
-(void)toastShowToastMessage:(NSString *)str withImage:(UIImage *)image offsetFromCenter:(CGPoint)offset stillTime:(CGFloat)stillTime;

//显示文字和图片,一般是动画图片,动画图片自定义
-(void)toastShowToastMessage:(NSString *)str withImage:(UIImage *)image offsetFromCenter:(CGPoint)offset;

//隐藏
-(void)toastHideToast;



#pragma mark --image
//****************************************************************/
//image
//****************************************************************/

/**
 *  图片截图(给出一个CGRect)
 *  图片压缩:给出一个方向的尺寸(按比例压缩)
 */
//从图片上截图
-(UIImage *)imageCutImage:(UIImage *)image withFrame:(CGRect)frame;

/**
 *  压缩图片,给出最大允许的宽度和长度,给出是否保持长宽比
 *
 *  @param image  图片
 *  @param width  最大宽度
 *  @param height 最大高度
 *  @param ratio  是否保持长宽比,如果为NO,则直接压缩成指定的宽度和高度
 */
-(UIImage *)imageCompressImage:(UIImage *)image withMaxWidth:(CGFloat)width withMaxHeight:(CGFloat)height stillRatio:(BOOL)ratio;



#pragma mark --datePicker
//****************************************************************/
//datePicker
//****************************************************************/

/**
 *  时间和字符串之间的转化
 */
-(NSDate *)dateFromString:(NSString *)str withFormatString:(NSString *)format;

-(NSString *)dateToString:(NSDate *)date withFormatString:(NSString *)format;

/**
 *  选择时间:默认是中文日期选择器
 *
 *  @param datePickerMode 模式:日期,还是日期+时间...
 *  @param minDate        选择的日期范围最小值
 *  @param maxDate        选择的日期范围最大值
 *  @param currentDate    打开日期选择器时所显示的日期
 *  @param scrollDate     在选择日期时,滚动选择器,会一直调用这个方法,可以用来改变界面上的信息
 *  @param selectCb       点击完成按钮时,会调用这个方法
 *  @param cancelCb       点击空白处,会调用这个取消选择的方法
 */
-(void)datePicker:(UIDatePickerMode)datePickerMode
          minDate:(NSDate *)minDate
          maxDate:(NSDate *)maxDate
      currentDate:(NSDate *)currentDate
        scrolling:(void(^)(NSDate *date))scrollDate
       selectDate:(void(^)(NSDate *date))selectCb
         cancelCb:(void(^)(NSDate *tempDate))cancelCb;



#pragma mark --imagePicker
//****************************************************************/
//imagePicker
//****************************************************************/

/**
 *  选择图片(从相机,相册选择)
 *  如果需要编辑(头像)则用后面一种方法
 */
-(void)imagePickerFromViewController:(UIViewController *)vc selectedImage:(void(^)(UIImage *image))selectedCb;

-(void)imagePickerFromViewController:(UIViewController *)vc selectedImage:(void(^)(UIImage *image))selectedCb editedImage:(void(^)(UIImage *image))editedCb;

/**
 *  选择多张图片(朋友圈的图片选择效果)
 [
    {@"原图":image,@"缩略图":image},
    {@"原图":image,@"缩略图":image},
    {@"原图":image,@"缩略图":image}
 ]
 */
-(void)imagePickerMutipleFromViewController:(UIViewController *)vc selectedImage:(void (^)(NSArray *imagesArray))selectedCb;




@end


@interface NSString (HH)

/**
 *  字符串转换成拼音
 */
-(NSString *)toPinYin;


/**
 *  转换成拼音后的第一个字母
 */
-(NSString *)firstCharacter;


@end




















