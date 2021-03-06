//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface WCDBRecover : NSObject
{
    NSArray *_infos;
}

+ (id)transformedPath:(id)arg1;
+ (void)clearInitMark;
+ (void)exitApplication;
+ (void)enableIdleTimer;
+ (void)disableIdleTimer;
+ (void)enableSync;
+ (void)disableSync;
+ (id)queue;
@property(readonly, nonatomic) NSArray *infos; // @synthesize infos=_infos;
- (void).cxx_destruct;
- (_Bool)shouldMainDatabaseUseNewBackup;
- (_Bool)shouldMainDatabaseUseNewRecover;
- (_Bool)getSizeOfDatabase:(unsigned long long *)arg1 withInfo:(id)arg2;
- (_Bool)removeDepositedMainDatabase;
- (_Bool)canMainDatabaseRetrieve;
- (_Bool)isMainDatabaseCorrupted;
- (id)getOneOfCorruptedCriticalDatabaseInfo;
- (_Bool)work:(id)arg1 withDelegate:(id)arg2 andError:(id *)arg3;
- (_Bool)doWork:(id)arg1 withDelegate:(id)arg2 andError:(id *)arg3;
- (id)infoWithTag:(int)arg1;
- (id)init;

@end

