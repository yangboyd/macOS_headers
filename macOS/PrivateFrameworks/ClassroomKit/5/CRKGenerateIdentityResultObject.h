//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CATTaskResultObject.h"

@class NSData;

@interface CRKGenerateIdentityResultObject : CATTaskResultObject
{
    NSData *_certificateData;
    NSData *_privateKeyData;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSData *privateKeyData; // @synthesize privateKeyData=_privateKeyData;
@property(copy, nonatomic) NSData *certificateData; // @synthesize certificateData=_certificateData;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

