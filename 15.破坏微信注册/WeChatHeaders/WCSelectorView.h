//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class UIButton, UIImageView, UINavigationController, UIView;
@protocol WCSelectorViewDataSource, WCSelectorViewDelegate;

@interface WCSelectorView : MMUIView
{
    _Bool _bNeedLayout;
    UIImageView *_backgroundImageView;
    UIButton *_addButton;
    UIView *_deleteView;
    id <WCSelectorViewDataSource> _dataSource;
    id <WCSelectorViewDelegate> _delegate;
    UINavigationController *_navigationController;
    struct CGPoint _startPoint;
    double _stepWidth;
    _Bool _bShowAddButton;
    double _fDeleteScrollViewOffset;
    _Bool _bHandleOutside;
    _Bool _bHandleWholeView;
    _Bool _bAlighRight;
    _Bool _enableDrag;
    long long _maxImageCount;
}

@property(nonatomic) _Bool enableDrag; // @synthesize enableDrag=_enableDrag;
@property(nonatomic) long long maxImageCount; // @synthesize maxImageCount=_maxImageCount;
@property(nonatomic) double stepWidth; // @synthesize stepWidth=_stepWidth;
@property(nonatomic) _Bool bAlighRight; // @synthesize bAlighRight=_bAlighRight;
@property(nonatomic) _Bool bHandelWholeView; // @synthesize bHandelWholeView=_bHandleWholeView;
@property(nonatomic) _Bool bHandleOutside; // @synthesize bHandleOutside=_bHandleOutside;
@property(nonatomic) _Bool bShowAddButton; // @synthesize bShowAddButton=_bShowAddButton;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) __weak id <WCSelectorViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <WCSelectorViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)onXviewClicked:(id)arg1;
- (void)onAddButtonClicked:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)delayedHandleWholeView;
- (void)delayedTouchesEnded:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)hideBackgroundView;
- (void)showAddView;
- (void)hideAddView;
- (void)reloadDeleteView;
- (void)showDeleteView;
- (void)hideDeleteView;
- (void)layoutDeleteView;
- (void)reload;
- (void)layoutSubviews;
- (id)init;
- (void)commmtInit;

@end

