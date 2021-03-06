//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IPXBrowserControllerBarsHelperDataSource-Protocol.h"
#import "IPXPhotosGridSliderController-Protocol.h"
#import "NSTouchBarProvider-Protocol.h"
#import "PXChangeObserver-Protocol.h"

@class IPXBrowserControllerBarsHelper, IPXPhotosGridSliderController, IPXPhotosViewController, IPXWorkspaceController, IPXZoomButtonItem, NSString, NSTouchBar, PXPhotosContentController, PXPhotosViewConfiguration, PXPhotosViewModel, UXBarButtonItem;
@protocol PXBrowserSelectionSnapshot;

__attribute__((visibility("hidden")))
@interface IPXPhotosBarsController : NSObject <IPXPhotosGridSliderController, PXChangeObserver, IPXBrowserControllerBarsHelperDataSource, NSTouchBarProvider>
{
    IPXPhotosGridSliderController *_sliderController;
    IPXZoomButtonItem *_zoomButtonItem;
    UXBarButtonItem *_toggleButtonItem;
    UXBarButtonItem *_progressButtonItem;
    IPXPhotosViewController *_photosViewController;
    PXPhotosContentController *_contentController;
    PXPhotosViewModel *_viewModel;
    IPXBrowserControllerBarsHelper *_barsHelper;
    PXPhotosViewConfiguration *_configuration;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PXPhotosViewConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) IPXBrowserControllerBarsHelper *barsHelper; // @synthesize barsHelper=_barsHelper;
@property(readonly, nonatomic) PXPhotosViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) __weak PXPhotosContentController *contentController; // @synthesize contentController=_contentController;
@property(readonly, nonatomic) __weak IPXPhotosViewController *photosViewController; // @synthesize photosViewController=_photosViewController;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
@property(readonly) NSTouchBar *touchBar;
@property(readonly, nonatomic) id <PXBrowserSelectionSnapshot> selectionSnapshot;
@property(readonly, nonatomic) IPXWorkspaceController *workspaceController;
- (void)photosGridSliderController:(id)arg1 didChangeContinuousValue:(double)arg2 finished:(BOOL)arg3;
- (void)photosGridSliderController:(id)arg1 didChangeValue:(unsigned long long)arg2;
- (void)_updateZoomSlider;
- (void)_updateTrailingBarButtonItems;
- (void)_updateLeadingBarButtonItems;
- (void)_updateAllBars;
- (id)initWithPhotosViewController:(id)arg1 contentController:(id)arg2 viewModel:(id)arg3 configuration:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

