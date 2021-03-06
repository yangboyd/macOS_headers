//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLTexture;

@interface TransitionQueue : NSObject
{
    id <MTLTexture> _source;
    id <MTLTexture> _destination;
    id <MTLTexture> _next;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <MTLTexture> next; // @synthesize next=_next;
@property(retain, nonatomic) id <MTLTexture> destination; // @synthesize destination=_destination;
@property(retain, nonatomic) id <MTLTexture> source; // @synthesize source=_source;
- (id)fetchDestination;
- (id)fetchSource;
- (int)fetchState;
- (BOOL)requiresTransition;
- (void)shift;
- (void)add:(id)arg1;
- (id)tail;

@end

