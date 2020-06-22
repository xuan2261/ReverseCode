//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class BTNotifySectionData, MMHeadImageView, UIButton;

@interface BTNotifyMsgCellView : MMTableViewCell
{
    id <BTNotifyMsgCellViewDelegate> _delegate;
    BTNotifySectionData *_viewModel;
    UIButton *_messageTipsVew;
    MMHeadImageView *_headerView;
}

@property(retain, nonatomic) MMHeadImageView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIButton *messageTipsVew; // @synthesize messageTipsVew=_messageTipsVew;
@property(retain, nonatomic) BTNotifySectionData *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <BTNotifyMsgCellViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onClick;
- (void)layoutSubviews;
- (void)updateWithMsg:(id)arg1 unreadCount:(unsigned int)arg2;
- (void)initSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
