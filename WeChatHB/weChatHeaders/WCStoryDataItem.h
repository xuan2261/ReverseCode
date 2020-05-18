//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WCTTableCoding.h"

@class NSData, NSString, WCLocationInfo, WCStoryBubbleMutableArray, WCStoryCommentMutableArray, WCStoryMediaItem;

@interface WCStoryDataItem : MMObject <WCTTableCoding>
{
    _Bool _bChatRoomSyc;
    _Bool _isUploading;
    _Bool _isUploadRetrying;
    _Bool _isUploadFail;
    _Bool _hadUnReadComment;
    int _createtime;
    int _uploadErrType;
    NSString *_tid;
    NSString *_username;
    NSString *_nickname;
    NSString *_tmpLocalId;
    NSString *_uploadErrMsg;
    long long _commentCount;
    WCStoryMediaItem *_mediaItem;
    WCStoryCommentMutableArray *_commentList;
    WCStoryBubbleMutableArray *_bubbleList;
    NSString *_reportXml;
    NSData *_localInfoData;
    WCLocationInfo *_locationInfo;
}

+ (void)__wcdb_WCStoryDataItem_index_19:(struct WCTBinding *)arg1;
+ (void)__wcdb_WCStoryDataItem_index_18:(struct WCTBinding *)arg1;
+ (void)__wcdb_WCStoryDataItem_index_17:(struct WCTBinding *)arg1;
+ (void)__wcdb_WCStoryDataItem_primary_16:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)bChatRoomSyc;
+ (void)__wcdb_WCStoryDataItem_synthesize_15:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)reportXml;
+ (void)__wcdb_WCStoryDataItem_synthesize_14:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)mediaItem;
+ (void)__wcdb_WCStoryDataItem_synthesize_13:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)localInfoData;
+ (void)__wcdb_WCStoryDataItem_synthesize_12:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)bubbleList;
+ (void)__wcdb_WCStoryDataItem_synthesize_11:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)commentList;
+ (void)__wcdb_WCStoryDataItem_synthesize_10:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)commentCount;
+ (void)__wcdb_WCStoryDataItem_synthesize_9:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)uploadErrMsg;
+ (void)__wcdb_WCStoryDataItem_synthesize_8:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)isUploadFail;
+ (void)__wcdb_WCStoryDataItem_synthesize_7:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)uploadErrType;
+ (void)__wcdb_WCStoryDataItem_synthesize_6:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)isUploading;
+ (void)__wcdb_WCStoryDataItem_synthesize_5:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)createtime;
+ (void)__wcdb_WCStoryDataItem_synthesize_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)tmpLocalId;
+ (void)__wcdb_WCStoryDataItem_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)nickname;
+ (void)__wcdb_WCStoryDataItem_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)username;
+ (void)__wcdb_WCStoryDataItem_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)tid;
+ (void)__wcdb_WCStoryDataItem_synthesize_0:(struct WCTBinding *)arg1;
+ (CDUnknownBlockType)columnNamed;
+ (const struct All *)allResults;
+ (const struct WCTPropertyList *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
@property(retain, nonatomic) WCLocationInfo *locationInfo; // @synthesize locationInfo=_locationInfo;
@property(retain, nonatomic) NSData *localInfoData; // @synthesize localInfoData=_localInfoData;
@property(retain, nonatomic) NSString *reportXml; // @synthesize reportXml=_reportXml;
@property(retain, nonatomic) WCStoryBubbleMutableArray *bubbleList; // @synthesize bubbleList=_bubbleList;
@property(retain, nonatomic) WCStoryCommentMutableArray *commentList; // @synthesize commentList=_commentList;
@property(retain, nonatomic) WCStoryMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(nonatomic) _Bool hadUnReadComment; // @synthesize hadUnReadComment=_hadUnReadComment;
@property(nonatomic) long long commentCount; // @synthesize commentCount=_commentCount;
@property(retain, nonatomic) NSString *uploadErrMsg; // @synthesize uploadErrMsg=_uploadErrMsg;
@property(nonatomic) int uploadErrType; // @synthesize uploadErrType=_uploadErrType;
@property(nonatomic) _Bool isUploadFail; // @synthesize isUploadFail=_isUploadFail;
@property(nonatomic) _Bool isUploadRetrying; // @synthesize isUploadRetrying=_isUploadRetrying;
@property(nonatomic) _Bool isUploading; // @synthesize isUploading=_isUploading;
@property(nonatomic) int createtime; // @synthesize createtime=_createtime;
@property(nonatomic) _Bool bChatRoomSyc; // @synthesize bChatRoomSyc=_bChatRoomSyc;
@property(retain, nonatomic) NSString *tmpLocalId; // @synthesize tmpLocalId=_tmpLocalId;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
- (void).cxx_destruct;
- (id)description;
- (void)cleanDataItemFileCache;
- (id)getLocationInfo;
- (id)getMediaWraps;
- (long long)compareTimeReverse:(id)arg1;
- (long long)compareTime:(id)arg1;
- (_Bool)isVaild;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end
