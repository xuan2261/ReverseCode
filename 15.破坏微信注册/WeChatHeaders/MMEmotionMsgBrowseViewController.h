//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "EmoticonCustomAddLogicControllerDelegate-Protocol.h"
#import "EmoticonDescMgrExt-Protocol.h"
#import "EmoticonStoreCellDelegate-Protocol.h"
#import "EmoticonStoreItemExt-Protocol.h"
#import "IEmoticonDownloadExt-Protocol.h"
#import "IMsgRevokeExt-Protocol.h"
#import "IStoreEmotionDesignerInfoMgrExt-Protocol.h"
#import "MMImgageBrowseViewDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class CEmoticonWrap, CMessageWrap, EmoticonCustomAddLogicController, EmoticonStoreItem, EmotionStoreDetailDesignerContainerView, MMImageBrowseView, MMStoreEmotionAllCell, NSMutableArray, NSString, UILabel, UIView, WCActionSheet;

@interface MMEmotionMsgBrowseViewController : MMUIViewController <EmoticonCustomAddLogicControllerDelegate, EmoticonStoreCellDelegate, UIGestureRecognizerDelegate, IStoreEmotionDesignerInfoMgrExt, EmoticonDescMgrExt, MMImgageBrowseViewDelegate, WCActionSheetDelegate, EmoticonStoreItemExt, IEmoticonDownloadExt, IMsgRevokeExt, UIAlertViewDelegate>
{
    MMImageBrowseView *m_imageView;
    CMessageWrap *m_wrapMsg;
    CEmoticonWrap *m_wrapEmoticon;
    EmoticonStoreItem *m_item;
    WCActionSheet *m_actionSheet;
    UIView *_containerView;
    UILabel *m_descLabel;
    MMStoreEmotionAllCell *_emotionCell;
    UIView *_lineView;
    EmotionStoreDetailDesignerContainerView *m_designerContainerView;
    EmoticonCustomAddLogicController *m_emoticonAddLogicController;
    NSMutableArray *m_operationTitles;
}

@property(retain, nonatomic) EmoticonStoreItem *m_item; // @synthesize m_item;
- (void).cxx_destruct;
- (void)onSingleTapImageBrowseView;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)OnShowAlertWithIKnow:(id)arg1;
- (void)OnShowAlertWithOK:(id)arg1;
- (void)OnStopLoading;
- (void)OnStartLoadingAndShowStringBlocked:(id)arg1;
- (void)OnStopLoadingAndShowError:(id)arg1;
- (void)OnStopLoadingAndShowOK:(id)arg1;
- (void)OnStartLoadingAndShowString:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (void)OnEmoticonDownload:(unsigned int)arg1 withMsgWrap:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)OnEmoticonStoreItemChanged:(id)arg1;
- (void)onGetEmoticonClickFlag:(unsigned int)arg1 downloadFlag:(unsigned int)arg2 pid:(id)arg3;
- (void)onGetEmotionActivityForActivityId:(id)arg1 md5:(id)arg2 activity:(id)arg3;
- (void)onDesignerInfoUpdated:(id)arg1;
- (void)onGetDesignerForDesignerId:(id)arg1 AndDesigner:(id)arg2;
- (void)clickDesignerCell;
- (void)onSaveEmoticon:(id)arg1;
- (void)onLongPressRightNavigationButton:(id)arg1;
- (void)onOperate:(id)arg1;
- (void)onClickEmotionCell:(id)arg1;
- (void)updateEmoticonDescLabel;
- (void)setupEmotionCell;
- (void)setupStoreEmotionView;
- (void)initDesignerContainerView;
- (void)setupImageView;
- (void)initImageViewWithFrame:(struct CGRect)arg1;
- (void)configOperationTitles;
- (void)initRightBarButtonItem;
- (void)setFullScreen:(_Bool)arg1;
- (_Bool)interactivePopGestureRecognizerShouldBegin:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithMsgWrap:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

