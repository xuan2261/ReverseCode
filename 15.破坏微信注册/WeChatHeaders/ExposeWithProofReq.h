//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString;

@interface ExposeWithProofReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *chatname; // @dynamic chatname;
@property(nonatomic) unsigned int exposetype; // @dynamic exposetype;
@property(retain, nonatomic) NSString *htmlContent; // @dynamic htmlContent;
@property(retain, nonatomic) NSMutableArray *imglist; // @dynamic imglist;
@property(retain, nonatomic) NSMutableArray *list; // @dynamic list;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *supplement; // @dynamic supplement;

@end

