//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, TSSPropertySet, TSTCellStyle, TSTTableInfo, WDTable, WITDocumentState, WITTableBorderCache, WITTablePosition, WITTableRect, WITTextState;

@interface WITTableState : NSObject
{
    WDTable *mWdTable;
    WITTextState *mTextState;
    WITTableRect *mCurrentRectangle;
    WITTablePosition *mTablePosition;
    WITTableBorderCache *mTableBorderCache;
    NSMutableDictionary *mVLineMap;
    NSMutableDictionary *mHLineMap;
    NSMutableArray *mRectangles;
    NSMutableArray *mVerticalLinePositions;
    NSMutableArray *mHorizontalLinePositions;
    struct CGSize mTableSize;
    unsigned long long mHeaderRowCount;
    BOOL mHasResizeableRows;
    TSSPropertySet *mParagraphStyleProperties;
    TSTTableInfo *mTSTTableInfo;
    struct TSUCellCoord mTSTTableCellID;
    TSTCellStyle *mTSTCellStyle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TSSPropertySet *paragraphStyleProperties; // @synthesize paragraphStyleProperties=mParagraphStyleProperties;
@property(nonatomic) BOOL hasResizeableRows; // @synthesize hasResizeableRows=mHasResizeableRows;
@property(nonatomic) unsigned long long headerRowCount; // @synthesize headerRowCount=mHeaderRowCount;
@property(nonatomic) struct CGSize tableSize; // @synthesize tableSize=mTableSize;
@property(retain, nonatomic) WITTableBorderCache *tableBorderCache; // @synthesize tableBorderCache=mTableBorderCache;
@property(readonly, nonatomic) NSMutableArray *horizontalLinePositions; // @synthesize horizontalLinePositions=mHorizontalLinePositions;
@property(readonly, nonatomic) NSMutableArray *verticalLinePositions; // @synthesize verticalLinePositions=mVerticalLinePositions;
@property(readonly, nonatomic) NSMutableDictionary *hLineMap; // @synthesize hLineMap=mHLineMap;
@property(readonly, nonatomic) NSMutableDictionary *vLineMap; // @synthesize vLineMap=mVLineMap;
@property(readonly, nonatomic) NSMutableArray *rectangles; // @synthesize rectangles=mRectangles;
@property(retain, nonatomic) WITTableRect *currentRectangle; // @synthesize currentRectangle=mCurrentRectangle;
@property(retain, nonatomic) WITTablePosition *tablePosition; // @synthesize tablePosition=mTablePosition;
@property(readonly, nonatomic) WITTextState *textState; // @synthesize textState=mTextState;
@property(readonly, nonatomic) WDTable *wdTable; // @synthesize wdTable=mWdTable;
@property(retain, nonatomic) TSTCellStyle *baseCellStyle; // @synthesize baseCellStyle=mTSTCellStyle;
@property(nonatomic) struct TSUCellCoord tstTableCellID; // @synthesize tstTableCellID=mTSTTableCellID;
@property(retain, nonatomic) TSTTableInfo *tstTableInfo; // @synthesize tstTableInfo=mTSTTableInfo;
- (int)rowHeightTypeAt:(unsigned long long)arg1;
- (float)rowHeightAt:(unsigned long long)arg1;
- (float)columnWidthAt:(unsigned long long)arg1;
- (unsigned long long)colCount;
- (unsigned long long)rowCount;
- (id)horizontalLines;
- (id)verticalLines;
@property(readonly, nonatomic) WITDocumentState *documentState;
- (id)initWithTable:(id)arg1 state:(id)arg2;

@end

