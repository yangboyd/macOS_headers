//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IXAppInstallCoordinator, NSError, NSURL;

@protocol IXAppInstallCoordinatorObserver <NSObject>

@optional
- (void)coordinator:(IXAppInstallCoordinator *)arg1 configuredPromisePromiseDidBeginFulfillment:(unsigned long long)arg2;
- (void)promiseDidBeginFulfillmentWithIdentifier:(unsigned long long)arg1;
- (void)coordinator:(IXAppInstallCoordinator *)arg1 canceledWithReason:(NSError *)arg2;
- (void)coordinator:(IXAppInstallCoordinator *)arg1 canceledWithReason:(NSError *)arg2 client:(unsigned long long)arg3;
- (void)coordinatorDidCompleteSuccessfully:(IXAppInstallCoordinator *)arg1 forAppAtURL:(NSURL *)arg2;
- (void)coordinatorDidCompleteSuccessfully:(IXAppInstallCoordinator *)arg1;
- (void)coordinator:(IXAppInstallCoordinator *)arg1 didUpdateProgress:(double)arg2 forPhase:(unsigned long long)arg3 overallProgress:(double)arg4;
- (void)coordinatorDidInstallPlaceholder:(IXAppInstallCoordinator *)arg1 atURL:(NSURL *)arg2;
- (void)coordinatorDidInstallPlaceholder:(IXAppInstallCoordinator *)arg1;
- (void)coordinatorShouldBeginRestoringUserData:(IXAppInstallCoordinator *)arg1;
- (void)coordinator:(IXAppInstallCoordinator *)arg1 configuredPromiseDidBeginFulfillment:(unsigned long long)arg2;
- (void)coordinatorShouldPause:(IXAppInstallCoordinator *)arg1;
- (void)coordinatorShouldResume:(IXAppInstallCoordinator *)arg1;
- (void)coordinatorShouldPrioritize:(IXAppInstallCoordinator *)arg1;
- (void)coordinatorDidRegisterForObservation:(IXAppInstallCoordinator *)arg1;
@end

