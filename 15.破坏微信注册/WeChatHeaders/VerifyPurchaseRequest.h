//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class BaseRequest, NSString, SKBuiltinBuffer_t;

@interface VerifyPurchaseRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *billNo; // @dynamic billNo;
@property(retain, nonatomic) NSString *currencyType; // @dynamic currencyType;
@property(nonatomic) unsigned int payTime; // @dynamic payTime;
@property(nonatomic) unsigned int payType; // @dynamic payType;
@property(retain, nonatomic) NSString *price; // @dynamic price;
@property(retain, nonatomic) NSString *productId; // @dynamic productId;
@property(nonatomic) unsigned int quantity; // @dynamic quantity;
@property(retain, nonatomic) SKBuiltinBuffer_t *receipt; // @dynamic receipt;
@property(retain, nonatomic) NSString *receiptSig; // @dynamic receiptSig;
@property(nonatomic) unsigned int verifyType; // @dynamic verifyType;

@end

