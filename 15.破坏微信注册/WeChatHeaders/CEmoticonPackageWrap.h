//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface CEmoticonPackageWrap : NSObject <WCTTableCoding>
{
    NSString *m_packageId;
    NSString *m_packageName;
    unsigned int m_payStatus;
    unsigned int m_downloadStatus;
    unsigned int m_installTime;
    unsigned int m_removeTime;
    NSString *m_iconUrl;
    NSString *m_panelUrl;
    unsigned int ConIntRes1;
    unsigned int ConIntRes2;
    unsigned int ConIntRes3;
    NSString *ConStrRes1;
    NSString *ConStrRes2;
    NSString *ConStrRes3;
}

+ (id)packageItemFromSummary:(id)arg1;
+ (void)__wcdb_CEmoticonPackageWrap_primary_22:(struct WCTBinding *)arg1;
+ (void)__wcdb_CEmoticonPackageWrap_not_null_21:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)ConStrRes3;
+ (void)__wcdb_CEmoticonPackageWrap_synthesize_20:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)ConStrRes2;
+ (void)__wcdb_CEmoticonPackageWrap_synthesize_19:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)ConStrRes1;
+ (void)__wcdb_CEmoticonPackageWrap_synthesize_18:(struct WCTBinding *)arg1;
+ (void)__wcdb_CEmoticonPackageWrap_default_17:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)ConIntRes3;
+ (void)__wcdb_CEmoticonPackageWrap_synthesize_16:(struct WCTBinding *)arg1;
+ (void)__wcdb_CEmoticonPackageWrap_default_15:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)ConIntRes2;
+ (void)__wcdb_CEmoticonPackageWrap_synthesize_14:(struct WCTBinding *)arg1;
+ (void)__wcdb_CEmoticonPackageWrap_default_13:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)ConIntRes1;
+ (void)__wcdb_CEmoticonPackageWrap_synthesize_12:(struct WCTBinding *)arg1;
+ (void)__wcdb_CEmoticonPackageWrap_default_11:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_removeTime;
+ (void)__wcdb_CEmoticonPackageWrap_synthesize_10:(struct WCTBinding *)arg1;
+ (void)__wcdb_CEmoticonPackageWrap_default_9:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_installTime;
+ (void)__wcdb_CEmoticonPackageWrap_synthesize_8:(struct WCTBinding *)arg1;
+ (void)__wcdb_CEmoticonPackageWrap_default_7:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_downloadStatus;
+ (void)__wcdb_CEmoticonPackageWrap_synthesize_6:(struct WCTBinding *)arg1;
+ (void)__wcdb_CEmoticonPackageWrap_default_5:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_payStatus;
+ (void)__wcdb_CEmoticonPackageWrap_synthesize_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_panelUrl;
+ (void)__wcdb_CEmoticonPackageWrap_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_iconUrl;
+ (void)__wcdb_CEmoticonPackageWrap_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_packageName;
+ (void)__wcdb_CEmoticonPackageWrap_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_packageId;
+ (void)__wcdb_CEmoticonPackageWrap_synthesize_0:(struct WCTBinding *)arg1;
+ (CDUnknownBlockType)columnNamed;
+ (const struct All *)allResults;
+ (const struct WCTPropertyList *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
@property(retain, nonatomic) NSString *ConStrRes3; // @synthesize ConStrRes3;
@property(retain, nonatomic) NSString *ConStrRes2; // @synthesize ConStrRes2;
@property(retain, nonatomic) NSString *ConStrRes1; // @synthesize ConStrRes1;
@property(nonatomic) unsigned int ConIntRes3; // @synthesize ConIntRes3;
@property(nonatomic) unsigned int ConIntRes2; // @synthesize ConIntRes2;
@property(nonatomic) unsigned int ConIntRes1; // @synthesize ConIntRes1;
@property(nonatomic) unsigned int m_removeTime; // @synthesize m_removeTime;
@property(nonatomic) unsigned int m_installTime; // @synthesize m_installTime;
@property(nonatomic) unsigned int m_downloadStatus; // @synthesize m_downloadStatus;
@property(nonatomic) unsigned int m_payStatus; // @synthesize m_payStatus;
@property(retain, nonatomic) NSString *m_panelUrl; // @synthesize m_panelUrl;
@property(retain, nonatomic) NSString *m_iconUrl; // @synthesize m_iconUrl;
@property(retain, nonatomic) NSString *m_packageName; // @synthesize m_packageName;
@property(retain, nonatomic) NSString *m_packageId; // @synthesize m_packageId;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (_Bool)isTusiji;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

