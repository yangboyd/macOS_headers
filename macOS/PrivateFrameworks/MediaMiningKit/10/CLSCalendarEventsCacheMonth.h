//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet;

@interface CLSCalendarEventsCacheMonth : NSObject
{
    long long _month;
    NSMutableSet *_days;
}

@property(readonly, nonatomic) NSMutableSet *days; // @synthesize days=_days;
@property(nonatomic) long long month; // @synthesize month=_month;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)initWithMonth:(long long)arg1;

@end

