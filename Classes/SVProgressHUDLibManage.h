
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

+ (NSString *)SVProgressHUDLibEncode:(NSString *)message;

@end

NS_ASSUME_NONNULL_END
