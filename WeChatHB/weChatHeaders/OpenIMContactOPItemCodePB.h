//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSData, NSString;

@interface OpenIMContactOPItemCodePB : NSObject <PBCoding>
{
    _Bool isNeedSync;
    unsigned int oPLogType;
    NSData *oPLogData;
    NSString *oPLogId;
}

+ (void)initialize;
@property(nonatomic) _Bool isNeedSync; // @synthesize isNeedSync;
@property(retain, nonatomic) NSString *oPLogId; // @synthesize oPLogId;
@property(retain, nonatomic) NSData *oPLogData; // @synthesize oPLogData;
@property(nonatomic) unsigned int oPLogType; // @synthesize oPLogType;
- (void).cxx_destruct;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
