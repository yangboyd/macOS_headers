//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEOMapLayerInfo : PBCodable <NSCopying>
{
    NSString *_dataURL;
    unsigned int _formatVersion;
    NSString *_patchURL;
    unsigned int _timeToLiveSeconds;
    unsigned int _version;
    struct {
        unsigned int formatVersion:1;
        unsigned int timeToLiveSeconds:1;
        unsigned int version:1;
    } _has;
}

@property(nonatomic) unsigned int formatVersion; // @synthesize formatVersion=_formatVersion;
@property(retain, nonatomic) NSString *patchURL; // @synthesize patchURL=_patchURL;
@property(nonatomic) unsigned int timeToLiveSeconds; // @synthesize timeToLiveSeconds=_timeToLiveSeconds;
@property(retain, nonatomic) NSString *dataURL; // @synthesize dataURL=_dataURL;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasFormatVersion;
@property(readonly, nonatomic) BOOL hasPatchURL;
@property(nonatomic) BOOL hasTimeToLiveSeconds;
@property(readonly, nonatomic) BOOL hasDataURL;
@property(nonatomic) BOOL hasVersion;

@end

