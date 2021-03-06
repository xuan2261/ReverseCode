//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDate, NSString;

@interface WCFPSLogObject : NSObject <NSCopying>
{
    NSString *_scene;
    NSDate *_startTime;
    NSDate *_endTime;
    double _totalFrameTime;
    long long _totalDropFrame;
}

@property(nonatomic) long long totalDropFrame; // @synthesize totalDropFrame=_totalDropFrame;
@property(nonatomic) double totalFrameTime; // @synthesize totalFrameTime=_totalFrameTime;
@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *scene; // @synthesize scene=_scene;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

