//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MMKText.h"

@class NSMutableArray, NSString;

@interface KindaText : NSObject <MMKText>
{
    NSMutableArray *_m_textArray;
}

@property(retain, nonatomic) NSMutableArray *m_textArray; // @synthesize m_textArray=_m_textArray;
- (void).cxx_destruct;
- (void)appendLink:(id)arg1;
- (void)appendText:(id)arg1;
- (id)textArray;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

