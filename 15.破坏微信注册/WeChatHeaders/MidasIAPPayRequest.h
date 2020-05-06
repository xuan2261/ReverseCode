//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIViewController;

@interface MidasIAPPayRequest : NSObject
{
    unsigned int _reqId;
    unsigned long long _mode;
    NSString *_offerId;
    NSString *_productId;
    NSString *_orderId;
    NSString *_openKey;
    NSString *_price;
    NSString *_urlParams;
    UIViewController *_contextVC;
}

@property(nonatomic) __weak UIViewController *contextVC; // @synthesize contextVC=_contextVC;
@property(retain, nonatomic) NSString *urlParams; // @synthesize urlParams=_urlParams;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *openKey; // @synthesize openKey=_openKey;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(retain, nonatomic) NSString *offerId; // @synthesize offerId=_offerId;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) unsigned int reqId; // @synthesize reqId=_reqId;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isValid;
- (id)init;

@end

