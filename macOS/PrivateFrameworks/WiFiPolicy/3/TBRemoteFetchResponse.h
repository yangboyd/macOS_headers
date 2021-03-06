//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBFetchResponse.h"

@class NSArray, NSDictionary, NSError, NSSet, NSString;

@interface TBRemoteFetchResponse : NSObject <TBFetchResponse>
{
    NSSet *_tiles;
    NSArray *_results;
    NSError *_error;
}

+ (id)responseWithResults:(id)arg1 tiles:(id)arg2 error:(id)arg3;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
@property(readonly, nonatomic) NSSet *tiles; // @synthesize tiles=_tiles;
- (void).cxx_destruct;
- (id)initWithResults:(id)arg1 tiles:(id)arg2 error:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSDictionary *resultsByBSSID;
@property(readonly) Class superclass;

@end

