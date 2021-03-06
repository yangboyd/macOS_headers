//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoPrintProduct/KHFrameInspectorController.h>

#import <PhotoPrintProduct/NSTextViewDelegate-Protocol.h>

@class KHFontPickerController, KHInspectorTileViewController, KHTextAlignmentController, KHTextSpacingController, KHTextView, NSString;

@interface KHTextFrameInspectorController : KHFrameInspectorController <NSTextViewDelegate>
{
    KHTextView *_textView;
    KHInspectorTileViewController *_fontTileController;
    KHInspectorTileViewController *_textAlignmentTileController;
    KHInspectorTileViewController *_textSpacingTileController;
    KHFontPickerController *_fontPicker;
    KHTextSpacingController *_spacingPicker;
    KHTextAlignmentController *_alignmentPicker;
}

@property(retain, nonatomic) KHTextAlignmentController *alignmentPicker; // @synthesize alignmentPicker=_alignmentPicker;
@property(retain, nonatomic) KHTextSpacingController *spacingPicker; // @synthesize spacingPicker=_spacingPicker;
@property(retain, nonatomic) KHFontPickerController *fontPicker; // @synthesize fontPicker=_fontPicker;
@property(retain, nonatomic) KHInspectorTileViewController *textSpacingTileController; // @synthesize textSpacingTileController=_textSpacingTileController;
@property(retain, nonatomic) KHInspectorTileViewController *textAlignmentTileController; // @synthesize textAlignmentTileController=_textAlignmentTileController;
@property(retain, nonatomic) KHInspectorTileViewController *fontTileController; // @synthesize fontTileController=_fontTileController;
@property(retain, nonatomic) KHTextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)textViewDidChangeTypingAttributes:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (id)badgeImage;
- (void)teardownBindings;
- (void)setupModelBindings;
- (id)viewForPresentationMode:(int)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

