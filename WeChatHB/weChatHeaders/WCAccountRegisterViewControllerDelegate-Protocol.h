//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@protocol WCAccountRegisterViewControllerDelegate <NSObject>
- (unsigned long long)onRegStatus;
- (void)onRegNextWith:(NSString *)arg1 headImage:(UIImage *)arg2;
- (void)onRegNextWith:(NSString *)arg1 countryIsoCode:(NSString *)arg2 phoneNum:(NSString *)arg3 pwd:(NSString *)arg4;
- (_Bool)onRegNextWithISO:(NSString *)arg1 isDefault:(_Bool)arg2;
- (void)onRegBack;
@end
