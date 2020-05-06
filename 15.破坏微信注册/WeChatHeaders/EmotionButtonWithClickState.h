//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIColor;

@interface EmotionButtonWithClickState : UIButton
{
    UIColor *m_originBackgroundColor;
    UIColor *_touchDownBGColor;
    double _animateDurationForRemoveClickStateBG;
}

@property(nonatomic) double animateDurationForRemoveClickStateBG; // @synthesize animateDurationForRemoveClickStateBG=_animateDurationForRemoveClickStateBG;
@property(retain, nonatomic) UIColor *touchDownBGColor; // @synthesize touchDownBGColor=_touchDownBGColor;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

