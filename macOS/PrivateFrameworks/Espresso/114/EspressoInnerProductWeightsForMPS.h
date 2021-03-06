//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Espresso/MPSCNNConvolutionDataSource-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EspressoInnerProductWeightsForMPS : NSObject <MPSCNNConvolutionDataSource>
{
    struct inner_product_uniforms params;
    struct shared_ptr<Espresso::blob<float, 2>> weights_blob;
    struct shared_ptr<Espresso::blob<unsigned short, 2>> weights_f16_blob;
    struct shared_ptr<Espresso::blob<unsigned char, 2>> quantized_weights_blob;
    struct shared_ptr<Espresso::blob<float, 1>> biases_blob;
    struct unique_ptr<float [] __attribute__((ext_vector_type(2))), std::__1::default_delete<float [] __attribute__((ext_vector_type(2)))>> quantization_ranges;
    struct shared_ptr<Espresso::blob<float, 1>> quantization_lut;
    unsigned int data_type;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)ready;
- (void)purge;
- (float *)biasTerms;
- (float *)lookupTableForUInt8Kernel;
-     // Error parsing type: ^16@0:8, name: rangesForUInt8Kernel
- (void *)weights;
- (BOOL)load;
- (id)descriptor;
- (unsigned int)dataType;
- (id)initWithParams:(struct inner_product_uniforms)arg1;
- (id)label;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

