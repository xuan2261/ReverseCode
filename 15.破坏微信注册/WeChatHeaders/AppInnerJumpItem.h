//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "NSCopying-Protocol.h"
#import "PBCoding-Protocol.h"

@class NSString;

@interface AppInnerJumpItem : MMObject <NSCopying, PBCoding>
{
    _Bool bEnableJump;
    NSString *nsJumpUrl;
    NSString *nsPushContent;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *nsPushContent; // @synthesize nsPushContent;
@property(retain, nonatomic) NSString *nsJumpUrl; // @synthesize nsJumpUrl;
@property(nonatomic) _Bool bEnableJump; // @synthesize bEnableJump;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

