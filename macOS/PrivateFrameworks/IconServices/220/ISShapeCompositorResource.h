//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ISScalableCompositorResource.h"

@class ISColor, NSString;

@interface ISShapeCompositorResource : NSObject <ISScalableCompositorResource>
{
    ISColor *_fillColor;
    ISColor *_lineColor;
    double _lineWidth;
}

+ (double)continuousCornerRadiusForSize:(struct CGSize)arg1;
+ (id)circleShape;
+ (id)continuousRoundedRectShape;
- (void).cxx_destruct;
@property double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain) ISColor *lineColor; // @synthesize lineColor=_lineColor;
@property(retain) ISColor *fillColor; // @synthesize fillColor=_fillColor;
- (id)imageForSize:(struct CGSize)arg1 scale:(double)arg2;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

