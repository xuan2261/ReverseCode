//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface RTECSSStyleSheet : NSObject
{
    NSMutableDictionary *m_defaultCSSDict;
}

+ (id)valueOfStyle:(id)arg1 withKey:(id)arg2;
- (void).cxx_destruct;
- (void)_setupHrTagCss;
- (void)_setupFontTraitsTagCSS;
- (void)_setupLITagCSS;
- (void)_setupULTagCSS;
- (void)_setupOLTagCSS;
- (void)_setupImgCSS;
- (void)_setupDivTagCSS;
- (void)_setupParagraphTagCSS;
- (void)_setupBodyTagCSS;
- (void)_setupHtmlTagCSS;
- (void)_setupDefaultCSSDict;
- (id)styleDictionaryForElement:(id)arg1;
- (id)init;

@end

