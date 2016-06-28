#import <Cocoa/Cocoa.h>

@interface NSAppleEventDescriptor (AppleEventExtra)
+ (NSAppleEventDescriptor *)descriptorWithFloat:(float)a_value;
- (NSURL *)URL;
@end

@interface NSString (AppleEventExtra)
- (NSAppleEventDescriptor *) appleEventDescriptor;
@end

@interface NSNumber (AppleEventExtra)
- (NSAppleEventDescriptor *) appleEventDescriptor;
@end

@interface NSURL (AppleEventExtra)
- (NSAppleEventDescriptor *)appleEventDescriptor;
@end

@interface NSArray (AppleEventExtra)
- (NSAppleEventDescriptor *)appleEventDescriptor;
@end
