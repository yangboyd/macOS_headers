//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FxShape : NSObject
{
    struct FxShapePriv *_priv;
}

+ (id)shapeWithRect:(struct CGRect)arg1;
+ (id)infiniteShape;
- (id)intersectWithShape:(id)arg1;
- (BOOL)isInfinite;
- (struct CGRect)extent;
- (void)dealloc;
- (id)initWithInfiniteBounds;
- (id)initWithRect:(struct CGRect)arg1;

@end

