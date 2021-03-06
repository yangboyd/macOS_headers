//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "NSLayoutSpacingItem.h"
#import "NUIArrangementItem.h"

@class NSString;

@interface NSView (NUIContainerView) <NUIArrangementItem, NSLayoutSpacingItem>
- (void)setUntransformedFrame:(struct CGRect)arg1;
@property(nonatomic) BOOL invalidatingIntrinsicContentSizeAlsoInvalidatesSuperview;
@property(nonatomic) double customFirstBaselineOffsetFromTop;
@property(nonatomic) double customBaselineOffsetFromBottom;
@property(nonatomic) struct NSEdgeInsets customAlignmentRectInsets;
- (void)setLayoutSize:(struct CGSize)arg1 withContentPriority:(float)arg2;
@property(nonatomic) struct CGSize maximumLayoutSize;
@property(nonatomic) struct CGSize minimumLayoutSize;
- (id)containerViewInfoCreateIfNeeded:(BOOL)arg1;
- (BOOL)isLayoutSizeDependentOnPerpendicularAxis;
- (BOOL)supportsAsynchronousMeasurement;
- (double)effectiveFirstBaselineOffsetFromTop;
- (double)effectiveBaselineOffsetFromBottom;
- (long long)_nui_baselineViewType;
- (struct CGSize)effectiveLayoutSizeFittingSize:(struct CGSize)arg1;
- (void)nukeContentLayoutSizeCacheFromOrbit;
- (struct nui_size_cache *)contentLayoutSizeCache;
- (void)_didInvalidateIntrinsicContentSize;
- (double)effectiveFirstBaselineOffsetFromContentTop;
- (double)effectiveBaselineOffsetFromContentBottom;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (struct NSEdgeInsets)effectiveAlignmentRectInsets;
- (double)effectiveScreenScale;
- (struct CGSize)effectiveMaximumLayoutContentSize;
- (struct CGSize)effectiveMinimumLayoutContentSize;
- (struct CGSize)calculateLayoutSizeFittingSize:(struct CGSize)arg1;
- (BOOL)_nui_wantsAutolayout;
- (id)contentLayoutSizeCacheDescription;
- (float)contentHuggingPriorityForAxis:(long long)arg1;
- (float)contentCompressionResistancePriorityForAxis:(long long)arg1;
- (struct CGSize)testableEffectiveLayoutSizeFittingSize:(struct CGSize)arg1;
- (struct CGSize)testableSizeThatFits:(struct CGSize)arg1;
- (struct CGSize)sizeToBestFitAndLayoutIfNeeded;
- (double)systemSpacingToSuperView:(id)arg1 edge:(unsigned long long)arg2 baselineRelative:(BOOL)arg3 multiplier:(double)arg4;
- (double)systemSpacingToAdjecentSiblingView:(id)arg1 axis:(long long)arg2 baselineRelative:(BOOL)arg3 multiplier:(double)arg4;
- (struct CGSize)_nui_systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (struct CGSize)_nui_systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (BOOL)_isContainerView;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (double)_currentScreenScale;
- (BOOL)_needsDoubleUpdateConstraintsPass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

