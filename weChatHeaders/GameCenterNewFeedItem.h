//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class GameCenterGameBriefInfo, NSArray, NSString;

@interface GameCenterNewFeedItem : MMObject <PBCoding>
{
    unsigned int feedType;
    GameCenterGameBriefInfo *gameInfo;
    NSArray *feedFriendInfo;
}

+ (void)initialize;
@property(nonatomic) unsigned int feedType; // @synthesize feedType;
@property(retain, nonatomic) NSArray *feedFriendInfo; // @synthesize feedFriendInfo;
@property(retain, nonatomic) GameCenterGameBriefInfo *gameInfo; // @synthesize gameInfo;
- (void).cxx_destruct;
- (void)parseFromResp:(id)arg1;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

