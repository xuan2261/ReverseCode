//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSMutableDictionary, NSString, WCShareAuthViewController;

@protocol WCShareAuthViewControllerDelegate <NSObject>

@optional
- (void)shareAuthViewControllerDidSuccess:(WCShareAuthViewController *)arg1 redirectUrl:(NSString *)arg2 extraInfo:(NSMutableDictionary *)arg3;
- (NSString *)makeBizCustomLinkIfNeed;
- (void)shareAuthViewControllerDidFail:(WCShareAuthViewController *)arg1;
- (void)shareAuthViewControllerDidCancel:(WCShareAuthViewController *)arg1;
@end

