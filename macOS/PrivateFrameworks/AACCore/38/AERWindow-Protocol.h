//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol AERWindow <NSObject>
@property(readonly, nonatomic, getter=isVisible) BOOL visible;
@property(readonly, nonatomic) struct CGRect frame;
@property(readonly, nonatomic) long long windowNumber;
- (int)excludeRegionFromContentCapture:(struct CGRect)arg1;
- (void)rebindToSpaceWithScreenGeometry;
- (int)refresh;
- (void)close;
- (void)show;
@end

