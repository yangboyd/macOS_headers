//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class EntryPointsCoordinator, ErrorAction, RichMapsActivity;

@protocol EntryPointsCoordinatorDelegate
- (BOOL)isCarPlayOnlyContext;
- (BOOL)isNavigationTurnByTurnOrStepping;
- (void)entryPointsCoordinator:(EntryPointsCoordinator *)arg1 didMergedRichMapsActivity:(RichMapsActivity *)arg2;
- (void)entryPointsCoordinator:(EntryPointsCoordinator *)arg1 performErrorAction:(ErrorAction *)arg2;
@end

