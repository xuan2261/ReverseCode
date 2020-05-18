//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPlayerControlView.h"

@class WCPlayerInfo, WCPlayerView;

@interface WhatsNewPlayerView : WCPlayerControlView
{
    _Bool _beginTruePlay;
    _Bool _repeatTurePlay;
    WCPlayerInfo *_playerInfo;
    WCPlayerView *_beginPlayerView;
    WCPlayerInfo *_repeatPlayerInfo;
    WCPlayerView *_repeatPlayerView;
}

@property(nonatomic) _Bool repeatTurePlay; // @synthesize repeatTurePlay=_repeatTurePlay;
@property(nonatomic) _Bool beginTruePlay; // @synthesize beginTruePlay=_beginTruePlay;
@property(retain, nonatomic) WCPlayerView *repeatPlayerView; // @synthesize repeatPlayerView=_repeatPlayerView;
@property(retain, nonatomic) WCPlayerInfo *repeatPlayerInfo; // @synthesize repeatPlayerInfo=_repeatPlayerInfo;
@property(retain, nonatomic) WCPlayerView *beginPlayerView; // @synthesize beginPlayerView=_beginPlayerView;
@property(retain, nonatomic) WCPlayerInfo *playerInfo; // @synthesize playerInfo=_playerInfo;
- (void).cxx_destruct;
- (void)onVideoStatusReadyToPlay:(id)arg1;
- (void)onVideoPlayToEnd;
- (void)layoutSubviews;
- (id)init;
- (void)preparePlay;
- (void)clear;
- (void)play;

@end
