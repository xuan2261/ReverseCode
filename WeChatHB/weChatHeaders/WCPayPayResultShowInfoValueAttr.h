//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCPayPayResultShowInfoValueAttr : NSObject
{
    unsigned long long _link_type;
    NSString *_link_weapp;
    NSString *_link_addr;
    NSString *_link_url;
    unsigned long long _text_attr;
}

+ (id)genFromXml:(struct XmlReaderNode_t *)arg1;
+ (id)GenFromDictionary:(id)arg1;
@property(nonatomic) unsigned long long text_attr; // @synthesize text_attr=_text_attr;
@property(retain, nonatomic) NSString *link_url; // @synthesize link_url=_link_url;
@property(retain, nonatomic) NSString *link_addr; // @synthesize link_addr=_link_addr;
@property(retain, nonatomic) NSString *link_weapp; // @synthesize link_weapp=_link_weapp;
@property(nonatomic) unsigned long long link_type; // @synthesize link_type=_link_type;
- (void).cxx_destruct;
- (id)readChildText:(const char *)arg1 inNode:(struct XmlReaderNode_t *)arg2;
- (id)initWithDic:(id)arg1;

@end
