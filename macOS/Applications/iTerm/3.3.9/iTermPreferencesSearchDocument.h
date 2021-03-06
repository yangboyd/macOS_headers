//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSNumber, NSString;

@interface iTermPreferencesSearchDocument : NSObject <NSCopying>
{
    NSArray *_keywordPhrases;
    NSString *_displayName;
    NSString *_identifier;
    NSNumber *_docid;
    NSString *_ownerIdentifier;
    double _queryIndependentScore;
}

+ (id)documentWithDisplayName:(id)arg1 identifier:(id)arg2 keywordPhrases:(id)arg3;
@property(nonatomic) double queryIndependentScore; // @synthesize queryIndependentScore=_queryIndependentScore;
@property(retain, nonatomic) NSString *ownerIdentifier; // @synthesize ownerIdentifier=_ownerIdentifier;
@property(readonly, nonatomic) NSNumber *docid; // @synthesize docid=_docid;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSArray *keywordPhrases; // @synthesize keywordPhrases=_keywordPhrases;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSArray *allKeywords;
- (id)description;
- (id)initWithDisplayName:(id)arg1 identifier:(id)arg2 keywordPhrases:(id)arg3;

@end

