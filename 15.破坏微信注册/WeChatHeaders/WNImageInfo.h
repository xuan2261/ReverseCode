//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WNImageInfo : NSObject
{
    double width;
    double height;
    NSString *bigImagePath;
    NSString *thumbImagePath;
}

@property(retain, nonatomic) NSString *thumbImagePath; // @synthesize thumbImagePath;
@property(retain, nonatomic) NSString *bigImagePath; // @synthesize bigImagePath;
@property(nonatomic) double height; // @synthesize height;
@property(nonatomic) double width; // @synthesize width;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

