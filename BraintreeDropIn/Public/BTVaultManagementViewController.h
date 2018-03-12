#import "BTDropInBaseViewController.h"
#if __has_include("BraintreeUIKit.h")
#import "BraintreeUIKit.h"
#else
#import <BraintreeUIKit/BraintreeUIKit.h>
#endif

NS_ASSUME_NONNULL_BEGIN
@protocol BTDropInControllerDelegate;

/// Contains form elements for editing vaulted payment methods.
@interface BTVaultManagementViewController : BTDropInBaseViewController

@property (nonatomic, weak) id<BTDropInControllerDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
