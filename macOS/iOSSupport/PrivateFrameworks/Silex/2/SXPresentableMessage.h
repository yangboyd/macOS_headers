//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SXPresentableMessage : NSObject
{
    NSString *_recipient;
    NSString *_message;
}

@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, copy, nonatomic) NSString *recipient; // @synthesize recipient=_recipient;
- (void).cxx_destruct;
- (id)initWithRecipient:(id)arg1 message:(id)arg2;

@end

