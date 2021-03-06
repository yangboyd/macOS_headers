//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, GEOLocation, NSData;

@interface GEOCompanionRouteStatus : PBCodable <NSCopying>
{
    double _timestamp;
    unsigned int _distanceRemainingOnRoute;
    unsigned int _distanceToManeuver;
    unsigned int _distanceToRoute;
    int _feedbackType;
    GEOLocation *_location;
    unsigned int _remainingTime;
    NSData *_routeID;
    unsigned int _routeLocationIndex;
    float _routeLocationOffset;
    GEOLatLng *_routeMatchCoordinate;
    unsigned int _stepID;
    struct {
        unsigned int timestamp:1;
        unsigned int distanceRemainingOnRoute:1;
        unsigned int distanceToManeuver:1;
        unsigned int distanceToRoute:1;
        unsigned int feedbackType:1;
        unsigned int remainingTime:1;
        unsigned int routeLocationIndex:1;
        unsigned int routeLocationOffset:1;
        unsigned int stepID:1;
    } _has;
}

@property(retain, nonatomic) NSData *routeID; // @synthesize routeID=_routeID;
@property(retain, nonatomic) GEOLatLng *routeMatchCoordinate; // @synthesize routeMatchCoordinate=_routeMatchCoordinate;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) float routeLocationOffset; // @synthesize routeLocationOffset=_routeLocationOffset;
@property(nonatomic) unsigned int routeLocationIndex; // @synthesize routeLocationIndex=_routeLocationIndex;
@property(retain, nonatomic) GEOLocation *location; // @synthesize location=_location;
@property(nonatomic) unsigned int remainingTime; // @synthesize remainingTime=_remainingTime;
@property(nonatomic) unsigned int distanceRemainingOnRoute; // @synthesize distanceRemainingOnRoute=_distanceRemainingOnRoute;
@property(nonatomic) unsigned int distanceToRoute; // @synthesize distanceToRoute=_distanceToRoute;
@property(nonatomic) unsigned int distanceToManeuver; // @synthesize distanceToManeuver=_distanceToManeuver;
@property(nonatomic) unsigned int stepID; // @synthesize stepID=_stepID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasRouteID;
@property(readonly, nonatomic) BOOL hasRouteMatchCoordinate;
@property(nonatomic) BOOL hasTimestamp;
@property(nonatomic) BOOL hasRouteLocationOffset;
@property(nonatomic) BOOL hasRouteLocationIndex;
@property(readonly, nonatomic) BOOL hasLocation;
@property(nonatomic) BOOL hasRemainingTime;
@property(nonatomic) BOOL hasDistanceRemainingOnRoute;
@property(nonatomic) BOOL hasDistanceToRoute;
@property(nonatomic) BOOL hasDistanceToManeuver;
@property(nonatomic) BOOL hasStepID;
@property(nonatomic) BOOL hasFeedbackType;
@property(nonatomic) int feedbackType; // @synthesize feedbackType=_feedbackType;
- (void)dealloc;
@property(readonly, nonatomic) unsigned int effectiveDistanceToManeuver;
@property(readonly, nonatomic) BOOL hasEffectiveDistanceToManeuver;
@property(readonly, nonatomic) unsigned int effectiveStepID;
@property(readonly, nonatomic) BOOL hasEffectiveStepID;
@property(readonly, nonatomic) BOOL isPreviewingNavigation;
@property(readonly, nonatomic) BOOL isNavigating;
- (void)updateFeedbackWithNavigationState:(int)arg1 locationUnreliable:(BOOL)arg2 announcementStage:(unsigned long long)arg3 nextAnnouncementStage:(unsigned long long)arg4 nextAnnouncementTime:(double)arg5;
- (void)updateWithRoute:(id)arg1 routeID:(id)arg2;
- (id)initWithRoute:(id)arg1 routeID:(id)arg2;
- (id)initWithRouteID:(id)arg1;

@end

