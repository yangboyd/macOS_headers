//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <EmailDaemon/NSObject-Protocol.h>

@class NSArray;

@protocol EMSearchableIndexInterface <NSObject>
- (void)reindexAllSearchableItemsWithAcknowledgementHandler:(void (^)(void))arg1;
- (void)reindexSearchableItemsWithIdentifiers:(NSArray *)arg1 acknowledgementHandler:(void (^)(void))arg2;
@end

