//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSArray, _UIFocusGroupMap;

__attribute__((visibility("hidden")))
@interface _UIFocusLinearMovementDebugView : UIView
{
    NSArray *_items;
    _UIFocusGroupMap *_focusGroupMap;
    BOOL _colorCoding;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)_lineSegmentsFromFrames:(id)arg1;
- (id)_itemFramesFromItems:(id)arg1;
- (id)_drawableItems;
- (id)initWithItems:(id)arg1 focusGroupMap:(id)arg2;
- (id)init;

@end

