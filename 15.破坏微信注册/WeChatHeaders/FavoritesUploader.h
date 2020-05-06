//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "ICdnComMgrExt-Protocol.h"
#import "MsgDataDownloadDelegate-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class FavoritesCDNInfo, FavoritesItem, MsgDataDownloadLogic, NSMutableArray, NSString;
@protocol FavoritesUploaderDelegate;

@interface FavoritesUploader : MMObject <MsgDataDownloadDelegate, PBMessageObserverDelegate, ICdnComMgrExt>
{
    FavoritesItem *_favItem;
    NSMutableArray *_favDatalist;
    id <FavoritesUploaderDelegate> _delegate;
    int _runningState;
    FavoritesCDNInfo *_uploadingInfo;
    _Bool _waitingForDownloading;
    MsgDataDownloadLogic *_msgDataDownloadLogic;
}

@property(nonatomic) _Bool waitingForDownloading; // @synthesize waitingForDownloading=_waitingForDownloading;
@property(retain, nonatomic) MsgDataDownloadLogic *msgDataDownloadLogic; // @synthesize msgDataDownloadLogic=_msgDataDownloadLogic;
@property(nonatomic) __weak id <FavoritesUploaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onDownloadCancel:(id)arg1;
- (void)onDownloadCommonFail:(id)arg1;
- (void)onDownloadExpireFail:(id)arg1;
- (void)onDownloadSuccess:(id)arg1;
- (void)OnCdnUpload:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleAddFavItemResp:(id)arg1 Event:(unsigned int)arg2;
- (void)BroadcastUploadFail:(int)arg1;
- (void)HandleCheckCDNResp:(id)arg1 Event:(unsigned int)arg2;
- (void)updateCDNInfoCheckFailByCheckItem:(id)arg1 withDataList:(id)arg2;
- (void)updateCDNInfoByUnExistButServerAsyncUploadFavCDNItem:(id)arg1 withDataList:(id)arg2;
- (void)updateCDNInfoByUnExistFavCDNItem:(id)arg1 withDataList:(id)arg2;
- (void)updateCDNInfoByExistFavCDNItem:(id)arg1 withDataList:(id)arg2;
- (void)convertHevc:(id)arg1;
- (void)uploadFavMedia:(id)arg1;
- (void)tryStartNextData;
- (void)updateFavoritesItemCDNInfo:(id)arg1;
- (id)getItem;
- (_Bool)stop;
- (void)addDataList:(id)arg1;
- (void)run;
- (void)doCheckCDN;
- (void)dealloc;
- (id)initWithFavoritesItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

