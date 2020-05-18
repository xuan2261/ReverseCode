//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface MMReportSessionInfo : MMObject <PBCoding>
{
    _Bool bMuteChat;
    _Bool bTopChat;
    _Bool _bNewChat;
    _Bool _bHasReply;
    unsigned int unreadCount;
    unsigned int chatIndex;
    unsigned int _enterTime;
    unsigned int _leaveTime;
    NSString *username;
}

+ (void)initialize;
@property(nonatomic) _Bool bHasReply; // @synthesize bHasReply=_bHasReply;
@property(nonatomic) unsigned int leaveTime; // @synthesize leaveTime=_leaveTime;
@property(nonatomic) unsigned int enterTime; // @synthesize enterTime=_enterTime;
@property(nonatomic) _Bool bNewChat; // @synthesize bNewChat=_bNewChat;
@property(nonatomic) unsigned int chatIndex; // @synthesize chatIndex;
@property(nonatomic) _Bool bTopChat; // @synthesize bTopChat;
@property(nonatomic) _Bool bMuteChat; // @synthesize bMuteChat;
@property(nonatomic) unsigned int unreadCount; // @synthesize unreadCount;
@property(retain, nonatomic) NSString *username; // @synthesize username;
- (void).cxx_destruct;
- (id)initWithSessionInfo:(id)arg1 withChatIndex:(unsigned int)arg2;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
