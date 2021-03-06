//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KNMovieSampleGenerator-Protocol.h"
#import "KNMovieTimelineMovieSampleGeneratorDelegate-Protocol.h"

@class NSArray;

@interface _TtC7Keynote47KNAnimationPlaybackTimelineMovieSampleGenerator : NSObject <KNMovieSampleGenerator, KNMovieTimelineMovieSampleGeneratorDelegate>
{
    // Error parsing type: , name: canvasDelegate
    // Error parsing type: , name: session
    // Error parsing type: , name: timelineBuilder
    // Error parsing type: , name: videoColorSpace
    // Error parsing type: , name: audioSettingsHint
    // Error parsing type: , name: accessController
    // Error parsing type: , name: tracksLock
    // Error parsing type: , name: signpostID
    // Error parsing type: , name: videoTrack
    // Error parsing type: , name: movieTimelineMovieSampleGenerator
    // Error parsing type: , name: isPrepareCancelled
    // Error parsing type: , name: duration
    // Error parsing type: , name: videoFrameDuration
}

- (void).cxx_destruct;
- (id)init;
- (id)movieTimelineMovieSampleGenerator:(id)arg1 assetForMovieIdentifier:(id)arg2;
- (BOOL)synchronouslyPrepareTracksWithReadTicket:(id)arg1 error:(id *)arg2;
- (void)cancel;
- (void)willCancel;
- (void)tearDown;
@property(nonatomic, readonly) double framesPerSecond;
@property(nonatomic, readonly) CDStruct_1b6d18a9 videoFrameDuration; // @synthesize videoFrameDuration;
@property(nonatomic) double duration; // @synthesize duration;
@property(nonatomic, readonly) NSArray *tracks;
- (id)initWithRecordingTimelineForDocumentRoot:(id)arg1 videoSize:(struct CGSize)arg2 videoFrameDuration:(CDStruct_1b6d18a9)arg3 videoColorSpace:(id)arg4 shouldAllowSlideBackgroundAlpha:(BOOL)arg5 audioSettingsHint:(id)arg6 error:(id *)arg7;
- (id)initWithAutoplayTimelineForDocumentRoot:(id)arg1 slideRange:(struct _NSRange)arg2 buildDelay:(double)arg3 transitionDelay:(double)arg4 shouldLastSlideTransitionToFirstSlide:(BOOL)arg5 videoSize:(struct CGSize)arg6 videoFrameDuration:(CDStruct_1b6d18a9)arg7 videoColorSpace:(id)arg8 shouldAllowSlideBackgroundAlpha:(BOOL)arg9 audioSettingsHint:(id)arg10 error:(id *)arg11;

@end

