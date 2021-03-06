//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreMaterial/MTMaterialStyleProviding-Protocol.h>
#import <CoreMaterial/MTMaterialVersioning-Protocol.h>

@class NSString;
@protocol MTTinting><MTMaterialFiltering;

@protocol MTRecipeMaterialSettingsProviding <MTMaterialVersioning, MTMaterialStyleProviding>
@property(readonly, nonatomic) id <MTTinting><MTMaterialFiltering> auxiliaryOverlaySettings;
@property(readonly, nonatomic) id <MTTinting><MTMaterialFiltering> secondaryOverlaySettings;
@property(readonly, nonatomic) id <MTTinting><MTMaterialFiltering> primaryOverlaySettings;
@property(readonly, nonatomic) id <MTTinting><MTMaterialFiltering> baseOverlaySettings;
@property(readonly, nonatomic) id <MTTinting><MTMaterialFiltering> baseMaterialSettings;
- (id <MTTinting><MTMaterialFiltering>)settingsForConfiguration:(NSString *)arg1;
@end

