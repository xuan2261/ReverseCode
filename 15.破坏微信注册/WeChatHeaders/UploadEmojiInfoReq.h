//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class NSData, NSMutableArray, NSString;

@interface UploadEmojiInfoReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *attachedEmojiMd5List; // @dynamic attachedEmojiMd5List;
@property(retain, nonatomic) NSString *attachedText; // @dynamic attachedText;
@property(retain, nonatomic) NSData *emojiBuffer; // @dynamic emojiBuffer;
@property(retain, nonatomic) NSString *followingEmojiMd5; // @dynamic followingEmojiMd5;
@property(nonatomic) _Bool isSelfie; // @dynamic isSelfie;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(nonatomic) int startPos; // @dynamic startPos;
@property(nonatomic) int totalLen; // @dynamic totalLen;

@end

