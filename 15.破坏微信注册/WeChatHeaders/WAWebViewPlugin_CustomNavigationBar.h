//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAWebViewPluginBase.h"

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, UIColor, UILongPressGestureRecognizer, UIScrollView, WAWebViewController;

@interface WAWebViewPlugin_CustomNavigationBar : WAWebViewPluginBase <UIScrollViewDelegate>
{
    _Bool _bIsJsapiDefineNavigationLeftItem;
    _Bool _bIsJsapiDefineNavigationRightItem;
    CDUnknownBlockType _onClickRightNavItem;
    UILongPressGestureRecognizer *_longPressRecognizer;
    _Bool _isTrigerLongPress;
    _Bool _isEnableClose;
    _Bool _webAppear;
    UIScrollView *_scrollListener;
    UIColor *_frontBlendColor;
    UIColor *_reservedBgColor;
    int _reservedStatusBar;
    int _reservedNavigationMode;
    NSString *_reservedNavigationTitle;
    _Bool _showShareMenu;
    _Bool _listenTapStatusBar;
    _Bool _shouldUseDynamicPageShare;
    long long _shareMenuType;
    WAWebViewController *_mainWebView;
    long long _gameMenuStyle;
}

@property(nonatomic) long long gameMenuStyle; // @synthesize gameMenuStyle=_gameMenuStyle;
@property(nonatomic) _Bool shouldUseDynamicPageShare; // @synthesize shouldUseDynamicPageShare=_shouldUseDynamicPageShare;
@property(nonatomic) _Bool listenTapStatusBar; // @synthesize listenTapStatusBar=_listenTapStatusBar;
@property(nonatomic) __weak WAWebViewController *mainWebView; // @synthesize mainWebView=_mainWebView;
@property(nonatomic) _Bool showShareMenu; // @synthesize showShareMenu=_showShareMenu;
@property(nonatomic) long long shareMenuType; // @synthesize shareMenuType=_shareMenuType;
@property(nonatomic) _Bool m_bIsJsapiDefineNavigationRightItem; // @synthesize m_bIsJsapiDefineNavigationRightItem=_bIsJsapiDefineNavigationRightItem;
- (void).cxx_destruct;
- (void)setNavBarTitle:(id)arg1;
- (void)setNavBarElementAndStatusBarStyle:(int)arg1;
- (void)setNavBarBackgroundColor:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)addWeAppStatusBarListener;
- (void)__changeStatusBarWhite:(_Bool)arg1;
- (void)changeStatusBarWhite:(_Bool)arg1;
- (void)onClickJSDefineRightNavItem;
- (void)onRouteToHome;
- (void)onClickCustomRightButton;
- (void)onMore;
- (void)onLongPressMoreItem:(id)arg1;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

