//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@class CLLocation, NSArray, NSString;

@interface LbsLifeData : MMObject
{
    CLLocation *_location;
    NSArray *_lbsLifeList;
    NSArray *_iconUrlList;
    _Bool _continueFlag;
    _Bool _isStartFromFirst;
    NSString *_logoUrl;
    NSString *_searchID;
}

@property(nonatomic) _Bool isStartFromFirst; // @synthesize isStartFromFirst=_isStartFromFirst;
@property(retain, nonatomic) NSString *searchID; // @synthesize searchID=_searchID;
@property(retain, nonatomic) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(retain, nonatomic) NSArray *iconUrlList; // @synthesize iconUrlList=_iconUrlList;
@property(retain, nonatomic) NSArray *lbsLifeList; // @synthesize lbsLifeList=_lbsLifeList;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (void)dealloc;

@end

