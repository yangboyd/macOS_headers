//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@interface CEMSystemEnergySaverDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
}

+ (id)allowedReasons;
+ (id)allowedStatusKeys;
+ (id)restrictionPayloadKeys;
+ (id)PowerOnSettings_allowedPayloadKeys;
+ (id)ComappleEnergySaverdesktopSchedule_allowedPayloadKeys;
+ (id)EnergySaverSettings_allowedPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredType;
+ (id)registeredClass;
- (id)serializePayloadPowerOnSettings:(id)arg1 withAssetProviders:(id)arg2;
- (id)serializePayloadComappleEnergySaverdesktopSchedule:(id)arg1 withAssetProviders:(id)arg2;
- (id)serializePayloadEnergySaverSettings:(id)arg1 withAssetProviders:(id)arg2;
- (id)serializePayload:(id)arg1 withAssetProviders:(id)arg2;
- (BOOL)validStatusDictionary:(id)arg1 error:(id *)arg2;
- (BOOL)validPayloadPowerOnSettings_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id *)arg3;
- (BOOL)validPayloadComappleEnergySaverdesktopSchedule_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id *)arg3;
- (BOOL)validPayloadEnergySaverSettings_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id *)arg3;
- (BOOL)validPayloadDictionary:(id)arg1 error:(id *)arg2;
- (id)assetReferences;
- (int)activationLevel;
- (BOOL)mustBeSupervised;
- (BOOL)multipleAllowed;
@property(readonly, nonatomic) NSNumber *payloadDestroyFVKeyOnStandby;
@property(readonly, nonatomic) NSNumber *payloadSleepDisabled;
@property(readonly, nonatomic) NSDictionary *payloadComappleEnergySaverdesktopSchedule;
@property(readonly, nonatomic) NSDictionary *payloadComappleEnergySaverportableBatteryPower;
@property(readonly, nonatomic) NSDictionary *payloadComappleEnergySaverportableACPower;
@property(readonly, nonatomic) NSDictionary *payloadComappleEnergySaverdesktopACPower;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

