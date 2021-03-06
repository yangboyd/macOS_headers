//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EPESDocument, EPXFont, NSString, TSSStyle;

@interface EPEFont : NSObject
{
    EPESDocument *mDocumentState;
    TSSStyle *mSourceStyle;
    NSString *mPSFontNameOverride;
    EPXFont *mFont;
}

+ (BOOL)canEmbedFont:(id)arg1 embeddedFontName:(id)arg2;
+ (id)mapFont:(id)arg1 psFontNameOverride:(id)arg2 documentState:(id)arg3;
- (void)pObfuscateFont:(id)arg1;
- (void)pSetFontSize:(float)arg1;
- (void)pSetFontFamily:(id)arg1;
- (void)mapFont;
- (void)setCaps:(int)arg1;
- (void)embedFont:(id)arg1 embeddedFontName:(id)arg2 embeddedFont:(id)arg3;
- (void)dealloc;
- (id)initWithSourceStyle:(id)arg1 psFontNameOverride:(id)arg2 documentState:(id)arg3;

@end

