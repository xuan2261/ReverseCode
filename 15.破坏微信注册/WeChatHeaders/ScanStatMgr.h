//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSString;

@interface ScanStatMgr : MMService <MMService, PBMessageObserverDelegate>
{
    unsigned int _networkType;
    NSString *_UUID;
}

@property(retain, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(nonatomic) unsigned int networkType; // @synthesize networkType=_networkType;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)uploadScanReport:(unsigned int)arg1 withLogExt:(id)arg2 productId:(id)arg3 statId:(id)arg4 type:(unsigned int)arg5 value:(id)arg6 count:(unsigned int)arg7 showType:(unsigned int)arg8;
- (void)statClickEvent:(unsigned int)arg1 productId:(id)arg2 statId:(id)arg3 type:(unsigned int)arg4 value:(id)arg5 actionListCount:(unsigned int)arg6 showType:(unsigned int)arg7;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

