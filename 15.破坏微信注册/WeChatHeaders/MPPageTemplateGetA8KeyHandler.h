//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBMessageObserverDelegate-Protocol.h"

@interface MPPageTemplateGetA8KeyHandler : NSObject <PBMessageObserverDelegate>
{
    MPPageTemplateGetA8KeyHandler *_retainSelf;
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) MPPageTemplateGetA8KeyHandler *retainSelf; // @synthesize retainSelf=_retainSelf;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onResponseGetA8Key:(id)arg1;
- (void)callbackCompletionHandlerWithSuccess:(_Bool)arg1 fullUrl:(id)arg2 header:(id)arg3;
- (void)callbackCompletionHandlerFail;
- (void)clearRetainSelf;
- (void)getA8KeyWithUrl:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

