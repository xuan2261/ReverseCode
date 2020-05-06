//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MsgPreloadVideoInfo, NSMutableDictionary;

@interface PreloadVideoCleanLogic : NSObject
{
    NSMutableDictionary *_dicOldRecord;
    MsgPreloadVideoInfo *_preloadVideoInfo;
    unsigned int _uiLastCleanPreloadTmpFileTime;
}

- (void).cxx_destruct;
- (void)onDeleteCacheForChatName:(id)arg1;
- (void)setPreloadSize:(unsigned int)arg1 forRecordId:(id)arg2;
- (unsigned int)getPreloadSizeForRecordId:(id)arg1;
- (void)reloadPreloadRecord;
- (void)setNonAutoCleanForPreloadRecord:(id)arg1;
- (void)cleanAllPreloadTempFile:(unsigned long long *)arg1 Records:(id)arg2;
- (void)cleanAllPreloadTempFile:(unsigned long long *)arg1 subQueue:(id)arg2 downloadingMsg:(id)arg3;
- (void)cleanOutOfDatePreloadTempFile:(id)arg1;
- (void)removePreloadTempFile:(id)arg1;
- (void)removePreloadRecordByLRU;
- (void)removePreloadRecord:(id)arg1 shouldRemoveFile:(_Bool)arg2;
- (void)addPreloadRecord:(id)arg1;
- (_Bool)isAddedTaskOverDailyLimit;
- (void)savePreloadInfo;
- (void)loadPreloadRecord;
- (id)getPreloadRecordKey:(id)arg1;
- (id)getPreloadVideoInfoPath;
- (void)cleanOldRecordCache;
- (void)saveOldPreloadRecord;
- (void)loadOldRecord;
- (id)getOldRecordPath;
- (id)init;

@end

