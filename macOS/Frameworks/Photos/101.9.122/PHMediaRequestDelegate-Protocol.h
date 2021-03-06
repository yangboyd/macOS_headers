//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Photos/NSObject-Protocol.h>

@class PHCompositeMediaResult, PHMediaRequest;
@protocol PLResourceIdentity;

@protocol PHMediaRequestDelegate <NSObject>
- (void)mediaRequest:(PHMediaRequest *)arg1 didFinishWithResult:(PHCompositeMediaResult *)arg2;
- (void)mediaRequest:(PHMediaRequest *)arg1 isRequestingLocalAvailabilityChangeForResource:(id <PLResourceIdentity>)arg2;
- (void)mediaRequest:(PHMediaRequest *)arg1 didFindLocallyAvailableResult:(BOOL)arg2 isDegraded:(BOOL)arg3;
@end

