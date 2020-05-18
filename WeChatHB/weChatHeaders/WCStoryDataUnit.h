//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CContact, NSMutableArray, NSString;

@interface WCStoryDataUnit : NSObject
{
    _Bool _hasUnreadStory;
    _Bool _chatRoomSyncChange;
    NSMutableArray *_storyDataItemArray;
    unsigned long long _storyDataItemCount;
    CContact *_userContact;
    unsigned long long _type;
    NSString *_dateKey;
    NSMutableArray *_arrTid;
}

+ (id)historyDataUnitWithDateKey:(id)arg1 dataCount:(unsigned long long)arg2 dataItemArray:(id)arg3;
+ (id)storyDataUnitWithContact:(id)arg1 dataCount:(unsigned long long)arg2 storyDataItemArray:(id)arg3;
@property(nonatomic) _Bool chatRoomSyncChange; // @synthesize chatRoomSyncChange=_chatRoomSyncChange;
@property(retain, nonatomic) NSMutableArray *arrTid; // @synthesize arrTid=_arrTid;
@property(retain, nonatomic) NSString *dateKey; // @synthesize dateKey=_dateKey;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) _Bool hasUnreadStory; // @synthesize hasUnreadStory=_hasUnreadStory;
@property(retain, nonatomic) CContact *userContact; // @synthesize userContact=_userContact;
@property(nonatomic) unsigned long long storyDataItemCount; // @synthesize storyDataItemCount=_storyDataItemCount;
@property(retain, nonatomic) NSMutableArray *storyDataItemArray; // @synthesize storyDataItemArray=_storyDataItemArray;
- (void).cxx_destruct;
- (long long)indexForItemWithTid:(id)arg1;
- (_Bool)needReloadData;
@property(readonly, nonatomic) NSString *unitLogIdentifier;
@property(readonly, nonatomic) NSString *unitIdentifier;

@end
