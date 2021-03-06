//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoPlaybackAttemptTracking-Protocol.h>

@class NSString;
@protocol SVPlayerTimeControlStatusObserving, SVVideoLoadingStateObserving, SVVideoPlaybackPolicyObserving, SVVisibilityMonitoring;

@interface SVVideoPlaybackAttemptTracker : NSObject <SVVideoPlaybackAttemptTracking>
{
    BOOL _attemptedPlayback;
    CDUnknownBlockType _playbackAttemptBlock;
    id <SVVideoLoadingStateObserving> _loadingStateObserver;
    id <SVPlayerTimeControlStatusObserving> _timeControlStatusObserver;
    id <SVVideoPlaybackPolicyObserving> _playbackPolicyObserver;
    id <SVVisibilityMonitoring> _visibilityMonitor;
}

@property(readonly, nonatomic) id <SVVisibilityMonitoring> visibilityMonitor; // @synthesize visibilityMonitor=_visibilityMonitor;
@property(readonly, nonatomic) id <SVVideoPlaybackPolicyObserving> playbackPolicyObserver; // @synthesize playbackPolicyObserver=_playbackPolicyObserver;
@property(readonly, nonatomic) id <SVPlayerTimeControlStatusObserving> timeControlStatusObserver; // @synthesize timeControlStatusObserver=_timeControlStatusObserver;
@property(readonly, nonatomic) id <SVVideoLoadingStateObserving> loadingStateObserver; // @synthesize loadingStateObserver=_loadingStateObserver;
@property(copy, nonatomic, setter=onPlaybackAttempt:) CDUnknownBlockType playbackAttemptBlock; // @synthesize playbackAttemptBlock=_playbackAttemptBlock;
@property(nonatomic, getter=hasAttemptedPlayback) BOOL attemptedPlayback; // @synthesize attemptedPlayback=_attemptedPlayback;
- (void).cxx_destruct;
- (id)initWithLoadingStateObserver:(id)arg1 timeControlStatusObserver:(id)arg2 playbackPolicyObserver:(id)arg3 visibilityMonitor:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

