//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

@class MMTableViewInfo, WCLabsAppItem;

@interface WCLabSettingDetailViewController : MMUIViewController
{
    MMTableViewInfo *m_tableViewInfo;
    WCLabsAppItem *m_labsAppItem;
    unsigned int m_lastAppSwitch;
}

- (void).cxx_destruct;
- (id)genFeedbackFromStr;
- (void)onJumeToWeApp:(id)arg1;
- (void)onJumeToFeedBack:(id)arg1;
- (void)onLabItemSwitchChanged:(id)arg1;
- (void)viewDidLayoutSubviews;
- (double)heightForFuncIntroCell:(id)arg1;
- (void)makeFuncIntroCell:(id)arg1 text:(id)arg2;
- (void)makeFuncIntroCell:(id)arg1 CellInfo:(id)arg2;
- (void)reloadTableViewData;
- (void)reloadTableView;
- (void)initTableView;
- (void)dealloc;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithLabsAppItem:(id)arg1;

@end

