//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface WCStoryUnReadComment : NSObject <WCTTableCoding>
{
    unsigned int _createTime;
    unsigned int _commentType;
    NSString *_tid;
    NSString *_commentId;
}

+ (void)__wcdb_index_9:(struct WCTBinding *)arg1;
+ (void)__wcdb_index_8:(struct WCTBinding *)arg1;
+ (void)__wcdb_index_7:(struct WCTBinding *)arg1;
+ (void)__wcdb_table_constraint_6:(struct WCTBinding *)arg1;
+ (void)__wcdb_table_constraint_5:(struct WCTBinding *)arg1;
+ (void)__wcdb_table_constraint_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)commentType;
+ (const struct WCTProperty *)__wcdb_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)createTime;
+ (const struct WCTProperty *)__wcdb_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)commentId;
+ (const struct WCTProperty *)__wcdb_synthesize_0:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)tid;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
+ (id)unreadCommentWithStoryComment:(id)arg1;
@property(nonatomic) unsigned int commentType; // @synthesize commentType=_commentType;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
- (void).cxx_destruct;
- (id)initWithStoryComment:(id)arg1;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end
