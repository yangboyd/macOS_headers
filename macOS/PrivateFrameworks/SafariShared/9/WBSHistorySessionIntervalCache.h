//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCalendar, NSObject<OS_dispatch_queue>;

@interface WBSHistorySessionIntervalCache : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSCalendar *_calendar;
    struct Vector<double, 0, WTF::CrashOnOverflow, 16> _intervalCache;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_getSessionIntervalForTime:(double)arg1 beginningOfDay:(double *)arg2 beginningOfNextDay:(double *)arg3;
- (double)_beginningOfSessionContainingTime:(double)arg1;
- (double)beginningOfSessionContainingTime:(double)arg1;
- (id)initWithCalendar:(id)arg1;
- (id)init;

@end

