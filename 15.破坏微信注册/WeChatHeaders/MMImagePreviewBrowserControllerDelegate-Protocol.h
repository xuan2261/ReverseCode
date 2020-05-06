//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMAssetInfo, SightDraft;

@protocol MMImagePreviewBrowserControllerDelegate <NSObject>
- (struct CGRect)assetViewFrameGlobal:(MMAssetInfo *)arg1;
- (void)sendVideoWithDraft:(SightDraft *)arg1;
- (void)sendImageFromScene:(long long)arg1;
- (unsigned long long)selectedAssetInfosCount;
- (long long)indexInSelectedAssetInfosForAssetInfo:(MMAssetInfo *)arg1;
- (void)onMoveSelectedInfo:(MMAssetInfo *)arg1 toIndex:(unsigned long long)arg2;
- (void)onInsertSelectedInfo:(MMAssetInfo *)arg1 atIndex:(unsigned long long)arg2;
- (void)onRemoveSelectedInfo:(MMAssetInfo *)arg1;
- (void)onOriginImageCheckChanged;
- (void)onFinishEditAssetInfo:(MMAssetInfo *)arg1;
@end

