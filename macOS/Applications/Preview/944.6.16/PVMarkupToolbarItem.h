//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSToolbarItem.h>

@class AKController, NSDictionary;

@interface PVMarkupToolbarItem : NSToolbarItem
{
    NSDictionary *_properties;
    AKController *_akController;
}

@property __weak AKController *akController; // @synthesize akController=_akController;
@property(retain) NSDictionary *properties; // @synthesize properties=_properties;
- (void).cxx_destruct;
- (id)stringValue;
- (void)validate;
- (void)configureWithAKController:(id)arg1;
- (id)initWithIdentifier:(id)arg1 tag:(long long)arg2 itemProperties:(id)arg3;

@end

