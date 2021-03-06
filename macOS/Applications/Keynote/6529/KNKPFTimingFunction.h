//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KNKPFReading.h"
#import "KNKPFWriting.h"

@class NSArray, NSDictionary, NSString;

@interface KNKPFTimingFunction : NSObject <KNKPFReading, KNKPFWriting>
{
    long long _timingFunction;
    NSArray *_timingControlPoints;
}

+ (id)timingFunctionName:(long long)arg1;
@property(copy, nonatomic) NSArray *timingControlPoints; // @synthesize timingControlPoints=_timingControlPoints;
@property(nonatomic) long long timingFunction; // @synthesize timingFunction=_timingFunction;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)addToAnimation:(id)arg1;
- (BOOL)readFromKPFDictionary:(id)arg1 error:(out id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

