//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface GetChatRoomUpgradeStatusResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int cardQuota; // @dynamic cardQuota;
@property(nonatomic) unsigned int donateQuota; // @dynamic donateQuota;
@property(nonatomic) unsigned int maxCount; // @dynamic maxCount;
@property(nonatomic) unsigned int mobileQuota; // @dynamic mobileQuota;
@property(retain, nonatomic) NSString *resultMsg; // @dynamic resultMsg;
@property(nonatomic) unsigned int status; // @dynamic status;
@property(nonatomic) unsigned int totalQuota; // @dynamic totalQuota;

@end

