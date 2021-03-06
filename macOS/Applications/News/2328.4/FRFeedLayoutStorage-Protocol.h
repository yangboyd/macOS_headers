//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NFLFeedSettings, NSObject, NSSet;
@protocol OS_dispatch_queue;

@protocol FRFeedLayoutStorage <NSObject>
- (void)pruneBatchesNotTouchedForTimeInterval:(double)arg1 callbackQueue:(NSObject<OS_dispatch_queue> *)arg2 completion:(void (^)(void))arg3;
- (void)saveLaidOutRegions:(NSSet *)arg1 forFeedSettings:(NFLFeedSettings *)arg2 callbackQueue:(NSObject<OS_dispatch_queue> *)arg3 completion:(void (^)(void))arg4;
- (void)fetchBatchesForTileInfosWithIDs:(NSSet *)arg1 feedSettings:(NFLFeedSettings *)arg2 completion:(void (^)(NSDictionary *))arg3;
@end

