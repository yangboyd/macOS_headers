//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableSet, NSSet, NSString, TSDThumbnailGenerator, TSKDocumentRoot, TSUColor, TSULRUCache;
@protocol OS_dispatch_queue, TSDThumbnailControllerDelegate, TSDThumbnailIdentifier, TSDThumbnailProducer;

@interface TSDThumbnailController : NSObject
{
    TSDThumbnailGenerator *_generator;
    TSKDocumentRoot *_documentRoot;
    id <TSDThumbnailControllerDelegate> _delegate;
    id <TSDThumbnailProducer> _producer;
    BOOL _thumbnailRequested;
    BOOL _thumbnailerEnabled;
    unsigned int _thumbnailSuspendCount;
    NSMutableSet *_dirtySet;
    TSULRUCache *_thumbnailCache;
    double _delayBeforeRedraw;
    BOOL _tornDown;
    BOOL _callbackScheduled;
    int _delayHandlingStatus;
    NSDate *_drawingStartDate;
    NSObject<OS_dispatch_queue> *_thumbnailGenerationQueue;
}

@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_thumbnailerEnabled;
@property(nonatomic) double delayBeforeRedraw; // @synthesize delayBeforeRedraw=_delayBeforeRedraw;
@property(nonatomic) id <TSDThumbnailProducer> producer; // @synthesize producer=_producer;
@property(nonatomic) id <TSDThumbnailControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)p_mustCacheThumbnailsForAllPrincipalThumbnailIdentifiers;
- (BOOL)p_isThumbnailGenerationActive;
- (void)p_scheduleThumbnailGeneration;
- (void)p_scheduleThumbnailGenerationMainThreadEntry;
- (void)p_thumbnailEvicted:(id)arg1 identifier:(id)arg2;
- (void)p_handleMemoryNotification:(id)arg1;
@property(readonly, nonatomic) BOOL shouldCallCommit;
- (void)commitThumbnail:(id)arg1 identifier:(id)arg2 datasThatNeedDownload:(id)arg3;
- (void)updateThumbnail:(id)arg1 identifier:(id)arg2 continueThumbnailing:(BOOL)arg3;
@property(readonly, nonatomic) id <TSDThumbnailIdentifier> nextThumbnailIdentifier;
- (void)waitForIdentifiersOfThumbnailsToHaveThumbnails:(id)arg1;
- (id)thumbnail:(id)arg1 waitIfNecessary:(BOOL)arg2;
- (id)cachedThumbnail:(id)arg1;
- (void)invalidateThumbnail:(id)arg1;
- (void)invalidateAllThumbnailsAndOptionallyClearCache:(BOOL)arg1;
- (void)updateThumbnails;
- (void)thumbnailCountDidChange;
@property(readonly, nonatomic) NSSet *dirtySet;
@property(copy, nonatomic) TSUColor *backgroundColor;
- (void)resumeThumbnailing;
- (void)suspendThumbnailing;
- (void)teardown;
- (void)dealloc;
- (id)init;
- (id)initWithDocumentRoot:(id)arg1 cacheSize:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

