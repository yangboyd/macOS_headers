//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMAP/IMAPResponse.h>

@class NSSet;

@interface IMAPFlagsResponse : IMAPResponse
{
    NSSet *_flags;
}

+ (BOOL)handlesResponseWithName:(const char *)arg1 ofLength:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSSet *flags; // @synthesize flags=_flags;
- (id)description;

@end

