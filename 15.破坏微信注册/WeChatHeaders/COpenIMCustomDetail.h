//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface COpenIMCustomDetail : NSObject
{
    NSString *_icon;
    NSString *_desc;
    long long _descType;
    long long _action;
    NSDictionary *_action_param;
}

@property(retain, nonatomic) NSDictionary *action_param; // @synthesize action_param=_action_param;
@property(nonatomic) long long action; // @synthesize action=_action;
@property(nonatomic) long long descType; // @synthesize descType=_descType;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (id)getDesc:(id)arg1;

@end

