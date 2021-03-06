//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppStoreDaemon/ASDRequestResponse.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray;

@interface ASDJobSchedulerResponse : ASDRequestResponse <NSCopying, NSSecureCoding>
{
    NSArray *_bucketNames;
    NSArray *_currentItems;
    NSArray *_hardFailureItems;
    long long _maxItemCount;
    NSArray *_nextItems;
    NSArray *_skippedItems;
    NSArray *_softFailureItems;
}

@property(copy) NSArray *softFailureItems; // @synthesize softFailureItems=_softFailureItems;
@property(copy) NSArray *skippedItems; // @synthesize skippedItems=_skippedItems;
@property(copy) NSArray *nextItems; // @synthesize nextItems=_nextItems;
@property(nonatomic) long long maxItemCount; // @synthesize maxItemCount=_maxItemCount;
@property(copy) NSArray *hardFailureItems; // @synthesize hardFailureItems=_hardFailureItems;
@property(readonly) NSArray *currentItems; // @synthesize currentItems=_currentItems;
@property(copy) NSArray *bucketNames; // @synthesize bucketNames=_bucketNames;
- (void).cxx_destruct;
- (id)initWithItems:(id)arg1;
- (id)init;

@end

