//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@protocol PXPlacesGeotaggable;

@protocol PXPlacesMapGeotaggableInfoDelegate <NSObject>

@optional
- (void)imageForGeotaggable:(id <PXPlacesGeotaggable>)arg1 ofSize:(struct CGSize)arg2 networkAccessAllowed:(BOOL)arg3 andCompletion:(void (^)(id <PXPlacesGeotaggable>, struct CGImage *, NSError *, NSDictionary *))arg4;
@end

