//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXTilingLayout.h>

@class PLAvalanche, PXAssetsDataSource;

__attribute__((visibility("hidden")))
@interface IPXBurstScrubberLayout : PXTilingLayout
{
    PLAvalanche *_burstController;
    struct CGRect _layoutBounds;
    struct CGRect _contentBounds;
    struct CGSize _tileSize;
    struct _IPXBurstScrubberLayoutItemInfo *_itemInfos;
    long long _numberOfItems;
    BOOL _layoutIsCalculated;
    PXAssetsDataSource *_dataSource;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PXAssetsDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (struct PXTileGeometry)_geometryForDotAtIndexPath:(struct PXSimpleIndexPath)arg1 itemInfo:(struct _IPXBurstScrubberLayoutItemInfo)arg2;
- (struct PXTileGeometry)_geometryForCheckmarkAtIndexPath:(struct PXSimpleIndexPath)arg1 itemInfo:(struct _IPXBurstScrubberLayoutItemInfo)arg2;
- (struct PXTileGeometry)_geometryForContentAtIndexPath:(struct PXSimpleIndexPath)arg1 itemInfo:(struct _IPXBurstScrubberLayoutItemInfo)arg2;
- (BOOL)getGeometry:(struct PXTileGeometry *)arg1 group:(unsigned long long *)arg2 userData:(id *)arg3 forTileWithIdentifier:(struct PXTileIdentifier)arg4;
- (void)enumerateTilesInRect:(struct CGRect)arg1 withOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) struct CGRect contentBoundsWithoutPadding;
- (struct CGRect)contentBounds;
- (struct CGSize)_targetMediaSizeForAssetAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (struct CGRect)_rectForItemAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (void)setReferenceSize:(struct CGSize)arg1;
- (void)setUserFavorite:(BOOL)arg1 forAssetAtIndexPath:(struct PXSimpleIndexPath)arg2;
- (struct CGPoint)scrollPointForItemAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (struct PXSimpleIndexPath)indexPathForItemAtPoint:(struct CGPoint)arg1;
- (struct PXSimpleIndexPath)indexPathForIdentifier:(struct PXTileIdentifier)arg1;
- (long long)tileKindForIdentifier:(struct PXTileIdentifier)arg1;
- (void)prepareLayout;
- (id)initWithDataSource:(id)arg1 burstController:(id)arg2;
- (id)init;

@end

