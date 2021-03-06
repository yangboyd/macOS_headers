//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, NSArray;
@protocol TSDInteractiveCanvasRepContentPile;

@interface TSDInteractiveCanvasRepContentSubviewReuser : NSObject
{
    CALayer *_reusableSubviewLayer;
    id <TSDInteractiveCanvasRepContentPile> _originalRepContentPile;
    NSArray *_repContentPlatformViews;
}

- (void).cxx_destruct;
- (void)removeRepContentPlatformViews;
- (BOOL)canReuseUnmodifiedForRepContentPile:(id)arg1;
- (void)reuseForRepContentLayers:(id)arg1;
@property(readonly, nonatomic) BOOL canReuseForRepContentLayersDuringBackgroundUpdate;
- (id)initWithSubview:(id)arg1 originalRepContentPile:(id)arg2;

@end

