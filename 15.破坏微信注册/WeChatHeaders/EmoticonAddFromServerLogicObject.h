//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EmoticonServerNotifyTask.h"

@class NSArray;
@protocol EmoticonAddFromServerLogicObjectDelegate;

@interface EmoticonAddFromServerLogicObject : EmoticonServerNotifyTask
{
    NSArray *_m_addMd5Array;
    id <EmoticonAddFromServerLogicObjectDelegate> _m_delegate;
}

@property(nonatomic) __weak id <EmoticonAddFromServerLogicObjectDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) NSArray *m_addMd5Array; // @synthesize m_addMd5Array=_m_addMd5Array;
- (void).cxx_destruct;
- (_Bool)resumeLogic;
- (id)initWithDelegate:(id)arg1 withMd5ObjectArray:(id)arg2;

@end

