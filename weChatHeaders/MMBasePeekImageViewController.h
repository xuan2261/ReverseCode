//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "WCForceTouchPopProtocol.h"

@class NSString, UIImage, UIImageView, UIView;

@interface MMBasePeekImageViewController : UIViewController <WCForceTouchPopProtocol>
{
    UIImage *_image;
    id _delegate;
    UIImageView *_imageView;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)commitViewController;
- (_Bool)canPop;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)reloadImage:(id)arg1;
- (id)initWithImage:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak UIViewController *previewFromController;
@property(nonatomic) __weak UIView *previewSourceView;
@property(readonly) Class superclass;

@end
