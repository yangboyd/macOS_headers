//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KNSlideNodeAccessibility, NSArray;

@protocol KNPlaybackControllerAccessibilityExtras <NSObject>

@optional
- (void)tsaxAnimatedSlideViewWasUpdated;
- (NSArray *)tsaxFilteredVisibleReps;
- (void)tsaxChangedToSlideWithSlideNode:(KNSlideNodeAccessibility *)arg1;
- (void)tsaxChangedBuild;
@end

