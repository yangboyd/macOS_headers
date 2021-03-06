//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "NSUserInterfaceValidations-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class MGDocumentViewController, NSString;
@protocol MGVisualContentContainer;

@interface MGDocumentWindowController : NSWindowController <NSWindowDelegate, NSUserInterfaceValidations>
{
    BOOL _observingCurrentMainViewController;
    MGDocumentViewController<MGVisualContentContainer> *_currentMainViewController;
    struct CGRect _savedNonFullScreenWindowFrame;
    struct CGSize _currentNaturalContentSize;
    struct CGPoint _cascadeTopLeftPoint;
    unsigned long long _cascadeIndex;
    double _windowContentScaleFactor;
    struct CGSize _previousDocumentViewSize;
    id _popoverWillShowObserver;
    id _popoverDidCloseObserver;
    id _windowWillEnterFullScreenObserver;
    id _windowDidEnterFullScreenObserver;
    id _windowDidExitFullScreenObserver;
    BOOL _isFullScreen;
    BOOL _isAnimatingFullScreen;
    BOOL _didDisableSuddenTermination;
    BOOL _needsResizeAfterFullScreenExit;
    BOOL _isInInit;
    BOOL _hasAttachedSheet;
    BOOL _inVersionBrowser;
    BOOL _isPopoverShown;
    BOOL _hasUserSize;
    BOOL _hasSetInitialSizeForViewController;
    BOOL _isFloating;
    BOOL _hasPreviousViewControllerSize;
}

+ (id)keyPathsForValuesAffectingContentFullScreenCapable;
+ (id)keyPathsForValuesAffectingContentResizable;
+ (struct CGSize)contentSizeForNaturalContentSize:(struct CGSize)arg1 withContentScaleFactors:(struct CGSize)arg2 viewBackingScaleFactors:(struct CGSize)arg3;
+ (void)initialize;
- (void).cxx_destruct;
- (BOOL)wantsPeriodicDraggingUpdates;
- (void)draggingEnded:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (BOOL)window:(id)arg1 shouldPopUpDocumentPathMenu:(id)arg2;
- (void)windowDidExitVersionBrowser:(id)arg1;
- (void)windowWillEnterVersionBrowser:(id)arg1;
- (void)windowDidEndSheet:(id)arg1;
- (void)windowWillBeginSheet:(id)arg1;
- (void)windowDidMove:(id)arg1;
- (BOOL)isShowingDocumentModalInterface;
- (void)updateTitlebarVisibility;
- (void)updateTitlebarAppearance;
- (void)updateWindowModalState;
- (id)windowTitleForDocumentDisplayName:(id)arg1;
- (void)synchronizeWindowTitleWithDocumentName;
- (void)setFullScreen:(BOOL)arg1 duration:(double)arg2 screen:(id)arg3;
- (void)windowDidFailToExitFullScreen:(id)arg1;
- (void)window:(id)arg1 startCustomAnimationToExitFullScreenWithDuration:(double)arg2;
- (id)customWindowsToExitFullScreenForWindow:(id)arg1;
- (void)windowDidFailToEnterFullScreen:(id)arg1;
- (void)window:(id)arg1 startCustomAnimationToEnterFullScreenOnScreen:(id)arg2 withDuration:(double)arg3;
- (id)customWindowsToEnterFullScreenForWindow:(id)arg1 onScreen:(id)arg2;
- (id)_windowBackgroundColorForFullScreenMode:(id)arg1;
@property(nonatomic, getter=isFullScreen) BOOL fullScreen;
- (void)restoreStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)window:(id)arg1 didDecodeRestorableState:(id)arg2;
- (void)window:(id)arg1 willEncodeRestorableState:(id)arg2;
- (void)toggleFloating:(id)arg1;
@property(nonatomic, getter=isFloating) BOOL floating;
- (void)windowDidResize:(id)arg1;
- (void)decreaseSize:(id)arg1;
- (void)increaseSize:(id)arg1;
- (void)stepWindowSize:(long long)arg1;
- (void)fitToScreen:(id)arg1;
- (void)actualSize:(id)arg1;
- (void)resizeWindowToFitContent;
- (struct CGSize)preferredWindowContentSizeForSuggestedWindowContentSize:(struct CGSize)arg1;
- (struct CGSize)preferredWindowContentSizeForPreviousDocumentViewSize:(struct CGSize)arg1;
- (BOOL)size:(struct CGSize)arg1 isLargerThan:(struct CGSize)arg2;
- (BOOL)size:(struct CGSize)arg1 isSmallerThan:(struct CGSize)arg2;
- (void)setWindowContentSize:(struct CGSize)arg1 centered:(BOOL)arg2 onScreen:(id)arg3 animate:(BOOL)arg4;
- (void)setWindowFrameWithSuggestedTopLeftPoint:(struct CGPoint)arg1 suggestedContentSize:(struct CGSize)arg2 centered:(BOOL)arg3 onScreen:(id)arg4 animate:(BOOL)arg5;
- (BOOL)isContentFullScreenCapable;
- (BOOL)isContentResizable;
- (struct CGSize)naturalWindowContentSizeOnScreen:(id)arg1;
- (struct CGSize)adjustedNaturalContentSize;
- (struct CGSize)maximumWindowContentSizeOnScreen:(id)arg1;
- (struct CGSize)maximumWindowContentSize;
- (struct CGSize)minimumWindowContentSize;
- (struct CGSize)unconstrainedMinimumWindowContentSize;
- (BOOL)shouldCascadeWindows;
- (void)_updateDocumentWindow;
- (void)_removeDocumentViewsFromWindow;
- (void)_addDocumentViewsToWindow;
- (void)_stopObservingMainViewControllerIfNeeded;
- (void)_startObservingMainViewControllerIfNeeded;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setWindow:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)makeCurrentMainViewController:(id)arg1;
@property(readonly, nonatomic) MGDocumentViewController<MGVisualContentContainer> *currentMainViewController;
- (void)dealloc;
- (id)initWithWindow:(id)arg1;
- (struct CGRect)window:(id)arg1 willPositionSheet:(id)arg2 usingRect:(struct CGRect)arg3;
- (BOOL)validateUserInterfaceItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

