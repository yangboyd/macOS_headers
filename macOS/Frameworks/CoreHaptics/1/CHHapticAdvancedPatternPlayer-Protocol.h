//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreHaptics/CHHapticPatternPlayer-Protocol.h>

@protocol CHHapticAdvancedPatternPlayer <CHHapticPatternPlayer>
@property(copy) CDUnknownBlockType completionHandler;
@property BOOL isMuted;
@property float playbackRate;
@property double loopEnd;
@property BOOL loopEnabled;
- (BOOL)seekToOffset:(double)arg1 error:(id *)arg2;
- (BOOL)resumeAtTime:(double)arg1 error:(id *)arg2;
- (BOOL)pauseAtTime:(double)arg1 error:(id *)arg2;
- (BOOL)prepareAndReturnError:(id *)arg1;
@end

