//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VEiOSCommonDelegate : NSObject
{
}

+ (void)setCurrentProject:(id)arg1;
+ (id)mainBundle;
+ (void)setFullScreenPlaybackOnExternalDisplay:(BOOL)arg1;
+ (BOOL)fullScreenPlaybackOnExternalDisplay;
+ (BOOL)furtherConstrainVideoScale;
+ (void)setVideoScale:(float)arg1;
+ (float)videoScale;
+ (void)notifyCPVCProjectChanged;
+ (long long)playbackPixelCount;
+ (BOOL)updateProjectAndCachesOnPhotosLibraryChange;
+ (BOOL)forceTeardownDisplayOnProjectChange;
+ (float)duckingAmount;
+ (unsigned long long)exportFrameRateMode;
+ (unsigned long long)playbackFrameRateMode;
+ (BOOL)shouldPlaySlowMoWhenPreviewing;
+ (id)activeCoreProjectViewController;
+ (void)nukeCaches;
+ (id)currentProject;
+ (BOOL)ignoreReadOnly;
+ (BOOL)allowSaving;
+ (void)setDelegateSubclass:(Class)arg1;

@end

