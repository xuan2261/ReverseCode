//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString, WAAppBrandNotifyModuleInfo;

@interface WAAppBrandNotifyInfo : NSObject <PBCoding>
{
    _Bool isAlreadyDownload;
    unsigned int type;
    unsigned int debugStartTime;
    unsigned int debugEndTime;
    unsigned int from;
    unsigned int debugDevKey;
    NSString *appid;
    NSString *username;
    NSString *debugURL;
    NSString *checkSum;
    WAAppBrandNotifyModuleInfo *moduleInfo;
    NSString *deviceOrientation;
    NSString *clientJsExtInfoString;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *clientJsExtInfoString; // @synthesize clientJsExtInfoString;
@property(retain, nonatomic) NSString *deviceOrientation; // @synthesize deviceOrientation;
@property(nonatomic) unsigned int debugDevKey; // @synthesize debugDevKey;
@property(retain, nonatomic) WAAppBrandNotifyModuleInfo *moduleInfo; // @synthesize moduleInfo;
@property(nonatomic) unsigned int from; // @synthesize from;
@property(retain, nonatomic) NSString *checkSum; // @synthesize checkSum;
@property(nonatomic) _Bool isAlreadyDownload; // @synthesize isAlreadyDownload;
@property(nonatomic) unsigned int debugEndTime; // @synthesize debugEndTime;
@property(nonatomic) unsigned int debugStartTime; // @synthesize debugStartTime;
@property(nonatomic) unsigned int type; // @synthesize type;
@property(retain, nonatomic) NSString *debugURL; // @synthesize debugURL;
@property(retain, nonatomic) NSString *username; // @synthesize username;
@property(retain, nonatomic) NSString *appid; // @synthesize appid;
- (void).cxx_destruct;
- (void)clearDownloadState;
- (void)markModule:(id)arg1 isDownloaded:(_Bool)arg2;
- (void)updateInfoWithPackageExtInfo:(id)arg1;
- (_Bool)isDebugPackageValidWithCurrentTime:(unsigned int)arg1;
@property(readonly, copy) NSString *description;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

