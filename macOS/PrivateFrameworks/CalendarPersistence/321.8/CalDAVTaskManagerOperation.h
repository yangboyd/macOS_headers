//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CalCalDAVTaskManager, NSError;

@interface CalDAVTaskManagerOperation : NSObject
{
    CalCalDAVTaskManager *_taskManager;
    NSError *_error;
}

@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) CalCalDAVTaskManager *taskManager; // @synthesize taskManager=_taskManager;
- (id)init;
- (void)dealloc;

@end

