//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CContact, NSArray, NSString, SessionSelectController;

@protocol SessionSelectControllerDelegate <NSObject>

@optional
- (void)contactInBizChatDidSelect:(CContact *)arg1;
- (CContact *)contactInBizChatSessionAtRow:(unsigned long long)arg1;
- (long long)numberOfRowInBizChatSession;
- (NSString *)sectionTitleForBizChatSession;
- (_Bool)onShouldSelectContact:(CContact *)arg1;
- (void)OnSelectSessionCancel:(SessionSelectController *)arg1;
- (void)OnSelectSessions:(NSArray *)arg1 SessionSelectController:(SessionSelectController *)arg2;
- (void)OnSelectSession:(CContact *)arg1 SessionSelectController:(SessionSelectController *)arg2;
@end

