//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MacRAPBaseTableViewController.h"

#import "MacRAPCheckmarkCellDelegate-Protocol.h"
#import "MacRAPTokenTableViewCellDelegate-Protocol.h"
#import "RAPAddHoursDelegate-Protocol.h"
#import "RAPCancellableTableViewCellDelegate-Protocol.h"
#import "RAPCategoryChooserDelegate-Protocol.h"
#import "RAPCorrectionQuestionUpdateRequestDelegate-Protocol.h"
#import "RAPInstrumentableTarget-Protocol.h"
#import "RAPSearchAutocompleteDelegate-Protocol.h"
#import "RAPSwitchTableViewCellDelegate-Protocol.h"
#import "RAPTextCellDelegate-Protocol.h"
#import "UGCPhotoCarouselRequestDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSString, RAPPhotoPickerController, RAPPlaceCorrectionsDataSource, RAPPlaceCorrectionsQuestion, RAPReport, ReportAProblemCategoryChooserViewController, UGCPhotoCarouselController, UIBarButtonItem;

__attribute__((visibility("hidden")))
@interface RAPPlaceCorrectionsTableViewController : MacRAPBaseTableViewController <RAPSearchAutocompleteDelegate, UIScrollViewDelegate, RAPInstrumentableTarget, RAPCategoryChooserDelegate, RAPTextCellDelegate, RAPSwitchTableViewCellDelegate, RAPCorrectionQuestionUpdateRequestDelegate, RAPCancellableTableViewCellDelegate, RAPAddHoursDelegate, UGCPhotoCarouselRequestDelegate, MacRAPTokenTableViewCellDelegate, MacRAPCheckmarkCellDelegate>
{
    RAPReport *_report;
    RAPPlaceCorrectionsQuestion *_question;
    CDUnknownBlockType _completion;
    UIBarButtonItem *_sendButtonItem;
    RAPPhotoPickerController *_photoPicker;
    RAPPlaceCorrectionsDataSource *_dataSource;
    ReportAProblemCategoryChooserViewController *_categoryChooserViewController;
    UGCPhotoCarouselController *_photoEditorController;
    BOOL _hasUpdateAddressFromCoordinate;
    long long _currentAutocompleteSelectionKind;
}

- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)macFooterViewRightButtonTapped:(id)arg1;
- (void)macFooterViewLeftButtonTapped:(id)arg1;
- (BOOL)_shouldPerformReverseGeocode;
- (BOOL)_shouldUpdateCoordinateFromAddressAutocomplete;
- (void)_presentAutocompleteViewController:(id)arg1 forItemKind:(long long)arg2;
- (void)_presentAccessoryViewController:(id)arg1;
- (void)_locationPickerSelectedCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)didChangeCenterCoordinateWithSender:(id)arg1 centerCoordinate:(struct CLLocationCoordinate2D)arg2;
- (void)presentLocationUIWithSender:(id)arg1 allowEditingEntryPoints:(BOOL)arg2;
- (void)presentCategoriesUIWithSender:(id)arg1 initialCategories:(id)arg2;
- (void)presentContainmentUIWithSender:(id)arg1 isParentContainment:(BOOL)arg2 currentlySelectedMUIDs:(id)arg3;
- (void)presentAddressUIWithSender:(id)arg1;
- (void)presentHoursUIWithSender:(id)arg1;
- (void)presentSeeMoreUIWithSender:(id)arg1 mapItem:(id)arg2;
- (void)presentPrivacyViewControllerWithSender:(id)arg1;
- (void)hoursTableViewController:(id)arg1 finishedSelectingHours:(id)arg2;
- (void)categoryChooserViewController:(id)arg1 didReceiveSelectedCategories:(id)arg2;
- (void)_captureAnalyticsForCancelOfKind:(long long)arg1;
- (void)deleteCell:(id)arg1 ofKind:(long long)arg2;
- (void)cancelCell:(id)arg1 ofKind:(long long)arg2;
- (void)_handleCorrectableItemKind:(long long)arg1 withChangedValue:(BOOL)arg2;
- (void)_captureToggleAnalyticsForItemKind:(long long)arg1;
- (void)switchTableViewCell:(id)arg1 changedValue:(BOOL)arg2;
- (void)checkmarkTableViewCell:(id)arg1 isSelected:(BOOL)arg2;
- (void)valueForCorrectableItemKind:(long long)arg1 changedTo:(id)arg2;
- (void)rapSearchAutocompleteViewController:(id)arg1 finishedPickingAutocompleteResult:(id)arg2 isAutocompleteResult:(BOOL)arg3;
- (void)photoCarouselController:(id)arg1 requestsRemovingImageForIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)photoCarouselControllerRequestsAddingNewPhoto:(id)arg1;
- (id)_photoPicker;
- (void)_cancel;
- (void)_send;
- (id)_sendButtonItem;
- (id)_dataSource;
- (id)initWithReport:(id)arg1 question:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)_captureUserAction:(int)arg1;
@property(readonly, nonatomic) int analyticTarget;

// Remaining properties
@property(readonly, nonatomic) int backAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

