//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ICExportable-Protocol.h"

@class GQDImageBinary, GQDSStylesheet, GQDTTable, NSString;

@interface GQDLSTablePrototype : NSObject <ICExportable>
{
    GQDSStylesheet *mStylesheet;
    GQDTTable *mTableInfo;
    struct __CFString *mName;
    struct __CFString *mCoreName;
    BOOL mUseDefaultStyle;
    GQDImageBinary *mThumbnail;
}

@property(retain, nonatomic) GQDImageBinary *thumbnail; // @synthesize thumbnail=mThumbnail;
@property(nonatomic) BOOL useDefaultStyle; // @synthesize useDefaultStyle=mUseDefaultStyle;
@property(readonly, nonatomic) struct __CFString *coreName; // @synthesize coreName=mCoreName;
@property(readonly, nonatomic) struct __CFString *name; // @synthesize name=mName;
@property(retain, nonatomic) GQDTTable *tableInfo; // @synthesize tableInfo=mTableInfo;
@property(retain, nonatomic) GQDSStylesheet *stylesheet; // @synthesize stylesheet=mStylesheet;
- (void)setCoreName:(struct __CFString *)arg1;
- (void)setName:(struct __CFString *)arg1;
- (void)dealloc;
- (BOOL)encodeWithExporter:(id)arg1;
- (void)encodeAttributesWithExporter:(id)arg1;
- (char *)elementName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

