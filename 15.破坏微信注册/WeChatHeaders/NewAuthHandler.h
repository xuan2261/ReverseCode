//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "IAppDataExt-Protocol.h"
#import "IPreEnterWechatLogicExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMWebViewDelegate-Protocol.h"

@class IPadOAuthFromPhoneHandler, NSString, NSURL, OpenSDKAuthorizeLoginManager, UINavigationController;

@interface NewAuthHandler : MMObject <MMWebViewDelegate, IAppDataExt, MMKernelExt, IPreEnterWechatLogicExt>
{
    NSString *m_nsAppid;
    NSURL *m_url;
    NSString *m_nsBundleId;
    UINavigationController *m_oAuthViewController;
    _Bool m_isDoing;
    IPadOAuthFromPhoneHandler *m_oAuthFromPhoneHandler;
    OpenSDKAuthorizeLoginManager *m_nativeAuthManager;
    NSString *_m_nsScope;
    NSString *_m_nsState;
}

@property(retain, nonatomic) NSString *m_nsState; // @synthesize m_nsState=_m_nsState;
@property(retain, nonatomic) NSString *m_nsScope; // @synthesize m_nsScope=_m_nsScope;
- (void).cxx_destruct;
- (void)onNewOAuthError:(int)arg1 errMsg:(id)arg2;
- (void)onNewOAuthDeny;
- (void)onNewOAuthCancel;
- (void)onPostQuit;
- (void)onPreQuit;
- (void)onKickQuit;
- (void)OnGotListAppSettingItem:(id)arg1 errType:(int)arg2;
- (void)onLeaveWebviewAndBackTo3rdApp;
- (id)webViewFailToLoad:(id)arg1;
- (void)onWebViewDidFinishLoad:(id)arg1;
- (void)onWebViewDidStartLoad:(id)arg1;
- (void)OnOAuthDeny;
- (void)OnOAuthCancel;
- (void)onPreEnterWechatDone;
- (void)removeOAuthView;
- (void)onRetry:(id)arg1;
- (void)openNativeOauth;
- (void)createOAuthView;
- (_Bool)isABTestUseNativeOauth;
- (void)denyAllHandleAndReturn3rdApp;
- (void)cancelAllHandleAndReturn3rdApp;
- (void)clearAllHandle;
- (void)cancelAllHandle;
- (id)parseURLParams;
- (void)cancelWechatConnect;
- (void)startWechatConnect:(id)arg1 authInfo:(id)arg2 bundleId:(id)arg3;
- (void)dealloc;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

