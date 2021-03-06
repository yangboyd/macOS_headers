//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXViewportChangeListener-Protocol.h>

@class NSMutableSet, NSString, SXViewport;

@interface SXComponentExposureMonitor : NSObject <SXViewportChangeListener>
{
    SXViewport *_viewport;
    NSMutableSet *_trackingComponents;
}

@property(retain, nonatomic) NSMutableSet *trackingComponents; // @synthesize trackingComponents=_trackingComponents;
@property(readonly, nonatomic) SXViewport *viewport; // @synthesize viewport=_viewport;
- (void).cxx_destruct;
- (void)trackExposureForTracking:(id)arg1;
- (void)performMonitoring;
- (void)viewport:(id)arg1 documentSizeDidChangeFromSize:(struct CGSize)arg2;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(struct CGRect)arg2;
- (void)onExposureOf:(id)arg1 exposureStateChangeBlock:(CDUnknownBlockType)arg2;
- (id)initWithViewport:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

