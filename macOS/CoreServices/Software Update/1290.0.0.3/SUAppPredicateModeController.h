//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "SUSoftwareUpdateControllerDelegate-Protocol.h"

@class NSButton, NSDictionary, NSError, NSImageView, NSPredicate, NSProgressIndicator, NSString, NSTextField, NSView, PKTimeRemainingFormatter, SUSoftwareUpdateController;

@interface SUAppPredicateModeController : NSWindowController <SUSoftwareUpdateControllerDelegate>
{
    NSString *_optionsFilePath;
    NSDictionary *_options;
    NSPredicate *_predicate;
    SUSoftwareUpdateController *_updateController;
    NSError *_showingError;
    PKTimeRemainingFormatter *_timeRemainingFormatter;
    BOOL _didStart;
    NSImageView *_iconView;
    NSButton *_defaultButton;
    NSButton *_alternateButton;
    NSButton *_helpButton;
    NSView *_offerView;
    NSTextField *_titleField;
    NSTextField *_legalTextField;
    NSView *_progressView;
    NSTextField *_installTitleField;
    NSTextField *_installStatusField;
    NSProgressIndicator *_progressBar;
}

- (void).cxx_destruct;
@property NSProgressIndicator *progressBar; // @synthesize progressBar=_progressBar;
@property NSTextField *installStatusField; // @synthesize installStatusField=_installStatusField;
@property NSTextField *installTitleField; // @synthesize installTitleField=_installTitleField;
@property NSView *progressView; // @synthesize progressView=_progressView;
@property NSTextField *legalTextField; // @synthesize legalTextField=_legalTextField;
@property NSTextField *titleField; // @synthesize titleField=_titleField;
@property NSView *offerView; // @synthesize offerView=_offerView;
@property NSButton *helpButton; // @synthesize helpButton=_helpButton;
@property NSButton *alternateButton; // @synthesize alternateButton=_alternateButton;
@property NSButton *defaultButton; // @synthesize defaultButton=_defaultButton;
@property NSImageView *iconView; // @synthesize iconView=_iconView;
- (id)_iconForAlert;
- (void)_finishWithExitType:(int)arg1;
- (void)softwareUpdateWasCancelled:(id)arg1;
- (void)_didPresentInstallErrorWithRecovery:(BOOL)arg1 contextInfo:(void *)arg2;
- (void)softwareUpdate:(id)arg1 didFailWithError:(id)arg2;
- (void)softwareUpdateDidFinish:(id)arg1;
- (BOOL)softwareUpdate:(id)arg1 shouldContinueWithNonProductionCatalogAtURL:(id)arg2;
- (void)softwareUpdate:(id)arg1 didChangeProgress:(double)arg2 currentState:(long long)arg3 estimatedTimeForState:(double)arg4;
- (void)didClickDone:(id)arg1;
- (void)didClickHelpButton:(id)arg1;
- (void)didClickAlternateButton:(id)arg1;
- (void)_didPresentErrorWithRecovery:(BOOL)arg1 contextInfo:(void *)arg2;
- (void)_startUpdateOrShowCantStartError;
- (void)didClickDefaultButton:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)canQuit;
- (void)runAndTerminateWhenDone;
- (void)windowDidLoad;
- (void)dealloc;
- (id)initWithOptionFileAtPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

