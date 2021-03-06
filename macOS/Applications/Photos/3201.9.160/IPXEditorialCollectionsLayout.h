//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXVerticallySectionedCollectionsLayout.h"

@protocol IPXEditorialCollectionsLayoutDelegate;

@interface IPXEditorialCollectionsLayout : IPXVerticallySectionedCollectionsLayout
{
    id <IPXEditorialCollectionsLayoutDelegate> _delegate;
    double _scalarValue;
}

+ (Class)layoutAttributesClass;
+ (struct CGVector)insetVectorForWidth:(double)arg1;
@property(nonatomic) double scalarValue; // @synthesize scalarValue=_scalarValue;
@property(readonly, nonatomic) __weak id <IPXEditorialCollectionsLayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)collectionViewContentSize;
- (id)newLayoutAttributesForItemWithIndexPath:(id)arg1;
- (void)layoutWillPrepareSection:(id)arg1;
- (Class)layoutSectionClassForSectionAtIndex:(long long)arg1;
- (unsigned long long)editorialLayoutStyleForSectionAtIndex:(long long)arg1;
- (id)initWithDelegate:(id)arg1;

@end

