//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class NSString, UIButton, UIImageView, UILabel;
@protocol WCCardHomeHeaderViewDelegate;

@interface WCCardHomeHeaderView : UICollectionReusableView
{
    _Bool _bShowArrowIcon;
    _Bool _bShowImageIcon;
    NSString *_leftWording;
    NSString *_rightWording;
    id <WCCardHomeHeaderViewDelegate> _delegate;
    UILabel *_leftLabel;
    UIButton *_rightButton;
    UIImageView *_arrowIcon;
    UIImageView *_iconImageView;
}

@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIImageView *arrowIcon; // @synthesize arrowIcon=_arrowIcon;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UILabel *leftLabel; // @synthesize leftLabel=_leftLabel;
@property(nonatomic) __weak id <WCCardHomeHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool bShowImageIcon; // @synthesize bShowImageIcon=_bShowImageIcon;
@property(nonatomic) _Bool bShowArrowIcon; // @synthesize bShowArrowIcon=_bShowArrowIcon;
@property(retain, nonatomic) NSString *rightWording; // @synthesize rightWording=_rightWording;
@property(retain, nonatomic) NSString *leftWording; // @synthesize leftWording=_leftWording;
- (void).cxx_destruct;
- (void)wholeViewDidTouch:(id)arg1;
- (void)rightButtonDidSelected;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

