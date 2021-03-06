//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSAnimation.h>

@class NVBookmarksAnimationController;

__attribute__((visibility("hidden")))
@interface NVBookmarksHopAnimation : NSAnimation
{
    NVBookmarksAnimationController *_animationController;
    double _finalHeight;
    double _originalHeight;
    struct CGPoint _startPoint;
    struct CGPoint _endPoint;
}

@property(nonatomic) struct CGPoint endPoint; // @synthesize endPoint=_endPoint;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(nonatomic) double originalHeight; // @synthesize originalHeight=_originalHeight;
@property(nonatomic) double finalHeight; // @synthesize finalHeight=_finalHeight;
@property(nonatomic) __weak NVBookmarksAnimationController *animationController; // @synthesize animationController=_animationController;
- (void).cxx_destruct;
- (void)setCurrentProgress:(float)arg1;
- (struct CGPoint)centerPointForProgress:(double)arg1;

@end

