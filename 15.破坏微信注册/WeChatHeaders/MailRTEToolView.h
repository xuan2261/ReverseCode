//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MMPickLocationViewControllerDelegate-Protocol.h"
#import "MMTipsViewControllerDelegate-Protocol.h"

@class MMPickLocationViewController, MMUIView, NSMutableArray, NSString;
@protocol MailRTEToolViewDelegate;

@interface MailRTEToolView : UIView <MMPickLocationViewControllerDelegate, MMTipsViewControllerDelegate>
{
    MMUIView *_basicBtnContainer;
    MMUIView *_extBtnContainer;
    UIView *_tabLine;
    unsigned int _mmassetCount;
    id <MailRTEToolViewDelegate> _delegate;
    NSMutableArray *_arrAttachments;
    MMPickLocationViewController *_locationViewCtrl;
}

@property(retain, nonatomic) MMPickLocationViewController *locationViewCtrl; // @synthesize locationViewCtrl=_locationViewCtrl;
@property(retain, nonatomic) NSMutableArray *arrAttachments; // @synthesize arrAttachments=_arrAttachments;
@property(nonatomic) unsigned int mmassetCount; // @synthesize mmassetCount=_mmassetCount;
@property(nonatomic) __weak id <MailRTEToolViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)insertSeperateLine;
- (void)onCancelSeletctedLocation;
- (void)onFinishSelectedLocation;
- (id)onGetRightBarButton;
- (void)onCreatPostLocationView;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)onAddImageItemComplete;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)showImagePicker:(long long)arg1 withAvailableCount:(unsigned int)arg2;
- (void)onTakePhotoForPost;
- (void)onCreatePostImageView:(unsigned int)arg1;
- (unsigned int)checkExceedMaxObjectCountAndAlert:(unsigned int)arg1;
- (void)onClickItem:(id)arg1;
- (id)getIconSelectedName:(int)arg1;
- (id)getIconHLName:(int)arg1;
- (id)getIconName:(int)arg1;
- (id)getTitle:(int)arg1;
- (void)showBasicView;
- (void)initBasicView;
- (void)initUI;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

