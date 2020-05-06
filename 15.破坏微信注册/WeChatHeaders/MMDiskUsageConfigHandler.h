//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMDiskUsageConfig;

@interface MMDiskUsageConfigHandler : NSObject
{
    MMDiskUsageConfig *m_config;
}

@property(retain, nonatomic) MMDiskUsageConfig *m_config; // @synthesize m_config;
- (void).cxx_destruct;
- (_Bool)readUnsignedIntNode:(const char *)arg1 rootNode:(struct XmlReaderNode_t *)arg2 xml:(id)arg3 getValue:(unsigned int *)arg4;
- (void)saveConfigData;
- (void)loadConfigData;
- (void)readMoreConfigFromXml:(id)arg1 configNode:(struct XmlReaderNode_t *)arg2;
- (_Bool)readBasicConfigFromXml:(id)arg1 configNode:(struct XmlReaderNode_t *)arg2;
- (void)ConfigWithXml:(id)arg1;
- (id)init;

@end

