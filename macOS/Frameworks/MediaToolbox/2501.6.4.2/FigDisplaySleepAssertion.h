//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_source;

@interface FigDisplaySleepAssertion : NSObject
{
    NSObject<OS_dispatch_source> *_timer;
    NSString *_reason;
    unsigned int _displaySleepPreventionIOPMAssertionID;
    long long _lastIdleTimerResetTime;
}

- (unsigned char)resetIdleTimer;
- (void)dealloc;
- (id)initWithReason:(id)arg1 queue:(id)arg2 expirationHandler:(CDUnknownBlockType)arg3;

@end

