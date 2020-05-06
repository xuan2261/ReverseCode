//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JSCProtocolAdapter, NSMutableArray, NSMutableDictionary, NSString;

@interface JSCTarget : NSObject
{
    JSCProtocolAdapter *_adapter;
    _Bool _isConnected;
    NSMutableArray *_messageBuffer;
    NSMutableDictionary *_messageFilters;
    NSMutableDictionary *_toolRequestMap;
    NSMutableDictionary *_adapterRequestMap;
    int _requestId;
    NSString *_id;
    CDUnknownBlockType _sendToTargetImpl;
    CDUnknownBlockType _sendToRemoteImpl;
}

+ (id)jsonParse:(id)arg1;
+ (id)jsonString:(id)arg1;
+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType sendToRemoteImpl; // @synthesize sendToRemoteImpl=_sendToRemoteImpl;
@property(copy, nonatomic) CDUnknownBlockType sendToTargetImpl; // @synthesize sendToTargetImpl=_sendToTargetImpl;
- (void).cxx_destruct;
- (void)onMessageFromTarget:(id)arg1;
- (void)onMessageFromRemote:(id)arg1;
- (void)fireResultToRemote:(id)arg1 params:(id)arg2;
- (void)fireEventToRemote:(id)arg1 params:(id)arg2;
- (id)callTarget:(id)arg1 params:(id)arg2;
- (void)addMessage:(id)arg1 filter:(CDUnknownBlockType)arg2;
- (id)initWithTargetId:(id)arg1 needFilter:(_Bool)arg2;
- (id)initWithTargetId:(id)arg1;

@end

