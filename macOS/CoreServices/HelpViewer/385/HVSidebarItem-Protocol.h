//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol HVSidebarItem;

@protocol HVSidebarItem <NSObject>
@property(readonly) BOOL isGroup;
@property(readonly) NSString *itemIdentifier;
@property(retain) NSArray<HVSidebarItem> *childItems;
@property(readonly, nonatomic) NSString *name;
@end

