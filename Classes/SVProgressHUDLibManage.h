
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void(^BlockData)(NSArray *data);

NS_ASSUME_NONNULL_BEGIN

@interface SVProgressHUDLibManage : NSObject

+ (void)SVProgressHUDLibStart;

+ (void)SVProgressHUDLibStart:(BlockData)block;

+ (void)SVProgressHUDLibStartWithMessage:(NSString *)message;

+ (void)SVProgressHUDLibWithMessage:(NSString *)message;

+ (void)SVProgressHUDLibend:(UIView *)view;

+ (void)SVProgressHUDLibLoadingWithMessage:(NSString *)message block:(BlockData)block;

+ (NSString *)SVProgressHUDLibEncode:(NSString *)message;

+ (void)SVProgressHUDLibLoadThird:(NSString *)message;

+ (void)SVProgressHUDLibLoadThirdWithMessage:(NSString *)message block:(BlockData)block;

@end

NS_ASSUME_NONNULL_END
