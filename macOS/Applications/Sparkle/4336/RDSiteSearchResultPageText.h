//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RDTextContent.h"

@interface RDSiteSearchResultPageText : RDTextContent
{
}

- (void)addContentToElement:(id)arg1 withPropertySets:(id)arg2 context:(id)arg3;
- (void)generateHtml:(id)arg1 context:(id)arg2;
- (BOOL)ignoreTextOverflow;
- (id)duplicate;
- (BOOL)isEditable;
- (BOOL)canBecomeTemplate;
- (BOOL)isDeletable;
- (BOOL)ignoreWrap;
- (void)applyFont:(id)arg1;
- (void)drawInContext:(struct CGContext *)arg1 renderingDestination:(int)arg2;
- (struct CGRect)drawingExtent;
- (void)updateResultPageText:(BOOL)arg1;

@end

