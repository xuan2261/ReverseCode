//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "AddAdminLogicDelegate.h"
#import "ChatRoomAdminMgrLogicDelegate.h"
#import "ChatRoomMemberGridViewDelegate.h"
#import "DelAdminLogicDelegate.h"
#import "IContactMgrExt.h"
#import "IGroupMgrExt.h"
#import "MMTableViewInfoDelegate.h"
#import "contactInfoDelegate.h"

@class AddAdminLogic, CContact, ChatRoomAdminMgrLogic, DelAdminLogic, MMTableViewInfo, MMUILabel, NSString, UIImageView, UIView;

@interface ChatRoomAdminViewController : MMUIViewController <MMTableViewInfoDelegate, ChatRoomAdminMgrLogicDelegate, IContactMgrExt, ChatRoomMemberGridViewDelegate, DelAdminLogicDelegate, AddAdminLogicDelegate, contactInfoDelegate, IGroupMgrExt>
{
    UIView *m_managerProfileView;
    UIImageView *m_managerHeadImageView;
    MMUILabel *m_managerDescLabel;
    MMUILabel *m_managerPrivilegeDescLabel;
    MMTableViewInfo *m_tableViewInfo;
    unsigned long long m_nCellCnt;
    unsigned long long m_nCellCol;
    _Bool m_bDeleteStatus;
    ChatRoomAdminMgrLogic *m_adminMgrLogic;
    AddAdminLogic *m_addAdminLogic;
    DelAdminLogic *m_delAdminLogic;
    CContact *_m_chatRoomContact;
}

@property(retain, nonatomic) CContact *m_chatRoomContact; // @synthesize m_chatRoomContact=_m_chatRoomContact;
- (void).cxx_destruct;
- (void)onDelAdminLogicStop:(_Bool)arg1;
- (void)onAddAdminLogicStop:(_Bool)arg1;
- (void)setShowRemoveMember;
- (void)addMember;
- (void)openContactInfo:(id)arg1;
- (void)onCancel;
- (id)getArrMemberList;
- (void)makeWhiteCell:(id)arg1 CellInfo:(struct WCTableViewNormalCellManager *)arg2;
- (int)getExtraOpCount;
- (void)makeMemListCell:(id)arg1 CellInfo:(struct WCTableViewNormalCellManager *)arg2;
- (void)makeMemListSection:(struct WCTableViewSectionManager *)arg1;
- (void)makeMangerProfileCell:(id)arg1 CellInfo:(struct WCTableViewNormalCellManager *)arg2;
- (void)makeMangerProfileSection:(struct WCTableViewSectionManager *)arg1;
- (void)reloadTableData;
- (void)setUpTable;
- (void)setUpPrivilegeDescLabel;
- (void)setUpChatRoomAdminDescLable;
- (void)setUpHeaderView;
- (void)setUpProfileView;
- (void)setUpNavigation;
- (void)initProperty;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
