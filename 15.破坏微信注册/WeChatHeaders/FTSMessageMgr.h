//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FTSMsgSearchTaskDelegate-Protocol.h"
#import "IAsyncTaskProtocol-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "WXGImportMessageNotification-Protocol.h"

@class AsyncTaskQueueEngine, FTSDB, FTSMessageDB, FTSMsgSearchTask, NSMutableArray, NSMutableDictionary, NSMutableSet, NSRecursiveLock, NSString;
@protocol OS_dispatch_queue;

@interface FTSMessageMgr : NSObject <FTSMsgSearchTaskDelegate, IAsyncTaskProtocol, IMsgExt, WXGImportMessageNotification>
{
    FTSMessageDB *_ftsMessageDB;
    AsyncTaskQueueEngine *_asyncTaskQueueEngine;
    FTSDB *_ftsDB;
    NSRecursiveLock *_lock;
    _Bool _hasInitTask;
    _Bool _hasForegroundTask;
    _Bool _hasBackgroundTask;
    NSMutableArray *_arrSessionUser;
    NSMutableDictionary *_dicLatestSession;
    _Bool _hasNewMessage;
    _Bool _needMonitorReport;
    _Bool _enableTimerTask;
    _Bool _isTimerTasking;
    NSRecursiveLock *_indexMemCacheLock;
    _Bool _bStopCacheMsg;
    NSMutableDictionary *_dicUnIndexMsgCache;
    _Bool _bShouldReloadUpdatedSession;
    NSMutableSet *_setUpdatedSession;
    unsigned int _uiMsgIndexTaskControllTimestamp;
    NSObject<OS_dispatch_queue> *_ftsCleanQueue;
    FTSMsgSearchTask *_homePageSearchTask;
    FTSMsgSearchTask *_morePageSearchTask;
    FTSMsgSearchTask *_firstRestrictSearchTask;
    FTSMsgSearchTask *_secondRestrictSearchTask;
    _Bool _isFirstRestrictPageAgainSearch;
    _Bool _isSecondeRestrictPageAgainSearch;
}

