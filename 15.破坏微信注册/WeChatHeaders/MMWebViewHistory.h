//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MMWebViewHistory : NSObject
{
    NSMutableArray *_snapshotArr;
    unsigned long long _count;
}

@property(nonatomic) unsigned long long count; // @synthesize count=_count;
- (void).cxx_destruct;
- (void)clearHistory;
- (void)goBackToURL:(id)arg1;
- (void)addHistoryWithURL:(id)arg1 webView:(id)arg2;
- (id)getSnapshotWithURL:(id)arg1;
- (id)getLastURL;
- (id)init;

@end

