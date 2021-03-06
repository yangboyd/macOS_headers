//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CRRecordProtocol.h"

@class CRTextBlock;

@interface CRTwoColRecord : NSObject <CRRecordProtocol>
{
    CRTextBlock *_leftTextBlock;
    CRTextBlock *_rightTextBlock;
    double _width;
    struct CGPoint _leftTextBlockOrigin;
    struct CGPoint _rightTextBlockOrigin;
    BOOL _hasLaidOut;
}

- (void).cxx_destruct;
- (id)hyperlinkAtPoint:(struct CGPoint)arg1 outTextBlock:(id *)arg2;
@property(readonly, nonatomic) double textHeight;
- (void)draw;
- (void)performLayoutForWidth:(double)arg1 styles:(id)arg2;
- (id)initWithLeftText:(id)arg1 rightText:(id)arg2 leftHyperlinks:(id)arg3 rightHyperlinks:(id)arg4;

@end

