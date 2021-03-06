//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBSerializable.h"
#import "NSCopying.h"

@class DBTEAMLOGLinkAudience, NSNumber, NSString;

@interface DBTEAMLOGSharedContentChangeLinkAudienceDetails : NSObject <DBSerializable, NSCopying>
{
    NSNumber *_targetIndex;
    NSString *_originalFolderName;
    NSString *_sharedFolderType;
    DBTEAMLOGLinkAudience *_dNewValue;
    DBTEAMLOGLinkAudience *_previousValue;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) DBTEAMLOGLinkAudience *previousValue; // @synthesize previousValue=_previousValue;
@property(readonly, nonatomic) DBTEAMLOGLinkAudience *dNewValue; // @synthesize dNewValue=_dNewValue;
@property(readonly, copy, nonatomic) NSString *sharedFolderType; // @synthesize sharedFolderType=_sharedFolderType;
@property(readonly, copy, nonatomic) NSString *originalFolderName; // @synthesize originalFolderName=_originalFolderName;
@property(readonly, nonatomic) NSNumber *targetIndex; // @synthesize targetIndex=_targetIndex;
- (void).cxx_destruct;
- (BOOL)isEqualToSharedContentChangeLinkAudienceDetails:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithTargetIndex:(id)arg1 dNewValue:(id)arg2;
- (id)initWithTargetIndex:(id)arg1 dNewValue:(id)arg2 originalFolderName:(id)arg3 sharedFolderType:(id)arg4 previousValue:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

