//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSCollectionView;

@protocol NSCollectionViewPrefetching <NSObject>
- (void)collectionView:(NSCollectionView *)arg1 prefetchItemsAtIndexPaths:(NSArray *)arg2;

@optional
- (void)collectionView:(NSCollectionView *)arg1 cancelPrefetchingForItemsAtIndexPaths:(NSArray *)arg2;
@end

