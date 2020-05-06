//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCWatchSettingCommonViewController.h"

#import "MMWebImageViewDelegate-Protocol.h"

@class MMWebImageView, NSArray, NSString, NSTimer, UILabel, UIView;

@interface WCWatchMomentsViewController : WCWatchSettingCommonViewController <MMWebImageViewDelegate>
{
    _Bool _photoInfoShowed;
    NSArray *_photoItemList;
    UIView *_albumContainer;
    UIView *_albumPhotoViewContainer;
    MMWebImageView *_albumPhotoView;
    UIView *_albumPhotoInfoView;
    UILabel *_albumPhotoInfoLabel;
    long long _photoIndex;
    UILabel *_timeLabel;
    UIView *_recentRowView;
    NSTimer *_timeLabelTimer;
}

@property(retain, nonatomic) NSTimer *timeLabelTimer; // @synthesize timeLabelTimer=_timeLabelTimer;
@property(retain, nonatomic) UIView *recentRowView; // @synthesize recentRowView=_recentRowView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic) _Bool photoInfoShowed; // @synthesize photoInfoShowed=_photoInfoShowed;
@property(nonatomic) long long photoIndex; // @synthesize photoIndex=_photoIndex;
@property(retain, nonatomic) UILabel *albumPhotoInfoLabel; // @synthesize albumPhotoInfoLabel=_albumPhotoInfoLabel;
@property(retain, nonatomic) UIView *albumPhotoInfoView; // @synthesize albumPhotoInfoView=_albumPhotoInfoView;
@property(retain, nonatomic) MMWebImageView *albumPhotoView; // @synthesize albumPhotoView=_albumPhotoView;
@property(retain, nonatomic) UIView *albumPhotoViewContainer; // @synthesize albumPhotoViewContainer=_albumPhotoViewContainer;
@property(retain, nonatomic) UIView *albumContainer; // @synthesize albumContainer=_albumContainer;
@property(retain, nonatomic) NSArray *photoItemList; // @synthesize photoItemList=_photoItemList;
- (void).cxx_destruct;
- (void)onLoadImageOK:(id)arg1;
- (void)refreshTimeLabel;
- (void)hidePhotoInfo;
- (void)showPhotoInfo;
- (void)handleCoverAnimationFinishedAndStartAgain;
- (void)startCurrentCoverAnimation;
- (void)startLoadingNextCoverImage;
- (void)initUI;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

