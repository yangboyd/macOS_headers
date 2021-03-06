//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSSliderCell.h>

@class NSString;
@protocol TSUKeyValueTracking;

@interface TSKMacKeyValueTrackingSliderCell : NSSliderCell
{
    id <TSUKeyValueTracking> _valueBindingTrackingObject;
    NSString *_valueBindingTrackingKeyPath;
    id _eventMonitor;
}

@property(retain, nonatomic) id eventMonitor; // @synthesize eventMonitor=_eventMonitor;
@property(retain, nonatomic) NSString *valueBindingTrackingKeyPath; // @synthesize valueBindingTrackingKeyPath=_valueBindingTrackingKeyPath;
@property(retain, nonatomic) id <TSUKeyValueTracking> valueBindingTrackingObject; // @synthesize valueBindingTrackingObject=_valueBindingTrackingObject;
- (void).cxx_destruct;
- (void)unbind:(id)arg1;
- (void)forceStopTrackingValueBindingIfNeeded;
- (void)p_stopTrackingValueBinding;
- (void)stopTrackingValueBindingIfNeeded;
- (void)p_startTrackingValueBindingInControlView:(id)arg1;
- (void)startTrackingValueBindingInControlViewIfNeeded:(id)arg1;
- (BOOL)p_isTracking;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (void)p_teardownEventMonitor;
- (void)p_setupEventMonitor;
- (void)dealloc;
- (unsigned long long)eventMaskForEventMonitor;

@end

