//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface MessageBroadcastInfo : NSObject
{
    NSArray *_receivers;
    NSObject *_message;
    NSString *_key;
}

- (void).cxx_destruct;
@property(retain) NSString *key; // @synthesize key=_key;
@property(retain) NSObject *message; // @synthesize message=_message;
@property(retain) NSArray *receivers; // @synthesize receivers=_receivers;

@end

