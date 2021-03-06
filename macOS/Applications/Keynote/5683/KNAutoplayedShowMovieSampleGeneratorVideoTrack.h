//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KNMovieSampleGeneratorTrack-Protocol.h"

@class KNAnimatedOffscreenPlaybackController, KNCALayerMovieSampleGeneratorTrack, KNDocumentRoot, KNMovieTimelineMovieSampleGenerator, NSArray, NSError, NSString;
@protocol TSKAccessControllerReadTicket;

@interface KNAutoplayedShowMovieSampleGeneratorVideoTrack : NSObject <KNMovieSampleGeneratorTrack>
{
    KNDocumentRoot *_documentRoot;
    double _buildDelay;
    double _transitionDelay;
    NSArray *_slideNodes;
    double _duration;
    CDStruct_1b6d18a9 _videoFrameDuration;
    id <TSKAccessControllerReadTicket> _readTicket;
    KNAnimatedOffscreenPlaybackController *_offscreenPlaybackController;
    KNCALayerMovieSampleGeneratorTrack *_layerMovieSampleGeneratorTrack;
    KNMovieTimelineMovieSampleGenerator *_movieTimelineMovieSampleGenerator;
    CDStruct_1b6d18a9 _lastSampleBufferTime;
    double _nextEventStartTime;
    BOOL _isPlayingCurrentEvent;
    BOOL _isAtEnd;
    NSError *_error;
    struct CGSize _mediaSize;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) struct CGSize mediaSize; // @synthesize mediaSize=_mediaSize;
- (void).cxx_destruct;
- (double)p_delayBeforeNextEvent;
- (void)cancel;
- (void)willCancel;
- (struct opaqueCMSampleBuffer *)copyNextSampleBuffer;
@property(readonly, nonatomic) NSString *mediaType;
- (id)initWithDocumentRoot:(id)arg1 size:(struct CGSize)arg2 buildDelay:(double)arg3 transitionDelay:(double)arg4 slideNodes:(id)arg5 duration:(double)arg6 movieTimelineMovieSampleGenerator:(id)arg7 videoFrameDuration:(CDStruct_1b6d18a9)arg8 readTicket:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

