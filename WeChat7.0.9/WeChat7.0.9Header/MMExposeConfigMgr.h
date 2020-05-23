//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMPackageDownloadMgrExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class NSMutableDictionary, NSString;

@interface MMExposeConfigMgr : MMService <MMPackageDownloadMgrExt, MMServiceProtocol>
{
    unsigned int m_uiExposeLastUpdateTime;
    NSMutableDictionary *m_dicExposeReasonItems;
    NSMutableDictionary *m_dicExposeLinkItems;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)onServiceInit;
- (id)init;
- (unsigned int)getExposeEntranceType;
- (id)getExposeLinkItemsWithScene:(unsigned int)arg1;
- (id)getExposeReasonItemsWithScene:(unsigned int)arg1;
- (id)getExposeConfigFilePath;
- (void)initExposeConfig:(id)arg1;
- (void)downLoadExpose;
- (_Bool)isNeedUpdateExpose;
- (void)loadConfigFromFile;
- (void)onPackageDownloadFinish:(id)arg1 package:(id)arg2;
- (void)onPackageNeedUpdate:(id)arg1 withPackIDs:(id)arg2;
- (void)onPackageListUpdated:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
