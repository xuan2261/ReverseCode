//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "ICdnComMgrExt-Protocol.h"
#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class DeviceRankDetailResonse, NSMutableDictionary, NSString;

@interface DeviceRankProfileMgr : MMService <MMService, PBMessageObserverDelegate, ICdnComMgrExt>
{
    DeviceRankDetailResonse *m_selfDeviceRank;
    NSString *m_nsCDNClientID;
    NSMutableDictionary *m_profileConfig;
}

@property(retain, nonatomic) NSString *m_nsCDNClientID; // @synthesize m_nsCDNClientID;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetRankStepListResponse:(id)arg1;
- (void)getRankStepsWithBenginTime:(unsigned int)arg1 endTime:(unsigned int)arg2;
- (void)handleRankDelFollowResponse:(id)arg1;
- (void)handleRankAddFollowResponse:(id)arg1;
- (void)handleRankGetUserRankDetailResponse:(id)arg1;
- (void)handleUpdateCoverResponse:(id)arg1;
- (void)OnCdnUpload:(id)arg1;
- (void)delFollowWithUserName:(id)arg1;
- (void)addFollowWithFollowItem:(id)arg1;
- (void)saveProfileConfig;
- (void)setConfigWithObject:(id)arg1 key:(id)arg2;
- (id)GetDeviceRankProfileConfig;
- (void)tryLoadDeviceRankProfileConfig;
- (void)UpdateDeviceRankProfile;
- (void)saveRankProfile;
- (id)getRankProfileConfigCacheFile;
- (id)getRankProfileCacheOldPath;
- (id)getRankProfileCacheFilePath;
- (id)getRankCoverCacheOldPath;
- (id)getRankCoverCacheFilePath;
- (unsigned int)saveCoverImg:(id)arg1;
- (id)loadCoverImgCache;
- (id)GetSelfDeviceRankCache;
- (void)tryLoadDeviceRankProfile;
- (void)UpdateDeviceRankMotto:(id)arg1;
- (id)GetDeviceRankMotto;
- (void)UpdateDeviceRankCoverWithImg:(id)arg1;
- (id)GetDeviceRankCoverImg;
- (id)GetDeviceRankProfileWithBrandUser:(id)arg1 UserName:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

