//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSArray;
@protocol PXRunNodeDelegate;

@protocol PXRunNode <NSObject>
@property(readonly, copy, nonatomic) NSArray *dependencies;
@property(nonatomic) __weak id <PXRunNodeDelegate> delegate;
@property(readonly, getter=isCanceled) BOOL canceled;
@property(readonly, getter=isComplete) BOOL complete;
@property(readonly, getter=isRunning) BOOL running;
@property(readonly, getter=isWaiting) BOOL waiting;
@property(readonly) unsigned long long state;
- (void)cancel;
@end

