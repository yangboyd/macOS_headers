//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface MLFoundationGraph : NSObject <NSCopying>
{
    BOOL _readyForExecution;
    BOOL _allocateIntermediateTensors;
    NSArray *_graphObjects;
    unsigned long long _nextLayerID;
    NSMutableArray *_preprocessingLayerList;
    NSMutableArray *_graphLayerList;
    NSMutableArray *_rootLevelTensorNodes;
    NSMutableDictionary *_layerParentMap;
    NSMutableDictionary *_layerChildMap;
}

+ (id)graphWithGraphObjects:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *layerChildMap; // @synthesize layerChildMap=_layerChildMap;
@property(retain, nonatomic) NSMutableDictionary *layerParentMap; // @synthesize layerParentMap=_layerParentMap;
@property(retain, nonatomic) NSMutableArray *rootLevelTensorNodes; // @synthesize rootLevelTensorNodes=_rootLevelTensorNodes;
@property(retain, nonatomic) NSMutableArray *graphLayerList; // @synthesize graphLayerList=_graphLayerList;
@property(retain, nonatomic) NSMutableArray *preprocessingLayerList; // @synthesize preprocessingLayerList=_preprocessingLayerList;
@property(nonatomic) unsigned long long nextLayerID; // @synthesize nextLayerID=_nextLayerID;
@property(readonly, retain, nonatomic) NSArray *graphObjects; // @synthesize graphObjects=_graphObjects;
@property(nonatomic) BOOL allocateIntermediateTensors; // @synthesize allocateIntermediateTensors=_allocateIntermediateTensors;
@property(nonatomic) BOOL readyForExecution; // @synthesize readyForExecution=_readyForExecution;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)enumerateOutputsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateInputsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateLayersUsingBlock:(CDUnknownBlockType)arg1;
- (void)writeAsyncToDevice:(id)arg1 dataForTensors:(id)arg2;
- (id)description;
- (id)nodeWithLayer:(id)arg1 sources:(id)arg2;
- (id)nodeWithLayer:(id)arg1 source:(id)arg2;
- (id)createGradientSourceTensorWith:(id)arg1 source:(id)arg2;
- (id)createTensorWith:(id)arg1 source:(id)arg2;
- (void)dealloc;
- (id)initWithGraphObjects:(id)arg1;
- (id)init;

@end

