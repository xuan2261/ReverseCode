//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDate, NSString, WCPayBalanceMenuInfo;

@interface WCPayBalanceInfo : NSObject <NSCoding>
{
    unsigned long long m_uiTotalBalance;
    unsigned long long m_uiAvailableBalance;
    unsigned long long m_uiFrozenBalance;
    unsigned long long m_uiFetchBalance;
    NSDate *m_ndFetchArriveTime;
    NSString *m_nsFetchArriveTimeWording;
    NSString *m_nsBankType;
    NSString *m_nsBindSerial;
    NSString *m_nsForbidWord;
    NSString *m_nsBalanceTelPhone;
    NSString *m_nsBalanceListUrl;
    _Bool m_bSupportOfflinePay;
    NSString *m_nsAvailFetchWording;
    NSString *m_nsMaxFetchWording;
    unsigned long long m_uiBalanceVersion;
    unsigned long long m_uiBalanceExpiredDate;
    NSString *_m_forbid_title;
    NSString *_m_forbid_url;
    NSString *_m_balanceShowWording;
    WCPayBalanceMenuInfo *_balance_menu_info;
    NSString *_m_balanceLogoUrl;
}

@property(retain, nonatomic) NSString *m_balanceLogoUrl; // @synthesize m_balanceLogoUrl=_m_balanceLogoUrl;
@property(retain, nonatomic) WCPayBalanceMenuInfo *balance_menu_info; // @synthesize balance_menu_info=_balance_menu_info;
@property(retain, nonatomic) NSString *m_balanceShowWording; // @synthesize m_balanceShowWording=_m_balanceShowWording;
@property(retain, nonatomic) NSString *m_forbid_url; // @synthesize m_forbid_url=_m_forbid_url;
@property(retain, nonatomic) NSString *m_forbid_title; // @synthesize m_forbid_title=_m_forbid_title;
@property(retain, nonatomic) NSString *m_nsFetchArriveTimeWording; // @synthesize m_nsFetchArriveTimeWording;
@property(nonatomic) unsigned long long m_uiBalanceExpiredDate; // @synthesize m_uiBalanceExpiredDate;
@property(nonatomic) unsigned long long m_uiBalanceVersion; // @synthesize m_uiBalanceVersion;
@property(retain, nonatomic) NSString *m_nsMaxFetchWording; // @synthesize m_nsMaxFetchWording;
@property(retain, nonatomic) NSString *m_nsAvailFetchWording; // @synthesize m_nsAvailFetchWording;
@property(nonatomic) _Bool m_bSupportOfflinePay; // @synthesize m_bSupportOfflinePay;
@property(retain, nonatomic) NSString *m_nsBalanceListUrl; // @synthesize m_nsBalanceListUrl;
@property(retain, nonatomic) NSString *m_nsBalanceTelPhone; // @synthesize m_nsBalanceTelPhone;
@property(retain, nonatomic) NSString *m_nsForbidWord; // @synthesize m_nsForbidWord;
@property(retain, nonatomic) NSString *m_nsBindSerial; // @synthesize m_nsBindSerial;
@property(retain, nonatomic) NSString *m_nsBankType; // @synthesize m_nsBankType;
@property(retain, nonatomic) NSDate *m_ndFetchArriveTime; // @synthesize m_ndFetchArriveTime;
@property(nonatomic) unsigned long long m_uiTotalBalance; // @synthesize m_uiTotalBalance;
@property(nonatomic) unsigned long long m_uiFrozenBalance; // @synthesize m_uiFrozenBalance;
@property(nonatomic) unsigned long long m_uiFetchBalance; // @synthesize m_uiFetchBalance;
@property(nonatomic) unsigned long long m_uiAvailableBalance; // @synthesize m_uiAvailableBalance;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

