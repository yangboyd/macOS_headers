//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, NSURL, TSKCollaborationUserInfo, TSKDocumentRoot, TSKSharingState, TSUURLTracker;
@protocol NSProgressReporting, OS_dispatch_queue, TSKCollaborationValidator, TSKMailboxSessionController, TSULogContext;

@protocol TSKDocumentInfo <NSObject>
@property(copy) NSURL *orphanedAlternateContentsURL;
@property(copy) TSKCollaborationUserInfo *userInfo;
@property(retain) id <TSKCollaborationValidator> collaborationValidator;
@property(readonly) TSKSharingState *sharingState;
@property(readonly) id <TSULogContext> logContext;
@property(readonly) __weak TSKDocumentRoot *documentRootForLogging;
@property(readonly) __weak TSKDocumentRoot *documentRoot;
@property(readonly) TSUURLTracker *urlTracker;
@property(readonly) NSURL *URLIfAvailable;
@property(readonly) NSURL *URL;
- (id <NSProgressReporting>)fetchLatestRevisionWithLogContext:(id <TSULogContext>)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)fetchAccessTokenWithLogContext:(id <TSULogContext>)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 completion:(void (^)(TSKAccessToken *, NSError *))arg3;
- (void)fetchDocumentIdWithLogContext:(id <TSULogContext>)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 completion:(void (^)(NSString *, NSError *))arg3;
- (void)stopWaitingForPendingRSVPIfNeeded;
- (void)startWaitingForPendingRSVPWithMailboxSessionController:(id <TSKMailboxSessionController>)arg1 documentRoot:(TSKDocumentRoot *)arg2 completion:(void (^)(void))arg3;
@end

