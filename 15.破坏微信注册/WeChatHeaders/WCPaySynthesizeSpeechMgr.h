//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "IMMAudioPlayerQueueExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "MMService-Protocol.h"
#import "VoIPPushKitExt-Protocol.h"
#import "WCPayLogicMgrExt-Protocol.h"
#import "WCPaySynthesizeSpeechCgiDelegate-Protocol.h"

@class MPVolumeView, NSString, WCPaySynthesizeSpeechCgi;

@interface WCPaySynthesizeSpeechMgr : MMService <WCPayLogicMgrExt, WCPaySynthesizeSpeechCgiDelegate, IMsgExt, IMMAudioPlayerQueueExt, MMService, VoIPPushKitExt>
{
    float _m_lastVolume;
    WCPaySynthesizeSpeechCgi *_m_voiceCgi;
    MPVolumeView *_m_privateVoulmeView;
    double _m_volumeViewSupportMinVersion;
    double _m_volumeViewSupportMaxVersion;
}

@property(nonatomic) double m_volumeViewSupportMaxVersion; // @synthesize m_volumeViewSupportMaxVersion=_m_volumeViewSupportMaxVersion;
@property(nonatomic) double m_volumeViewSupportMinVersion; // @synthesize m_volumeViewSupportMinVersion=_m_volumeViewSupportMinVersion;
@property(nonatomic) float m_lastVolume; // @synthesize m_lastVolume=_m_lastVolume;
@property(retain, nonatomic) MPVolumeView *m_privateVoulmeView; // @synthesize m_privateVoulmeView=_m_privateVoulmeView;
@property(retain, nonatomic) WCPaySynthesizeSpeechCgi *m_voiceCgi; // @synthesize m_voiceCgi=_m_voiceCgi;
- (void).cxx_destruct;
- (void)OnNotifyAddFacingReceiveMoneyPayerInfo:(id)arg1;
- (void)OnGetWCPayExtensionInfoMsg:(id)arg1;
- (void)PushLocalNotification:(id)arg1;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)setSystemVolume:(float)arg1;
- (void)onMMAudioPlayerQueuePlayEnd;
- (void)forceSetSystemVolume;
- (void)removeVolumeView;
- (void)forceSetVolumeView;
- (void)playSynthesizeSound:(id)arg1;
- (void)OnGetWCPayVoiceRespErrorWithSpeechMsg:(id)arg1;
- (void)OnGetWCPayVoiceRespOK:(id)arg1;
- (void)requestForSynthesizeSpeech:(id)arg1;
- (void)onReceiveVoIPPushInfo:(id)arg1;
- (void)showLocalNotification:(id)arg1 isVoiceReqSuccess:(_Bool)arg2;
- (void)dealloc;
- (void)onServiceInit;
- (void)checkVolumViewSupportVersion;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

