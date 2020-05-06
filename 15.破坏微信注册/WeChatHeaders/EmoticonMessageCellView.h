//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageCellView.h"

#import "EmoticonCustomAddLogicControllerDelegate-Protocol.h"
#import "MMUIViewControllerDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class EmoticonCustomAddLogicController, EmoticonMessageViewModel, MMEmoticonView, NSString, UIActivityIndicatorView, UIImageView, UILabel, UIView;

@interface EmoticonMessageCellView : CommonMessageCellView <MMUIViewControllerDelegate, EmoticonCustomAddLogicControllerDelegate, UIAlertViewDelegate>
{
    UIView *m_rewardTips;
    UILabel *m_downloadFailRetryLabel;
    UIImageView *m_downloadFailedImageView;
    MMEmoticonView *m_emoticonView;
    UIActivityIndicatorView *m_imageLoadingView;
    EmoticonCustomAddLogicController *m_emoticonAddLogicController;
}

- (void).cxx_destruct;
- (void)onEmoticonCustomAddLogicControllerAddedEmoticon;
- (id)getViewController;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showFinishedTipsWithWording:(id)arg1;
- (void)setCanShowRewardTips:(_Bool)arg1;
- (void)onClickStopShowTipsButton:(id)arg1;
- (void)showDetailPageWithNeedScrollToBottom:(_Bool)arg1 extrance:(long long)arg2;
- (void)onGoToRewardInDetailPage:(id)arg1;
- (void)onTakeCameraFollow:(id)arg1;
- (void)startDownloadImageIsFirstTime:(_Bool)arg1;
- (void)onClick;
- (void)onTouchUpInside;
- (void)onShowDetailPage:(id)arg1;
- (void)onForward:(id)arg1;
- (void)onSaveEmoticon:(id)arg1;
- (id)operationMenuItems;
- (void)showDownloadFailView;
- (void)showLoadingView;
- (void)initRewardTipsViewWithMaxSize:(double)arg1;
- (void)initEmoticonView;
- (struct CGRect)showRectForMenuController;
- (void)onAppear;
- (void)updateStatus;
- (void)layoutContentView;
- (_Bool)canBeReused;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) EmoticonMessageViewModel *viewModel; // @dynamic viewModel;

@end

