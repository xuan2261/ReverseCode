//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray;

@protocol EmoticonOperateCgiDelegate
- (void)onEmoticonOperateFailed:(NSArray *)arg1 opCode:(unsigned long long)arg2 isOverLimit:(_Bool)arg3;
- (void)onEmoticonOperateOk:(NSArray *)arg1 WithNeedBackupArray:(NSArray *)arg2 opCode:(unsigned long long)arg3;
@end

