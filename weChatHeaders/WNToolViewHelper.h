//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "MMPickLocationViewControllerDelegate.h"

@class MMPickLocationViewController, NSMutableArray, WNParagraphInfo;

@interface WNToolViewHelper : MMObject <MMPickLocationViewControllerDelegate>
{
    WNParagraphInfo *_recordingInfo;
    MMPickLocationViewController *m_locationViewCtrl;
    NSMutableArray *items;
    int mmassetCount;
    id <WNArticleToolViewDelegate> delegate;
}

+ (id)createThumbImage:(id)arg1;
+ (void)configImageItem:(id)arg1 withImage:(id)arg2;
@property(nonatomic) __weak id <WNArticleToolViewDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)onVoiceRecordEnd;
- (void)onVoiceRecordRealBegin;
- (_Bool)onVoiceRecordBegin;
- (id)onGetRightBarButton;
- (void)onFinishSelectedLocation;
- (void)onCreatPostLocationView;
- (void)onCancelSeletctedLocation;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)configSightItem:(id)arg1 withSightPath:(id)arg2 andThumbImgPath:(id)arg3 andDuration:(unsigned int)arg4;
- (void)onAddImageItemComplete;
- (void)configImageItem:(id)arg1 withAsset:(id)arg2;
- (void)configGIFItem:(id)arg1 withData:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 sentImmediately:(_Bool)arg3 isMuted:(_Bool)arg4 editVideoAttr:(id)arg5;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)onTakePhotoForPost;
- (void)onCreatePostImageView;
- (void)showImagePicker:(long long)arg1;
- (void)insertSeperateLine;
- (void)onToolViewParagraphSetTodo;
- (void)onParagraphSetOl;
- (void)onParagraphSetUl;
- (void)onTextSetBold;
- (_Bool)ifCanInsertOneItem;

@end

