//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class KNFlattenedSlideTreeViewModel, NSIndexSet;

@protocol KNFlattenedSlideTreeViewModelDelegate <NSObject>
- (void)viewModel:(KNFlattenedSlideTreeViewModel *)arg1 didReplaceSlidePointersAtIndexes:(NSIndexSet *)arg2;
- (void)viewModel:(KNFlattenedSlideTreeViewModel *)arg1 didMoveSlidesAtIndexes:(NSIndexSet *)arg2 toIndex:(unsigned long long)arg3;
- (void)viewModel:(KNFlattenedSlideTreeViewModel *)arg1 didRemoveSlidesAtIndexes:(NSIndexSet *)arg2;
- (void)viewModel:(KNFlattenedSlideTreeViewModel *)arg1 didInsertSlidesAtIndexes:(NSIndexSet *)arg2;
@end

