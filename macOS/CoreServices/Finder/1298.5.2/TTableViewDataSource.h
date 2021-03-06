//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSArrayController.h>

#import "NSTableViewDataSource-Protocol.h"

@class NSString, TTableView;

@interface TTableViewDataSource : NSArrayController <NSTableViewDataSource>
{
    struct TNSWeakPtr<TTableView, void> _weakTableView;
    struct vector<TKeyValueBinder, std::__1::allocator<TKeyValueBinder>> _keyValueBinders;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (void)clear;
- (void)replaceObjects:(id)arg1 withObjects:(id)arg2;
- (void)replaceObject:(id)arg1 withObject:(id)arg2;
- (void)unbindFromTableColumn:(id)arg1;
- (void)bindToTableColumn:(id)arg1;
@property(nonatomic) __weak TTableView *tableView; // @dynamic tableView;
- (void)dealloc;
- (void)awakeCommon;
- (void)initCommon;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithContent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

