//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AFCallSiteInfoMutating.h"

@class AFCallSiteInfo, NSString;

@interface _AFCallSiteInfoMutation : NSObject <AFCallSiteInfoMutating>
{
    AFCallSiteInfo *_baseModel;
    NSString *_imagePath;
    NSString *_symbolName;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasImagePath:1;
        unsigned int hasSymbolName:1;
    } _mutationFlags;
}

- (void).cxx_destruct;
- (id)generate;
- (void)setSymbolName:(id)arg1;
- (void)setImagePath:(id)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

