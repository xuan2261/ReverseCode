//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AUAudioDataSource.h"
#import "IAUAudioDeviceExt.h"

@class AUAudioDevice, NSRecursiveLock, NSString;

@interface MMOpenVoiceAudioMgr : NSObject <AUAudioDataSource, IAUAudioDeviceExt>
{
    CDUnknownBlockType currentCallback;
    AUAudioDevice *mAudioDevice;
    _Bool isMutePlay;
    NSRecursiveLock *mAudioPlayLock;
    int _voiceSampleRate;
    int _voiceChannels;
    int _voiceFrameDuation;
    int recordCount;
    int _failCount;
    _Bool _isCallbackedStartStatus;
}

- (void).cxx_destruct;
- (int)getVoiceVolume;
- (int)getRecordCount;
- (int)AudioDevPutData:(char *)arg1 length:(unsigned int)arg2;
- (void)setAudioParam:(id)arg1;
- (void)audioDeviceStartedSuccess:(id)arg1;
- (void)audioDeviceStartedFail:(id)arg1;
- (void)callback:(int)arg1;
- (int)AudioDevGetData:(char *)arg1 length:(unsigned int)arg2;
- (_Bool)setMuteRecord:(_Bool)arg1;
- (_Bool)setMutePlay:(_Bool)arg1;
- (_Bool)startVoIP:(CDUnknownBlockType)arg1;
- (void)releaseAll;
- (void)setUp;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
