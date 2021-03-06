//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSButton, NSImageView, NSPopUpButton, NSString, NSTextField, NSWindow, SKAPFSContainerDisk, SKDisk, SUBaseProgressSheet, SUPasswordEntryDialog;

@interface SUAddAPFSVolumeSheetController : NSWindowController
{
    BOOL _validationChangedReserveValue;
    BOOL _validationChangedQuotaValue;
    NSWindow *_parentWindow;
    SUBaseProgressSheet *_addAPFSVolumeProgressSheet;
    NSImageView *_diskIconView;
    NSTextField *_sheetTitle;
    NSTextField *_sheetDescription;
    NSTextField *_volumeName;
    NSPopUpButton *_volumeFormatPopup;
    NSButton *_addButton;
    NSWindow *_sizeOptionsWindow;
    NSTextField *_reserveSizeField;
    NSTextField *_quotaSizeField;
    SUPasswordEntryDialog *_passwordEntrySheet;
    NSString *_password;
    NSString *_passwordHint;
    NSString *_previouslySelectedFormat;
    unsigned long long _reserveSize;
    unsigned long long _quotaSize;
    SKAPFSContainerDisk *_targetDisk;
    SKDisk *_targetVolume;
}

- (void).cxx_destruct;
@property(retain) SKDisk *targetVolume; // @synthesize targetVolume=_targetVolume;
@property(retain) SKAPFSContainerDisk *targetDisk; // @synthesize targetDisk=_targetDisk;
@property BOOL validationChangedQuotaValue; // @synthesize validationChangedQuotaValue=_validationChangedQuotaValue;
@property BOOL validationChangedReserveValue; // @synthesize validationChangedReserveValue=_validationChangedReserveValue;
@property unsigned long long quotaSize; // @synthesize quotaSize=_quotaSize;
@property unsigned long long reserveSize; // @synthesize reserveSize=_reserveSize;
@property(retain) NSString *previouslySelectedFormat; // @synthesize previouslySelectedFormat=_previouslySelectedFormat;
@property(retain) NSString *passwordHint; // @synthesize passwordHint=_passwordHint;
@property(retain) NSString *password; // @synthesize password=_password;
@property(retain) SUPasswordEntryDialog *passwordEntrySheet; // @synthesize passwordEntrySheet=_passwordEntrySheet;
@property __weak NSTextField *quotaSizeField; // @synthesize quotaSizeField=_quotaSizeField;
@property __weak NSTextField *reserveSizeField; // @synthesize reserveSizeField=_reserveSizeField;
@property __weak NSWindow *sizeOptionsWindow; // @synthesize sizeOptionsWindow=_sizeOptionsWindow;
@property __weak NSButton *addButton; // @synthesize addButton=_addButton;
@property __weak NSPopUpButton *volumeFormatPopup; // @synthesize volumeFormatPopup=_volumeFormatPopup;
@property __weak NSTextField *volumeName; // @synthesize volumeName=_volumeName;
@property __weak NSTextField *sheetDescription; // @synthesize sheetDescription=_sheetDescription;
@property __weak NSTextField *sheetTitle; // @synthesize sheetTitle=_sheetTitle;
@property __weak NSImageView *diskIconView; // @synthesize diskIconView=_diskIconView;
@property(retain) SUBaseProgressSheet *addAPFSVolumeProgressSheet; // @synthesize addAPFSVolumeProgressSheet=_addAPFSVolumeProgressSheet;
@property(retain) NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
- (void)closeSizeOptions:(id)arg1;
- (void)quotaSizeChanged:(id)arg1;
- (void)reserveSizeChanged:(id)arg1;
- (void)sizeOptionsClicked:(id)arg1;
- (void)cancelClicked:(id)arg1;
- (void)addClicked:(id)arg1;
- (void)formatChanged:(id)arg1;
- (void)updateVolumeFormatPopup;
- (void)showWindowWithParentWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_validateAddButtonEnabled;
- (void)volumeNameUpdated:(id)arg1;
- (void)windowDidLoad;
- (id)initWithTargetDisk:(id)arg1;

@end

