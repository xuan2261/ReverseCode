//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCTableViewCellManager.h"

@class WCTableViewCellNormalConfig;

@interface WCTableViewNormalCellManager : WCTableViewCellManager
{
    double titleRight;
}

- (void)switchDidChanged:(id)arg1;
- (void)configureCell:(id)arg1 withRightConfig:(id)arg2;
- (void)configureCell:(id)arg1 withLeftConfig:(id)arg2;
- (double)cellHeightFor:(id)arg1;
- (void)configureCell:(id)arg1;
- (id)init;

// Remaining properties
@property(retain, nonatomic) WCTableViewCellNormalConfig *cellConfig; // @dynamic cellConfig;

@end

