//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "App_Store.BaseCollectionViewCell.h"

@class NSImageView, _TtC9App_Store20DynamicTypeTextField;

@interface App_Store.ProductCapabilityCell : App_Store.BaseCollectionViewCell
{
    // Error parsing type: , name: iconImageView
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: captionLabel
}

+ (struct CGSize)sizeWithFitting:(struct CGSize)arg1 forTitle:(id)arg2 caption:(id)arg3 in:(id)arg4;
- (CDUnknownBlockType).cxx_destruct;
- (id)accessibilityChildren;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (void)prepareForReuse;
- (void)layout;
@property(nonatomic, readonly) _TtC9App_Store20DynamicTypeTextField *captionLabel; // @synthesize captionLabel;
@property(nonatomic, readonly) _TtC9App_Store20DynamicTypeTextField *titleLabel; // @synthesize titleLabel;
@property(nonatomic, readonly) NSImageView *iconImageView; // @synthesize iconImageView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

