//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FullScreenGestureDelegate.h"
#import "IVOIPWindowExt.h"
#import "WCStoryVideoControlViewDelegate.h"

@class NSString, WCPlayerInfo, WCPlayerView, WCStoryMediaItem, WCStoryVideoControlView, WXFullScreenGestureRecognizer;

@interface WCStoryVideoPlayerView : UIView <WCStoryVideoControlViewDelegate, FullScreenGestureDelegate, IVOIPWindowExt>
{
    _Bool _bCanDragToClose;
    id <WCStoryVideoPlayerViewDelegate> _delegate;
    WCStoryMediaItem *_mediaItem;
    WCPlayerInfo *_playerInfo;
    WCPlayerView *_playerView;
    WCStoryVideoControlView *_controlView;
    WXFullScreenGestureRecognizer *_fullScreenGestureRecognizer;
}

@property(retain, nonatomic) WXFullScreenGestureRecognizer *fullScreenGestureRecognizer; // @synthesize fullScreenGestureRecognizer=_fullScreenGestureRecognizer;
@property(retain, nonatomic) WCStoryVideoControlView *controlView; // @synthesize controlView=_controlView;
@property(retain, nonatomic) WCPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) WCPlayerInfo *playerInfo; // @synthesize playerInfo=_playerInfo;
@property(retain, nonatomic) WCStoryMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(nonatomic) _Bool bCanDragToClose; // @synthesize bCanDragToClose=_bCanDragToClose;
@property(nonatomic) __weak id <WCStoryVideoPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onVoipWindowDisappear;
- (void)onVoipWindowDidAppear;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)onFullScreenClose;
- (_Bool)isPlayerViewForMediaItem:(id)arg1;
- (void)setVideoFrame:(struct CGRect)arg1;
- (void)setPlayerToMuted:(_Bool)arg1;
- (void)stopAndCleanPlayer;
- (void)stopPlay;
- (void)pauseVideo;
- (void)playVideoWithMute:(_Bool)arg1;
- (void)playVideo;
- (void)reloadPlayerInfo;
- (void)initSubview;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 DataItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
