//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "ICdnComMgrExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "MMService-Protocol.h"

@class NSMutableDictionary, NSString;

@interface WCCalRqtDataMgr : MMService <IMsgExt, ICdnComMgrExt, MMService>
{
    NSMutableDictionary *_dicDownloading;
    _Bool _bEnable;
    struct set<int, std::__1::less<int>, std::__1::allocator<int>> _signedCgi;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateRqt:(id)arg1 toFile:(id)arg2;
- (_Bool)loadBundle;
- (_Bool)p_needCalRqtData:(int)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (id)getSpePath;
- (id)calSpeRqtData:(const void *)arg1 len:(unsigned int)arg2 type:(int)arg3;
- (id)getPath;
- (unsigned int)calRqtData:(const void *)arg1 len:(unsigned int)arg2 cmd:(int)arg3;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

