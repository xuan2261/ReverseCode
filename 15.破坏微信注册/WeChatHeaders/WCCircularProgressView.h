//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink, CAShapeLayer, NSString, UILabel;
@protocol WCCircularProgressViewDelegate;

@interface WCCircularProgressView : UIView
{
    double _progressStepForFinishingAnimation;
    double _lastTappedTime;
    _Bool _enable;
    double _progress;
    id <WCCircularProgressViewDelegate> _delegate;
    NSString *_successTipText;
    CAShapeLayer *_unfinishedShapeLayer;
    CAShapeLayer *_finishedShapeLayer;
    CAShapeLayer *_arrowLayer;
    CAShapeLayer *_tickLayer;
    UILabel *_successTipsLabel;
    CADisplayLink *_displayLink;
    double _realProgress;
    double _radius;
}

@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) double realProgress; // @synthesize realProgress=_realProgress;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) UILabel *successTipsLabel; // @synthesize successTipsLabel=_successTipsLabel;
@property(retain, nonatomic) CAShapeLayer *tickLayer; // @synthesize tickLayer=_tickLayer;
@property(retain, nonatomic) CAShapeLayer *arrowLayer; // @synthesize arrowLayer=_arrowLayer;
@property(retain, nonatomic) CAShapeLayer *finishedShapeLayer; // @synthesize finishedShapeLayer=_finishedShapeLayer;
@property(retain, nonatomic) CAShapeLayer *unfinishedShapeLayer; // @synthesize unfinishedShapeLayer=_unfinishedShapeLayer;
@property(copy, nonatomic) NSString *successTipText; // @synthesize successTipText=_successTipText;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
@property(nonatomic) __weak id <WCCircularProgressViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)stopFinishAnimation;
- (void)startFinishAnimation;
- (void)updateAnimation;
- (void)updateTextTipWithProgress:(double)arg1;
- (void)updateTickWithProgress:(double)arg1;
- (void)updateArrowWithProgress:(double)arg1;
- (void)updateCircularWithProgress:(double)arg1 animated:(_Bool)arg2;
- (void)viewDidTapped:(id)arg1;
- (void)applyFinishAnimation;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;
- (void)commonInit;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

