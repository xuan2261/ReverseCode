//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseOpenSDKHandler.h"

#import "MMWebViewDelegate-Protocol.h"
#import "ShareConfirmViewDelegate-Protocol.h"

@class NSString, ShareConfirmView;

@interface JoinChatRoomHandler : BaseOpenSDKHandler <MMWebViewDelegate, ShareConfirmViewDelegate>
{
    NSString *_groupId;
    NSString *_openId;
    NSString *_chatRoomNickName;
    NSString *_extMsg;
    ShareConfirmView *_confirmView;
}

- (void).cxx_destruct;
- (void)OnStayAtWeChat:(id)arg1;
- (void)OnBackToApp:(id)arg1;
- (void)onLeaveWebviewAndJumpToViewConroller;
- (void)backTo3rdApp:(int)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)showSucessView;
- (void)openJoinChatRoomH5:(id)arg1;
- (void)realHandleReqAfterermissionValidation;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

