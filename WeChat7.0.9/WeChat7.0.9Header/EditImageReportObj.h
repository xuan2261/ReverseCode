//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EditImageAttr, EditVideoAttr, NSMutableArray;

@interface EditImageReportObj : NSObject
{
    unsigned int _originalImageWidth;
    unsigned int _originalImageHeight;
    unsigned int _isWeishiPromotionShowed;
    unsigned int _isWeishiPromotionClicked;
    unsigned int _isWeishiInstalled;
    unsigned int _operationAfterWeishiPromotionClicked;
    unsigned int _clickPenWidgetToolCount;
    unsigned int _penWidgetToolCount;
    unsigned int _penWidgetToolColorCount;
    unsigned int _clickEmoticonWidgetToolCount;
    unsigned int _emoticonWidgetToolCount;
    unsigned int _clickTextWidgetToolCount;
    unsigned int _textWidgetToolCount;
    unsigned int _clickMosaicWidgetToolCount;
    unsigned int _mosaicGlassWidgetToolCount;
    unsigned int _mosaicPaintingWidgetToolCount;
    unsigned int _clickCropWidgetToolCount;
    unsigned int _croppedImageWidth;
    unsigned int _croppedImageHeight;
    unsigned int _isRotated;
    unsigned int _clickMusicWidgetToolCount;
    unsigned long long _editImageEnterScene;
    unsigned long long _enterPickerOrShootingTime;
    unsigned long long _quitPickerOrShootingTime;
    unsigned long long _startShootingTime;
    unsigned long long _editImageContentSource;
    unsigned long long _editImageContentType;
    unsigned long long _originalVideoDuration;
    unsigned long long _enterCropVideoViewTime;
    unsigned long long _completeCropVideoTime;
    unsigned long long _enterEditImageViewTime;
    EditImageAttr *_editImageAttr;
    EditVideoAttr *_editVideoAttr;
    unsigned long long _editImageNextStep;
    NSMutableArray *_actionTraceArray;
}

@property(retain, nonatomic) NSMutableArray *actionTraceArray; // @synthesize actionTraceArray=_actionTraceArray;
@property(nonatomic) unsigned int clickMusicWidgetToolCount; // @synthesize clickMusicWidgetToolCount=_clickMusicWidgetToolCount;
@property(nonatomic) unsigned int isRotated; // @synthesize isRotated=_isRotated;
@property(nonatomic) unsigned int croppedImageHeight; // @synthesize croppedImageHeight=_croppedImageHeight;
@property(nonatomic) unsigned int croppedImageWidth; // @synthesize croppedImageWidth=_croppedImageWidth;
@property(nonatomic) unsigned int clickCropWidgetToolCount; // @synthesize clickCropWidgetToolCount=_clickCropWidgetToolCount;
@property(nonatomic) unsigned int mosaicPaintingWidgetToolCount; // @synthesize mosaicPaintingWidgetToolCount=_mosaicPaintingWidgetToolCount;
@property(nonatomic) unsigned int mosaicGlassWidgetToolCount; // @synthesize mosaicGlassWidgetToolCount=_mosaicGlassWidgetToolCount;
@property(nonatomic) unsigned int clickMosaicWidgetToolCount; // @synthesize clickMosaicWidgetToolCount=_clickMosaicWidgetToolCount;
@property(nonatomic) unsigned int textWidgetToolCount; // @synthesize textWidgetToolCount=_textWidgetToolCount;
@property(nonatomic) unsigned int clickTextWidgetToolCount; // @synthesize clickTextWidgetToolCount=_clickTextWidgetToolCount;
@property(nonatomic) unsigned int emoticonWidgetToolCount; // @synthesize emoticonWidgetToolCount=_emoticonWidgetToolCount;
@property(nonatomic) unsigned int clickEmoticonWidgetToolCount; // @synthesize clickEmoticonWidgetToolCount=_clickEmoticonWidgetToolCount;
@property(nonatomic) unsigned int penWidgetToolColorCount; // @synthesize penWidgetToolColorCount=_penWidgetToolColorCount;
@property(nonatomic) unsigned int penWidgetToolCount; // @synthesize penWidgetToolCount=_penWidgetToolCount;
@property(nonatomic) unsigned int clickPenWidgetToolCount; // @synthesize clickPenWidgetToolCount=_clickPenWidgetToolCount;
@property(nonatomic) unsigned int operationAfterWeishiPromotionClicked; // @synthesize operationAfterWeishiPromotionClicked=_operationAfterWeishiPromotionClicked;
@property(nonatomic) unsigned int isWeishiInstalled; // @synthesize isWeishiInstalled=_isWeishiInstalled;
@property(nonatomic) unsigned int isWeishiPromotionClicked; // @synthesize isWeishiPromotionClicked=_isWeishiPromotionClicked;
@property(nonatomic) unsigned int isWeishiPromotionShowed; // @synthesize isWeishiPromotionShowed=_isWeishiPromotionShowed;
@property(nonatomic) unsigned long long editImageNextStep; // @synthesize editImageNextStep=_editImageNextStep;
@property(retain, nonatomic) EditVideoAttr *editVideoAttr; // @synthesize editVideoAttr=_editVideoAttr;
@property(retain, nonatomic) EditImageAttr *editImageAttr; // @synthesize editImageAttr=_editImageAttr;
@property(nonatomic) unsigned long long enterEditImageViewTime; // @synthesize enterEditImageViewTime=_enterEditImageViewTime;
@property(nonatomic) unsigned long long completeCropVideoTime; // @synthesize completeCropVideoTime=_completeCropVideoTime;
@property(nonatomic) unsigned long long enterCropVideoViewTime; // @synthesize enterCropVideoViewTime=_enterCropVideoViewTime;
@property(nonatomic) unsigned int originalImageHeight; // @synthesize originalImageHeight=_originalImageHeight;
@property(nonatomic) unsigned int originalImageWidth; // @synthesize originalImageWidth=_originalImageWidth;
@property(nonatomic) unsigned long long originalVideoDuration; // @synthesize originalVideoDuration=_originalVideoDuration;
@property(nonatomic) unsigned long long editImageContentType; // @synthesize editImageContentType=_editImageContentType;
@property(nonatomic) unsigned long long editImageContentSource; // @synthesize editImageContentSource=_editImageContentSource;
@property(nonatomic) unsigned long long startShootingTime; // @synthesize startShootingTime=_startShootingTime;
@property(nonatomic) unsigned long long quitPickerOrShootingTime; // @synthesize quitPickerOrShootingTime=_quitPickerOrShootingTime;
@property(nonatomic) unsigned long long enterPickerOrShootingTime; // @synthesize enterPickerOrShootingTime=_enterPickerOrShootingTime;
@property(nonatomic) unsigned long long editImageEnterScene; // @synthesize editImageEnterScene=_editImageEnterScene;
- (void).cxx_destruct;
- (id)arrayToJSON:(id)arg1;
- (void)doActionTraceWithType:(unsigned long long)arg1;
- (void)clickEditImageWidgetToolButton:(unsigned long long)arg1;
- (void)quitReport;
- (void)finishReport;
- (void)updateReportStr:(id)arg1;

@end
