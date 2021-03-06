//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCPlayerStateMoniter : NSObject
{
    _Bool _bResumeRealPlayBeInBugState;
    _Bool _bSeeking;
    float _startBufferTime;
    unsigned long long _playerErrorType;
    unsigned long long _playerState;
    unsigned long long _recoverState;
}

@property(nonatomic) _Bool bSeeking; // @synthesize bSeeking=_bSeeking;
@property(nonatomic) _Bool bResumeRealPlayBeInBugState; // @synthesize bResumeRealPlayBeInBugState=_bResumeRealPlayBeInBugState;
@property(nonatomic) float startBufferTime; // @synthesize startBufferTime=_startBufferTime;
@property(nonatomic) unsigned long long recoverState; // @synthesize recoverState=_recoverState;
@property(nonatomic) unsigned long long playerState; // @synthesize playerState=_playerState;
@property(nonatomic) unsigned long long playerErrorType; // @synthesize playerErrorType=_playerErrorType;
- (void)resetToLocalPlayer;
- (void)setRecoverStateToInError;
- (void)setRecoverStateToResetFail;
- (void)setBufferingState;
- (void)setPlayingState;
- (_Bool)isVideoStopPlay;
- (_Bool)setCurrPlayerState:(unsigned long long)arg1;

@end

