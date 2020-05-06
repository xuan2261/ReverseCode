//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ICertInfoMgrExt-Protocol.h"
#import "IKFContactMgrExt-Protocol.h"

@class CContact, CertInfo, KFContact, MMTableViewInfo, NSMutableArray, NSString;

@interface BrandProfileMaterialViewController : MMUIViewController <ICertInfoMgrExt, IKFContactMgrExt>
{
    CContact *_brandContact;
    CertInfo *_certInfo;
    unsigned int _lastCertificationFlag;
    NSMutableArray *_urlItemList;
    _Bool _isKFWorkerUpdated;
    KFContact *_kfWorker;
    MMTableViewInfo *_tableViewInfo;
    double _tableViewWidth;
}

+ (void)adjustSubtitleLabel:(id)arg1 subtitleString:(id)arg2 maxWidth:(double)arg3;
+ (void)adjustTitleLabel:(id)arg1 titleString:(id)arg2 maxWidth:(double)arg3;
+ (double)calNormalHeight;
+ (double)calCellHeightWithTitle:(id)arg1 titleWidth:(double)arg2 subtitle:(id)arg3 subtitleWidth:(double)arg4;
- (void).cxx_destruct;
- (double)calIconYWithIconHeight:(double)arg1;
- (void)openWebView:(id)arg1;
- (void)onUpdateKFContactsList:(id)arg1 errCode:(int)arg2;
- (void)onGetKFContactsBindList:(id)arg1 errCode:(int)arg2;
- (void)onGetKFContactsDefaultList:(id)arg1 errCode:(int)arg2;
- (void)OnUpdateCertInfo;
- (id)createRightLabel:(id)arg1 maxWidth:(double)arg2 cellHeight:(double)arg3;
- (id)createLeftLabel:(id)arg1 maxWidth:(double)arg2;
- (void)clickUrlItemCell:(id)arg1;
- (void)makeUrlItemCell:(id)arg1 cellInfo:(id)arg2;
- (void)clickShowLocationCell:(id)arg1;
- (void)makeShowLocationCell:(id)arg1 cellInfo:(id)arg2;
- (id)getShowLocation;
- (void)makeNearbyServiceCell:(id)arg1 cellInfo:(id)arg2;
- (_Bool)hasNearbyService;
- (void)clickFeedbackCell:(id)arg1;
- (void)makeFeedbackCell:(id)arg1 cellInfo:(id)arg2;
- (id)getFeedbackLink;
- (void)makeBusinessScopeCell:(id)arg1 cellInfo:(id)arg2;
- (id)getBusinessScope;
- (void)clickKFHotlineCell:(id)arg1;
- (void)makeKFHotlineCell:(id)arg1 cellInfo:(id)arg2;
- (id)getKFHotline;
- (void)makeKFWorkerCell:(id)arg1 cellInfo:(id)arg2;
- (double)calKFWorkerSubtitleWidth;
- (void)clickTradeMarkCell:(id)arg1;
- (void)makeTradeMarkCell:(id)arg1 cellInfo:(id)arg2;
- (double)calTradeMarkSubtitleWidth;
- (void)clickRegisterSourceCell:(id)arg1;
- (void)makeRegisterSourceCell:(id)arg1 cellInfo:(id)arg2;
- (double)calRegisterSourceSubtitleWidth;
- (void)clickVerifySourceCell:(id)arg1;
- (void)makeVerifySourceCell:(id)arg1 cellInfo:(id)arg2;
- (double)calVerifySourceSubtitleWidth;
- (id)getVerifySourceSubtitle;
- (id)getVerifySourceTitle;
- (void)makeWeixinIDCell:(id)arg1 cellInfo:(id)arg2;
- (id)getWeixinID;
- (void)reloadTableViewInfo;
- (void)viewDidLayoutSubviews;
- (void)initTableViewInfo;
- (void)checkUpdateCertInfo;
- (void)loadCertInfo;
- (void)parseUrlItemList;
- (void)parseKFWorker;
- (id)navigationBarBackgroundColor;
- (id)initWithBrandContact:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

