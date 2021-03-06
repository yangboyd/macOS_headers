//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IDSMessageContext, NSArray, NSDictionary, NSString, SSInputEvent;

@protocol SSSessionViewDelegate <NSObject>

@optional
- (void)scalingSet:(BOOL)arg1;
- (void)controlModeSet:(long long)arg1;
- (BOOL)isFullScreenToolbarAutohidingEnabled;
- (NSString *)humanReadableComputerName;
- (BOOL)ssSessionIsRedwood;
- (BOOL)handleSSInputEvent:(SSInputEvent *)arg1;
- (void)systemInfoRequestCompleted:(NSDictionary *)arg1;
- (void)sessionClosed;
- (void)sessionWillClose;
- (void)IDSServiceMessageReceived:(NSDictionary *)arg1 context:(IDSMessageContext *)arg2;
- (void)sessionRequestToAddTextToPasteboard:(int)arg1;
- (void)sessionRequestToOpenURL:(int)arg1;
- (void)sessionRequestToResumeResult:(int)arg1;
- (void)sessionResumed;
- (void)sessionPaused;
- (void)IDSSessionWasAcceptedWithInfo:(NSDictionary *)arg1;
- (void)IDSSessionWasDeclinedWithInfo:(NSDictionary *)arg1;
- (void)IDSSessionWasCanceledWithInfo:(NSDictionary *)arg1;
- (void)IDSSessionDidEndWithInfo:(NSDictionary *)arg1;
- (void)authenticationDidFail:(int)arg1;
- (void)connectDidFail:(int)arg1;
- (void)sessionIsReady;
- (void)sessionDidDisconnect;
- (void)sessionDidFinishConnecting;
- (void)sessionDidReceiveEntireScreen;
- (void)userDidDismissUnencryptedLegacyVNCWarning:(BOOL)arg1 suppressFutureWarnings:(BOOL)arg2;
- (BOOL)shouldConnectWithAddresses:(NSArray *)arg1;
- (void)usingVirtualDisplay:(BOOL)arg1;
- (void)sessionSelectionResult:(int)arg1;
@end