@property(nonatomic) _Bool needMonitorReport; // @synthesize needMonitorReport=_needMonitorReport;
@property(retain, nonatomic) NSMutableDictionary *dicLatestSession; // @synthesize dicLatestSession=_dicLatestSession;
@property(retain, nonatomic) NSMutableArray *arrSessionUser; // @synthesize arrSessionUser=_arrSessionUser;
- (void).cxx_destruct;
- (void)onReceiveMemoryWarning;
- (void)onEnterBackground;
- (void)clearIndexMemCache;
- (void)removeUnIndexMsgFromID:(unsigned int)arg1 toID:(unsigned int)arg2 forKey:(id)arg3;
- (void)removeUnIndexMsg:(id)arg1 forKey:(id)arg2;
- (void)cacheUnIndexMsg:(id)arg1 forKey:(id)arg2;
- (unsigned int)calAllMemMsgCount;
- (void)memSearchLog:(id)arg1 searchDone:(_Bool)arg2 isComplete:(_Bool)arg3;
- (_Bool)isFtsIndexTargetMsg:(id)arg1;
- (_Bool)shouldCacheMsg:(id)arg1;
- (void)enableIndexMemCache:(_Bool)arg1;
- (void)enableTimerTask:(_Bool)arg1;
- (_Bool)hasTimerTask;
- (void)onImportMessageSuccess;
- (void)doIndexIfNeeded;
- (void)wakeUpForegroundTask;
- (void)tryWakeUpTimerTask;
- (void)OnDelMsg:(id)arg1 DelAll:(_Bool)arg2;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)checkIndexTimerTask;
- (void)updateIndexTaskState;
- (void)updateLatestSession;
- (void)excuteTimerTask;
- (void)excuteBackgroundTask;
- (_Bool)hasBackgroundTask;
- (void)excuteForegroundTask;
- (_Bool)hasForegroundTask;
- (void)excuteInitTask;
- (_Bool)hasInitTask;
- (void)asyncMonitorReport;
- (unsigned int)getIndexNotReadyCount:(id)arg1;
- (_Bool)hasCreateAllIndex:(id)arg1;
- (id)getTaskForContext:(int)arg1;
- (_Bool)isMsgTaskOnFirstSearch:(id)arg1;
- (void)onMsgSearchTaskResultChanged:(_Bool)arg1 taskObj:(id)arg2;
- (id)getRestrictSectionResult:(id)arg1 isMainPage:(_Bool)arg2;
- (id)getRestrictSearchResult:(id)arg1 isMainPage:(_Bool)arg2;
- (_Bool)isLikelyTalkerSearch:(id)arg1 isMainPage:(_Bool)arg2;
- (_Bool)hasSearchDoneForRestrictSearch:(id)arg1 isMainPage:(_Bool)arg2;
- (void)cancelRestrictSearch:(_Bool)arg1;
- (void)asyncRestrictSearch:(id)arg1 isMainPage:(_Bool)arg2;
- (void)prepareRestrictSearch:(id)arg1 restrictSessionUsr:(id)arg2 restrictTalkerUsr:(id)arg3 restrictTalkerMatchTip:(id)arg4 restrictTalkerQuery:(id)arg5 sessionFirst:(_Bool)arg6 isMainPage:(_Bool)arg7;
- (id)getRestrictPageLastQueryText:(_Bool)arg1;
- (id)getRestrictPageArrLastQuerywords:(_Bool)arg1;
- (id)getRestrictRealQueryPartFromQuery:(id)arg1 isMainPage:(_Bool)arg2;
- (id)getRestrictTalkerPartFromQuery:(id)arg1 isMainPage:(_Bool)arg2;
- (id)getRestrictPageNewestQuery:(_Bool)arg1;
- (void)setRestrictPageAgainSearch:(_Bool)arg1 isMainPage:(_Bool)arg2;
- (void)setRestrictPageNewestQuery:(id)arg1 isMainPage:(_Bool)arg2;
- (void)makeDetailRestrictPageTaskIfNil;
- (void)makeFirstRestrictPageTaskIfNil;
- (_Bool)isDetailPageLikelyTalkerSearch:(id)arg1;
- (id)getSessionMsgItemsForDetailPage:(id)arg1 index:(unsigned long long)arg2;
- (unsigned long long)getMsgItemsCountForDetailPage:(id)arg1;
- (id)getSessionUsersForDetailPage:(id)arg1;
- (_Bool)hasSearchDoneForDetailPage:(id)arg1;
- (id)getDetailPageLastQueryText;
- (id)getDetailPageArrLastQuerywords;
- (void)setDetailPageNewestQuery:(id)arg1;
- (id)getDetailPageNewestQuery;
- (void)makeDetailPageTaskIfNil;
- (void)cancelSearchForDetailPage;
- (void)asyncSearchTextForDetailPage:(id)arg1;
- (id)getSessionMsgItemsForHomePage:(id)arg1 index:(unsigned long long)arg2;
- (unsigned long long)getMsgItemsCountForHomePage:(id)arg1;
- (unsigned long long)getSessionUserCountForHomePage:(id)arg1;
- (_Bool)hasMemoryMessageResultForHomePage:(id)arg1;
- (_Bool)hasIndexMessageResultForHomePage:(id)arg1;
- (_Bool)hasProtentialTalkerSearchEntry:(id)arg1;
- (_Bool)hasSearchDoneForHomePage:(id)arg1;
- (_Bool)hasSearchResultForHomePage:(id)arg1;
- (id)getHomePageLastQueryText;
- (void)removeAllTask;
- (void)cancelSearchForHomePage;
- (id)safeCopyUnIndexMsgCache;
- (void)asyncSearchTextForHomePage:(id)arg1;
- (id)getHomePageLastQuerText;
- (id)getHomePageArrLastQuerywords;
- (void)setHomepageNewestQuery:(id)arg1;
- (void)makeHomePageTaskIfNil;
- (void)reloadDB;
- (void)initDB:(id)arg1 asyncTaskQueueEngine:(id)arg2;
- (void)setNeedsInitTask;
- (void)resetCache;
- (void)onRecoverFTSDB;
- (void)onPreRecoverFTSDB;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

