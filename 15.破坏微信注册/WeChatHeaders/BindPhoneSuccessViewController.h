//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

@class MMTableViewInfo;
@protocol BindPhoneSuccessViewControllerDelegate;

@interface BindPhoneSuccessViewController : MMUIViewController
{
    id <BindPhoneSuccessViewControllerDelegate> _delegate;
    MMTableViewInfo *_tableViewInfo;
}

@property(retain, nonatomic) MMTableViewInfo *tableViewInfo; // @synthesize tableViewInfo=_tableViewInfo;
@property(nonatomic) __weak id <BindPhoneSuccessViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showBindedView;
- (void)initTableView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;

@end

