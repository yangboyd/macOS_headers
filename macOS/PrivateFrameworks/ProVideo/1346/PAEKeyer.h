//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProVideo/PAEFilterDefaultBase.h>

@class PAEKeyerMatteTools, PAEKeyerPreprocess;

@interface PAEKeyer : PAEFilterDefaultBase
{
    struct OMSamples *_omSamples;
    _Bool _isMotion;
    CDStruct_1b6d18a9 _prevRationalTime;
    CDUnion_baaf6063 _prevRectanglesFrame;
    // Error parsing type: ^{HGBitmapLoader=^^?{atomic<unsigned int>={__cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> >=AI}}ii^vii^fi^{HGShaderEntry}^^{HGNodeInput}i^{HGBitmap}BBBBB{set<HGNodeInput *, std::__1::less<HGNodeInput *>, std::__1::allocator<HGNodeInput *> >={__tree<HGNodeInput *, std::__1::less<HGNodeInput *>, std::__1::allocator<HGNodeInput *> >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<HGNodeInput *, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::less<HGNodeInput *> >=Q}}}i^{HGNode}{HGRect=iiii}{HGRect=iiii}^{HGRenderer}^{HGBitmap}^{HGNode}iii{HGRect=iiii}ii^{HGBitmap}{HGShaderBinding=[1i]iiiiiII}^{HGNodeChain}^{HGShaderEntry}iB{HGBlendingInfo=Qiiiiii}f{HGRef<HGBitmap>=^{HGBitmap}}{HGRef<HGBitmap>=^{HGBitmap}}{HGRef<HGBitmap>=^{HGBitmap}}BBBi^{HGBitmapLoader}^{HGNode}^{HGNode}^{HGNode}^{HGNode}^{HGNode}}, name: _lutsBitmapLoaderCache
    struct PCMutex _cacheMutex;
    PAEKeyerMatteTools *_matteTools;
    PAEKeyerPreprocess *_preprocessTools;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)apiManager;
- (BOOL)use32x32Histogram;
- (id)getBlendOptionsAtTime:(CDUnion_baaf6063)arg1;
- (void)dealloc;
- (void)clearKey;
- (BOOL)frameSetup:(CDStruct_f5b31fc1)arg1 inputInfo:(CDStruct_4a07eeda)arg2 hardware:(char *)arg3 software:(char *)arg4;
- (BOOL)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(CDStruct_f5b31fc1)arg3;
- (double)autokeyAmountToHistoPercent:(double)arg1;
- (BOOL)pullInitialKey:(id *)arg1;
- (_Bool)isSimpleKey;
- (BOOL)isLumaKey;
- (HGRef_265f9e4c)getKeyerNode:(HGRef_265f9e4c)arg1 omKeyer:(struct PAEKeyerOMKeyer2D *)arg2 atTime:(CDUnion_baaf6063)arg3;
- (BOOL)addParameters;
- (int)getColorPrimaries;
- (id)properties;
- (id)initWithAPIManager:(id)arg1;
- (void)computeModel:(BOOL)arg1 atTime:(CDUnion_baaf6063)arg2;
- (void)getInputWidth:(float *)arg1 height:(float *)arg2 renderInfo:(CDStruct_f5b31fc1)arg3;
- (void)setInitialSamples:(struct OMSamplesElem *)arg1;
- (BOOL)sampleRect:(struct OMSamplesElem *)arg1 renderInfo:(CDStruct_f5b31fc1 *)arg2 width:(float)arg3 height:(float)arg4;
- (BOOL)sampleEdge:(struct OMSamplesElem *)arg1 renderInfo:(CDStruct_f5b31fc1 *)arg2 width:(float)arg3 height:(float)arg4;

@end

