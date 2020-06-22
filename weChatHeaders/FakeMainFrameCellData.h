//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface FakeMainFrameCellData : NSObject <PBCoding>
{
    _Bool bNormalCell;
    _Bool bTopCell;
    NSString *userName;
    NSString *textForNameLabel;
    NSString *textForTimeLabel;
    NSString *textForMessageLabel;
    double widthForNameLabel;
}

+ (void)initialize;
@property _Bool bTopCell; // @synthesize bTopCell;
@property _Bool bNormalCell; // @synthesize bNormalCell;
@property double widthForNameLabel; // @synthesize widthForNameLabel;
@property(retain) NSString *textForMessageLabel; // @synthesize textForMessageLabel;
@property(retain) NSString *textForTimeLabel; // @synthesize textForTimeLabel;
@property(retain) NSString *textForNameLabel; // @synthesize textForNameLabel;
@property(retain) NSString *userName; // @synthesize userName;
- (void).cxx_destruct;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
