//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMGrowTextView, NSNotification, NSString, UIImage, UITextView, UIView;

@protocol MMGrowTextViewDelegate <NSObject>

@optional
- (void)onAccessoryViewFrameChanged:(struct CGRect)arg1;
- (void)MMGrowTextViewBeginEditing:(MMGrowTextView *)arg1;
- (void)MMGrowTextView:(UIView *)arg1 pasteImage:(UIImage *)arg2;
- (_Bool)MMGrowTextView:(UIView *)arg1 shouldPasteImage:(UIImage *)arg2;
- (void)UITextViewTextDidChangeNotification:(NSNotification *)arg1;
- (void)keyboardWillHide:(_Bool)arg1;
- (void)keyboardDidShow:(double)arg1;
- (void)keyboardWillShow:(double)arg1;
- (void)TextViewDidDeleteToNil;
- (_Bool)TextViewDidDelete;
- (void)setKeyboardAnimationCurve:(long long)arg1;
- (void)setKeyboardAnimationDuration:(double)arg1;
- (void)TextViewDidChangeSelection:(UITextView *)arg1;
- (void)TextDidChanged:(UITextView *)arg1 selectedRange:(struct _NSRange)arg2;
- (void)TextViewDidEnter:(NSString *)arg1;
- (void)TextViewHeightDidChanged:(UITextView *)arg1;
@end

