//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol TSKCollaborationEntry, TSKDocumentInfo, TSULogContext;

@protocol TSKCollaborationEntry <NSObject>
@property(readonly) id <TSULogContext> logContext;
@property BOOL hasOrphanedAlternateContentsURL;
@property(readonly) id <TSKDocumentInfo> documentInfo;
@property(readonly) NSURL *documentCacheURL;
- (void)setAlternateContentsURL:(NSURL *)arg1;
- (BOOL)areArchivedPropertiesEquivalentToCollaborationEntry:(id <TSKCollaborationEntry>)arg1;
@end

