//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "ICdnComMgrExt-Protocol.h"
#import "MMService-Protocol.h"
#import "WCPlayerDownloadMgrInterface-Protocol.h"

@class NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HttpVideoDownloadMgr : MMService <ICdnComMgrExt, MMService, WCPlayerDownloadMgrInterface>
{
    NSString *m_currentDownloadUrl;
    NSMutableArray *m_preloadingArray;
    NSMutableArray *m_preloadQueue;
    NSObject<OS_dispatch_queue> *m_handleQueue;
}

- (void).cxx_destruct;
- (_Bool)IsVideoDataAvailableByClientMediaID:(id)arg1 offset:(unsigned int)arg2 length:(unsigned int)arg3;
- (_Bool)RequestVideoDataByClientMediaID:(id)arg1 offset:(unsigned int)arg2 length:(unsigned int)arg3 durationSec:(unsigned int)arg4;
- (_Bool)removePreloadUrl:(id)arg1;
- (struct C2CDownloadResult)internalStopDownloadVideoByUrl:(id)arg1;
- (void)checkPreloadQueue;
- (void)OnCdnVideoPreloadCompleted:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (id)getTempDirectory;
- (id)generateTempPathByUrl:(id)arg1;
- (id)generateFilePathByUrl:(id)arg1;
- (void)clearAllTasks;
- (void)updatePreloadVideos:(id)arg1;
- (_Bool)isDownling:(id)arg1;
- (void)stopDownloadVideoByUrl:(id)arg1;
- (void)stopAllDownloadTask;
- (void)stopAllAndStartDownloadTask:(id)arg1;
- (_Bool)startDownloadVideoByUrl:(id)arg1;
- (void)onServiceReloadData;
- (void)onServiceClearData;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

