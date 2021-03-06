//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKCatalystButton.h>

#import "ChildItemButtonProtocol-Protocol.h"

@class GEOMapItemChildItem, _MKPlaceActionButtonController;
@protocol ChildItemButtonDelegate;

__attribute__((visibility("hidden")))
@interface ChildItemCatalystButton : MKCatalystButton <ChildItemButtonProtocol>
{
    _MKPlaceActionButtonController *_buttonController;
    id <ChildItemButtonDelegate> _delegate;
    GEOMapItemChildItem *_childItem;
}

+ (id)titleFont;
+ (id)buttonTitleFont;
+ (struct UIEdgeInsets)contentEdgeInsets;
+ (id)childItemCatalystButton;
- (void).cxx_destruct;
@property(retain, nonatomic) GEOMapItemChildItem *childItem; // @synthesize childItem=_childItem;
@property(nonatomic) __weak id <ChildItemButtonDelegate> delegate; // @synthesize delegate=_delegate;

@end

