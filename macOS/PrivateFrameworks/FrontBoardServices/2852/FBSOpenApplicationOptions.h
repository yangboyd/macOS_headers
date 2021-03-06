//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSXPCCoding.h"
#import "BSXPCSecureCoding.h"
#import "NSCopying.h"

@class NSDictionary, NSMutableDictionary, NSString, NSURL;

@interface FBSOpenApplicationOptions : NSObject <BSXPCCoding, BSXPCSecureCoding, NSCopying>
{
    NSMutableDictionary *_payload;
}

+ (BOOL)supportsBSXPCSecureCoding;
+ (id)optionsWithDictionary:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_payload;
- (void)_sanitizeAndValidatePayload;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSURL *url;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

