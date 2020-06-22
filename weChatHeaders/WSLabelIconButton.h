//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class MMUILabel, UIImageView;

@interface WSLabelIconButton : UIButton
{
    MMUILabel *_label;
    UIImageView *_icon;
}

@property(readonly, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) MMUILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)layoutSubviews;
- (void)layoutContent;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
