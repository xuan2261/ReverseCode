//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "INewABTestMgrExt.h"
#import "ReportStrategyExt.h"

@class NSMutableDictionary, NSString;

@interface WCCrashBlockConfigMgr : NSObject <ReportStrategyExt, INewABTestMgrExt>
{
    NSString *_allUploadConfigString;
    NSString *_limitUploadConfigString;
    NSMutableDictionary *_dicMainThreadMonitorCongfig;
}

+ (_Bool)safeCompareString:(id)arg1 with:(id)arg2;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *dicMainThreadMonitorCongfig; // @synthesize dicMainThreadMonitorCongfig=_dicMainThreadMonitorCongfig;
@property(retain, nonatomic) NSString *limitUploadConfigString; // @synthesize limitUploadConfigString=_limitUploadConfigString;
@property(retain, nonatomic) NSString *allUploadConfigString; // @synthesize allUploadConfigString=_allUploadConfigString;
- (void).cxx_destruct;
- (void)onModifyABTestItem:(id)arg1 bizId:(id)arg2 abTestItem:(id)arg3;
- (unsigned int)UinHash:(unsigned int)arg1;
- (_Bool)isHitSample:(double)arg1;
- (void)onReceiveStrategy:(int)arg1 withContene:(id)arg2;
- (unsigned long long)getReportEnv;
- (void)updateUploadCount:(int)arg1;
- (_Bool)isMaxUploadCount;
- (_Bool)getIsAutoReport;
- (_Bool)getHeavyUserAll;
- (int)getMainThreadCount;
- (int)getDeviceUnder;
- (unsigned int)getPerStackInterval;
- (unsigned long long)getFrameDropLimit;
- (_Bool)getMainThreadHandle;
- (void)saveMainThreadHandle:(_Bool)arg1 withFrameDropLimit:(unsigned long long)arg2 withPerStackInterval:(unsigned long long)arg3 withDeviceUnder:(int)arg4 withMainThreadCount:(int)arg5 withHeavyUserAll:(_Bool)arg6;
- (void)saveIsMonitorState:(_Bool)arg1;
- (unsigned long long)getOneTimeUpload;
- (float)getCPUUsagePercent;
- (unsigned int)getCheckPeriodTime;
- (unsigned int)getRunloopTimeOut;
- (_Bool)getIsMonitor;
- (void)onStategy:(id)arg1;
- (void)onIPXX:(id)arg1;
- (void)onIPXXReportBlockDump:(id)arg1;
- (void)onIPXXStrategy:(id)arg1;
- (_Bool)parseCommonNode:(struct XmlReaderNode_t *)arg1 toBlockMonitorConfig:(id)arg2 toUploadConfig:(id)arg3 withExpiredTime:(id)arg4;
- (void)updateMatrixStrategy:(id)arg1;
- (void)saveDumpReportConfig;
- (void)clearExpiredConfig;
- (void)loadConfig;
- (id)getConfigFilePath;
- (void)dealloc;
- (id)getBlockMointorConfiguration;
- (void)lazyInitiateConfigMgr;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
