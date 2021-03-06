//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SFFeedbackListener-Protocol.h"

@class NSString;
@protocol SFFeedbackListener;

@interface SPSuggestionsFeedbackProxy : NSObject <SFFeedbackListener>
{
    CDUnknownBlockType _resultEngagementHandler;
    id <SFFeedbackListener> _feedbackListener;
}

+ (BOOL)isFeedbackSelector:(SEL)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) id <SFFeedbackListener> feedbackListener; // @synthesize feedbackListener=_feedbackListener;
@property(copy, nonatomic) CDUnknownBlockType resultEngagementHandler; // @synthesize resultEngagementHandler=_resultEngagementHandler;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)didEngageResult:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

