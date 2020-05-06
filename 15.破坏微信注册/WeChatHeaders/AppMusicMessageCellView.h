//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageCellView.h"

#import "MMMusicPlayerContollerDelegate-Protocol.h"
#import "MMWebImageViewDelegate-Protocol.h"

@class AppMusicMessageViewModel, MMMusicPlayerContoller, NSString, UIImageView, UILabel;

@interface AppMusicMessageCellView : CommonMessageCellView <MMWebImageViewDelegate, MMMusicPlayerContollerDelegate>
{
    UILabel *m_titleLabel;
    UILabel *m_detailLabel;
    UIImageView *m_thumbImageView;
    UIImageView *m_blurBgImageView;
    MMMusicPlayerContoller *_playButton;
}

- (void).cxx_destruct;
- (_Bool)handleMagicTapAction:(id)arg1;
- (void)addMagicTapActions:(id)arg1;
- (void)onClickToPlayMusic:(id)arg1 playState:(int)arg2;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(struct CGPoint)arg2 inCoordinateView:(id)arg3;
- (id)viewControllerForPreview:(id)arg1;
- (id)urlForPreView:(id)arg1;
- (_Bool)canPeek;
- (void)onAppear;
- (void)onTouchUpInside;
- (void)onTouchDown;
- (void)onForward:(id)arg1;
- (id)operationMenuItems;
- (void)onLoadImageOK:(id)arg1;
- (void)updateThumbImage;
- (void)addMusicPlayView;
- (id)blurEffectAlbumImage;
- (double)calBlurImageHeight;
- (void)addBlurEffectAlbumView;
- (void)initDetailLabel;
- (void)initTitleLabel;
- (void)initThumbImageView;
- (void)layoutContentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) AppMusicMessageViewModel *viewModel; // @dynamic viewModel;

@end

