//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSApplication/TSAPasteboardController.h>

@class TNSheet;

@interface TNPasteboardController : TSAPasteboardController
{
    TNSheet *mLastSheetForDrawableCopy;
}

@property(nonatomic) TNSheet *lastSheetForDrawableCopy; // @synthesize lastSheetForDrawableCopy=mLastSheetForDrawableCopy;
- (id)importedRichTextStringFromPasteboard:(id)arg1 smartPaste:(char *)arg2;
- (id)sheetUIStateFromPasteboard:(id)arg1;
- (id)sheetFromPasteboard:(id)arg1;
- (BOOL)hasLargeContentOnPasteboard:(id)arg1;
- (BOOL)hasSheetOnPasteboard:(id)arg1;
- (void)distillPasteboardContentDescription:(id)arg1 intoPasteboardStateTypes:(id)arg2;
- (void)copySheet:(id)arg1 toPasteboard:(id)arg2;
- (id)theme;
- (id)stylesheet;

@end

