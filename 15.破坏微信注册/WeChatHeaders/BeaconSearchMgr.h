//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSString;

@interface BeaconSearchMgr : MMService <PBMessageObserverDelegate, MMService>
{
    double startSearchTime;
}

@property(nonatomic) double startSearchTime; // @synthesize startSearchTime;
- (void)OnNetworkError:(unsigned int)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)uploadBeacons:(id)arg1 location:(id)arg2;
- (id)getBeaconsFromResponse:(id)arg1;
- (id)getJsonStringFor:(id)arg1 location:(id)arg2;
- (id)sortBeaconsByDistance:(id)arg1;
- (void)reportUserOpenBeacon:(id)arg1;
- (void)stopSearch;
- (void)startSearchWithLocation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

