//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IMMQuartz2DContextDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol IMMQuartz2DDelegate;

@interface MMQuartz2DView : UIView <IMMQuartz2DContextDelegate>
{
    NSMutableArray *_drawObjs;
    NSMutableDictionary *_context;
    NSMutableArray *_contextStack;
    long long _touchId;
    NSMutableDictionary *_touches;
    _Bool _touched;
    unsigned int _canvasId;
    int _interactionMode;
    NSString *_userData;
    id <IMMQuartz2DDelegate> _canvasDelegate;
}

@property(nonatomic) __weak id <IMMQuartz2DDelegate> canvasDelegate; // @synthesize canvasDelegate=_canvasDelegate;
@property(nonatomic) int interactionMode; // @synthesize interactionMode=_interactionMode;
@property(retain, nonatomic) NSString *userData; // @synthesize userData=_userData;
@property(nonatomic) unsigned int canvasId; // @synthesize canvasId=_canvasId;
- (void).cxx_destruct;
- (id)getImageDataWithTargetRect:(struct CGRect)arg1;
- (id)getImage;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)onLongPress:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (long long)getTouchID:(id)arg1 remove:(_Bool)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)recreateContext;
- (void)restoreContext;
- (void)saveContext;
- (void)removeContext:(id)arg1;
- (void)setContext:(id)arg1 forKey:(id)arg2;
- (id)getContext:(id)arg1;
- (id)canvasToImageOffScreenWithScale:(double)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setDrawActions:(id)arg1 reset:(_Bool)arg2;
- (id)getMethodData:(id)arg1 forMethod:(id)arg2;
- (id)getString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

