//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@interface DelaySwitchSettingLogic : MMObject
{
    _Bool m_bNeedToSync;
}

- (void)CreateSettingExtStautsEventType:(unsigned int)arg1 andValue:(_Bool)arg2 andBitset:(unsigned int)arg3;
- (void)CreateSettingEventType:(unsigned int)arg1 andValue:(_Bool)arg2 andBitset:(unsigned int)arg3;
- (void)discoverEntranceLabSwitchSetting:(int)arg1 andValue:(_Bool)arg2;
- (void)discoverEntrancePluginSwitchSetting:(int)arg1 andValue:(_Bool)arg2;
- (void)discoverEntranceSwitchSetting:(int)arg1 andValue:(_Bool)arg2;
- (void)setWCPayTransferDelaySwitch:(int)arg1;
- (void)processPluginSetting:(id)arg1 withType:(int)arg2 andValue:(_Bool)arg3;
- (void)processMessageNotifycationSetting:(id)arg1 withType:(int)arg2 andValue:(_Bool)arg3;
- (void)processIndividualPrivacySetting:(id)arg1 withType:(int)arg2 andValue:(_Bool)arg3;
- (void)processContactProfileSetting:(id)arg1 withType:(int)arg2 andValue:(_Bool)arg3;
- (void)processChatProfileSetting:(id)arg1 withType:(int)arg2 andValue:(_Bool)arg3;
- (void)pluginSwitchSetting:(int)arg1 andValue:(_Bool)arg2;
- (void)messageNotifycationSwitchSetting:(int)arg1 andValue:(_Bool)arg2;
- (void)individualPrivacySwitchSetting:(int)arg1 andValue:(_Bool)arg2;
- (void)contactProfileSwitchSetting:(id)arg1 withType:(int)arg2 andValue:(_Bool)arg3;
- (void)chatProfileSwitchSetting:(id)arg1 withType:(int)arg2 andValue:(_Bool)arg3;
- (void)commitAllSwitchSetting;
- (void)enterBackground;
- (void)dealloc;
- (id)init;

@end

