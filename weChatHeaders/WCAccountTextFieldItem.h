//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCBaseTextFieldItem.h"

@class UILabel;

@interface WCAccountTextFieldItem : WCBaseTextFieldItem
{
    _Bool m_bUseGrayColor;
    UILabel *m_labelTip;
}

- (void).cxx_destruct;
- (void)setTextContentType:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setText:(id)arg1;
- (void)adjustFieldItemWidth:(double)arg1;
- (void)setLeftTitleColor:(id)arg1;
- (void)initView:(struct CGRect)arg1;
- (void)initView:(struct CGRect)arg1 leftMargin:(double)arg2;
- (void)initView:(struct CGRect)arg1 leftMargin:(double)arg2 rightMargin:(double)arg3;
- (void)initView:(struct CGRect)arg1 leftMargin:(double)arg2 rightMargin:(double)arg3 useGrayBackgroundColor:(_Bool)arg4;

@end
