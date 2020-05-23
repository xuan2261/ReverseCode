//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MMWebImageView, UILabel, UIView;

@interface WAWeAppBindListTableCellView : UITableViewCell
{
    MMWebImageView *_headImageView;
    UILabel *_titleLabel;
    UIView *_sepreateLine;
    UILabel *_descLabel;
    _Bool _isLastOne;
}

+ (id)titleLabelFont;
+ (long long)descLabelLineBreakMode;
+ (id)descLabelFont;
+ (double)cellHeightWith:(id)arg1 viewWidth:(double)arg2;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)initDescLabel;
- (void)initSeperateLine;
- (void)initTitleLabel;
- (void)initHeadImgeView;
- (void)initView;
- (void)updateSeperateLine:(_Bool)arg1;
- (void)updateDescLabelText:(id)arg1;
- (void)updateDataWithHeadImageURL:(id)arg1 title:(id)arg2 desc:(id)arg3 isLastOne:(_Bool)arg4;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
