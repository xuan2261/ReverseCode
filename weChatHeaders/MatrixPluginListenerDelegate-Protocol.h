//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MatrixIssue;

@protocol MatrixPluginListenerDelegate <NSObject>

@optional
- (void)onReportIssue:(MatrixIssue *)arg1;
- (void)onDestroy:(id <MatrixPluginProtocol>)arg1;
- (void)onStop:(id <MatrixPluginProtocol>)arg1;
- (void)onStart:(id <MatrixPluginProtocol>)arg1;
- (void)onInit:(id <MatrixPluginProtocol>)arg1;
@end

