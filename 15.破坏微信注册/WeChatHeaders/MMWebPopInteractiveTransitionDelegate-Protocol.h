//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMWebPopInteractiveTransition;

@protocol MMWebPopInteractiveTransitionDelegate <NSObject>

@optional
- (_Bool)onPopBackInteractiveRecognizeEdgeGesture;
- (void)onPopBackInteractiveTransitionEnd:(MMWebPopInteractiveTransition *)arg1 isComplete:(_Bool)arg2;
- (void)onPopBackInteractiveTransitionChange:(MMWebPopInteractiveTransition *)arg1;
- (void)onPopBackInteractiveTransitionBegin:(MMWebPopInteractiveTransition *)arg1;
@end

