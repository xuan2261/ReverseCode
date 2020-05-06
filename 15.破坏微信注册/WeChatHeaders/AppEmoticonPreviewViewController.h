//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "EmoticonCustomAddLogicControllerDelegate-Protocol.h"
#import "IMsgRevokeExt-Protocol.h"
#import "MMImgageBrowseViewDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class CMessageWrap, EmoticonCustomAddLogicController, MMImageBrowseView, NSString, UIButton, UIView, WCActionSheet;

@interface AppEmoticonPreviewViewController : MMUIViewController <WCActionSheetDelegate, EmoticonCustomAddLogicControllerDelegate, MMImgageBrowseViewDelegate, IMsgRevokeExt, UIAlertViewDelegate>
{
    MMImageBrowseView *m_imageView;
    UIButton *m_srcBtn;
    NSString *username;
    CMessageWrap *msgWrap;
    id singleTapOnNav;
    WCActionSheet *m_actionSheet;
    UIView *_bkgView;
    EmoticonCustomAddLogicController *_addEmoticonLogic;
}

@property(retain, nonatomic) EmoticonCustomAddLogicController *addEmoticonLogic; // @synthesize addEmoticonLogic=_addEmoticonLogic;
@property(retain, nonatomic) UIView *_bkgView; // @synthesize _bkgView;
@property(retain, nonatomic) WCActionSheet *m_actionSheet; // @synthesize m_actionSheet;
@property(retain, nonatomic) id singleTapOnNav; // @synthesize singleTapOnNav;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap;
@property(retain, nonatomic) NSString *username; // @synthesize username;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (void)onSingleTapImageBrowseView;
- (void)setFullScreen:(_Bool)arg1;
- (_Bool)interactivePopGestureRecognizerShouldBegin:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)removeNvGestureRecognizer;
- (void)addNvGestureRecognizer;
- (void)onSingleTapOnNavigationBar:(id)arg1;
- (void)showStatusBar;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onSaveEmoticon:(id)arg1;
- (void)initBottomView;
- (void)updateEmoticonView;
- (void)initDownloadedView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (void)addBackgroundView;
- (void)onOperate:(id)arg1;
- (void)onReturn;
- (void)onLongPressRightNavigationButton:(id)arg1;
- (void)launch:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

