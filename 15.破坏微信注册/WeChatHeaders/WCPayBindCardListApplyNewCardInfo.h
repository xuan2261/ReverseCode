//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface WCPayBindCardListApplyNewCardInfo : NSObject <PBCoding>
{
    long long menu_jump_type;
    NSString *menu_jump_url;
    NSString *menu_username;
    NSString *menu_path;
    NSString *menu_title;
    NSString *menu_icon_url;
}

+ (id)loadFromFileWithScene:(int)arg1;
+ (void)saveFromDictionary:(id)arg1 withScene:(int)arg2;
+ (id)genFromDictionary:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) NSString *menu_icon_url; // @synthesize menu_icon_url;
@property(retain, nonatomic) NSString *menu_title; // @synthesize menu_title;
@property(retain, nonatomic) NSString *menu_path; // @synthesize menu_path;
@property(retain, nonatomic) NSString *menu_username; // @synthesize menu_username;
@property(retain, nonatomic) NSString *menu_jump_url; // @synthesize menu_jump_url;
@property(nonatomic) long long menu_jump_type; // @synthesize menu_jump_type;
- (void).cxx_destruct;
- (id)init;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

