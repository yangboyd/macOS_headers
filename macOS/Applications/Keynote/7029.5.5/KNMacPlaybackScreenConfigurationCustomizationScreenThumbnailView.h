//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "CALayerDelegate-Protocol.h"

@class CALayer, CATextLayer, KNMacPresenterDisplayConfiguration, NSString;

@interface KNMacPlaybackScreenConfigurationCustomizationScreenThumbnailView : NSView <CALayerDelegate>
{
    KNMacPresenterDisplayConfiguration *_presenterDisplayConfiguration;
    BOOL _isPrimaryPresenterDisplay;
    CALayer *_slideshowLayer;
    CALayer *_currentSlideLayer;
    CALayer *_nextSlideLayer;
    CALayer *_clippedPresenterNotesLayer;
    CALayer *_fullPresenterNotesLayer;
    CALayer *_toolbarLayer;
    CALayer *_toolbarClockLayer;
    CALayer *_toolbarTimerLayer;
    CALayer *_customizedMetricsProxyLayer;
    CATextLayer *_contentClockLayer;
    CATextLayer *_contentTimerLayer;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isPrimaryPresenterDisplay) BOOL primaryPresenterDisplay; // @synthesize primaryPresenterDisplay=_isPrimaryPresenterDisplay;
@property(copy, nonatomic) KNMacPresenterDisplayConfiguration *presenterDisplayConfiguration; // @synthesize presenterDisplayConfiguration=_presenterDisplayConfiguration;
- (id)p_newContentClockTimerLayerWithTextColor:(id)arg1 glowColor:(id)arg2;
- (id)p_newLabelLayerWithTextColor:(id)arg1 fontSize:(double)arg2;
- (id)p_newLargeLabelLayerWithTextColor:(id)arg1;
- (id)p_newLabelLayerWithTextColor:(id)arg1;
- (void)p_layoutLabelInContainerLayer:(id)arg1;
- (double)p_preferredLabelLayerHeightForLabel:(id)arg1;
- (BOOL)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3;
- (void)layoutSublayersOfLayer:(id)arg1;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)viewDidMoveToWindow;
- (void)p_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

