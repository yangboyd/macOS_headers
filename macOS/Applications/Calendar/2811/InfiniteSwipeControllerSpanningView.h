//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSView;
@protocol NSCopying;

@interface InfiniteSwipeControllerSpanningView : NSObject
{
    BOOL _hasValidIndices;
    NSView *_view;
    id <NSCopying> _startObject;
    id <NSCopying> _endObject;
    unsigned long long _startIndex;
    unsigned long long _endIndex;
    double _startInset;
    double _endInset;
    double _position;
    double _size;
}

- (void).cxx_destruct;
@property double size; // @synthesize size=_size;
@property double position; // @synthesize position=_position;
@property double endInset; // @synthesize endInset=_endInset;
@property double startInset; // @synthesize startInset=_startInset;
@property BOOL hasValidIndices; // @synthesize hasValidIndices=_hasValidIndices;
@property unsigned long long endIndex; // @synthesize endIndex=_endIndex;
@property unsigned long long startIndex; // @synthesize startIndex=_startIndex;
@property(retain) id <NSCopying> endObject; // @synthesize endObject=_endObject;
@property(retain) id <NSCopying> startObject; // @synthesize startObject=_startObject;
@property(retain) NSView *view; // @synthesize view=_view;

@end

