//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface WCNewClickStatPageConfig : MMObject
{
    _Bool bNeedAction;
    NSString *pageID;
}

+ (void)initialize;
@property(nonatomic) _Bool bNeedAction; // @synthesize bNeedAction;
@property(retain, nonatomic) NSString *pageID; // @synthesize pageID;
- (void).cxx_destruct;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

@end
