//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class BaseRequest, SKBuiltinBuffer_t;

@interface GetQQMusicLyricRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int isOutsideGfw; // @dynamic isOutsideGfw;
@property(nonatomic) unsigned int shakeMusicGlobalSwitch; // @dynamic shakeMusicGlobalSwitch;
@property(nonatomic) unsigned int songId; // @dynamic songId;
@property(retain, nonatomic) SKBuiltinBuffer_t *url; // @dynamic url;

@end

