//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TSAMacHighlightView;

@protocol TSAMacHighlightViewDelegate <NSObject>
- (void)highlightViewDelete:(TSAMacHighlightView *)arg1;
- (void)highlightViewConvertToComment:(TSAMacHighlightView *)arg1;
- (void)highlightViewPreviousAnnotation:(TSAMacHighlightView *)arg1;
- (void)highlightViewNextAnnotation:(TSAMacHighlightView *)arg1;
- (void)highlightView:(TSAMacHighlightView *)arg1 didUpdateHeight:(double)arg2;
@end

