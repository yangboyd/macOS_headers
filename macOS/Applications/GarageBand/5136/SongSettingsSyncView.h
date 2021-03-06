//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ModuleController.h"

#import "MAIdleCallback.h"
#import "NSMenuDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class LogicSegmentedTimecodeScrubberBridge, MAKitPopUpButton, MAKitTabView, MAKitTableView, MATextField, NSButton, NSMatrix, NSPopUpButton, NSSlider, NSString, NSTextField, SegmentedClockScrubber, SegmentedNumberScrubber;

@interface SongSettingsSyncView : ModuleController <MAIdleCallback, NSMenuDelegate, NSTableViewDelegate, NSTableViewDataSource>
{
    MAKitTabView *syncTabView;
    NSPopUpButton *syncSyncMode;
    NSButton *syncAutoEnableExtSync;
    NSPopUpButton *syncFrameRate;
    NSButton *syncAutoDetectMTCFormat;
    NSPopUpButton *syncValidateMTC;
    SegmentedClockScrubber *syncPlayBarPos;
    LogicSegmentedTimecodeScrubberBridge *syncPlaySMPTE;
    NSButton *syncEnableSepSMPTEView;
    SegmentedClockScrubber *syncDisplayedBar;
    LogicSegmentedTimecodeScrubberBridge *syncDisplayedSMPTE;
    NSTextField *syncAudioMTCNominal;
    NSSlider *syncAudioMTCCurrent;
    NSTextField *syncAudioRateNominal;
    NSSlider *syncAudioRateCurrent;
    NSSlider *syncAudioRateDeviation;
    NSPopUpButton *syncAudioModePPC;
    MAKitPopUpButton *syncMidiClockMode;
    SegmentedClockScrubber *syncMidiClockStartPosition;
    SegmentedNumberScrubber *syncMidiClockStartLength;
    MATextField *syncMidiClockStartRightLabel;
    NSButton *syncTxMMC;
    NSButton *syncListenToMMCInput;
    MAKitTableView *syncMidiTableView;
    NSButton *syncMidiSaveAsDefault;
    NSTextField *syncUnRecognized;
    NSMatrix *syncSMPTEMode;
    NSMatrix *syncSMPTEType;
    NSButton *syncSMPTERefresh;
    NSSlider *syncFreewheel;
    SegmentedNumberScrubber *syncFreewheelNum;
    NSPopUpButton *syncTVFormat;
    NSPopUpButton *syncVITCLine1;
    NSPopUpButton *syncVITCLine2;
    NSSlider *syncTCHorPos;
    NSSlider *syncTCVertPos;
    NSPopUpButton *syncTCSize;
    NSPopUpButton *syncTCStyle;
}

- (void)click_syncPreferences:(id)arg1;
- (void)change_syncListenToMMCInput:(id)arg1;
- (void)change_syncTxMMC:(id)arg1;
- (void)change_syncMidiClockStartLength:(id)arg1;
- (void)change_syncMidiClockStartPosition:(id)arg1;
- (void)change_syncMidiClockMode:(id)arg1;
- (void)change_syncAudioMode:(id)arg1;
- (void)change_syncDisplayedSMPTE:(id)arg1;
- (void)change_syncDisplayedBar:(id)arg1;
- (void)change_syncEnableSepSMPTEView:(id)arg1;
- (void)change_syncPlaySMPTE:(id)arg1;
- (void)change_syncPlayBarPos:(id)arg1;
- (void)change_syncValidateMTC:(id)arg1;
- (void)change_syncAutoDetectMTCFormat:(id)arg1;
- (void)change_syncFrameRate:(id)arg1;
- (void)change_syncAutoEnableExtSync:(id)arg1;
- (void)change_syncSyncMode:(id)arg1;
- (void)showUnsupportedMTCFrameRateWarningIfNecessary;
- (void)idleCallback;
- (void)handleUM_CHTEMPO:(id)arg1;
- (void)handleUM_BLINK:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)makeViewWithIdentifier:(id)arg1;
- (id)quickHelpIDForControlWithIdentifier:(id)arg1;
- (void)addModeItemsToPopUpButton:(id)arg1;
- (void)updateDestinationItemsToPopUpButton:(id)arg1;
- (void)tableViewAction:(id)arg1;
- (void)click_syncMidiSaveAsDefault:(id)arg1;
- (void)setMidiSyncMMC:(BOOL)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)midiSyncMMCEnabledAtIndex:(unsigned long long)arg1;
- (BOOL)midiSyncMMCAtIndex:(unsigned long long)arg1;
- (void)setMidiSyncMTC:(BOOL)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)midiSyncMTCEnabledAtIndex:(unsigned long long)arg1;
- (BOOL)midiSyncMTCAtIndex:(unsigned long long)arg1;
- (void)setMidiSyncPDC:(BOOL)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)midiSyncPDCEnabledAtIndex:(unsigned long long)arg1;
- (BOOL)midiSyncPDCAtIndex:(unsigned long long)arg1;
- (void)setMidiSyncDelay:(double)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)midiSyncDelayEnabledAtIndex:(unsigned long long)arg1;
- (double)midiSyncDelayAtIndex:(unsigned long long)arg1;
- (void)setMidiSyncClock:(BOOL)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)midiSyncClockEnabledAtIndex:(unsigned long long)arg1;
- (BOOL)midiSyncClockAtIndex:(unsigned long long)arg1;
- (void)setMidiSyncDestination:(long long)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)midiSyncDestinationEnabledAtIndex:(unsigned long long)arg1;
- (long long)midiSyncDestinationAtIndex:(unsigned long long)arg1;
- (int)destinationOffTag;
- (void)updateSyncMIDIUI;
- (void)updateSyncOptMIDI;
- (void)updateSyncAudioUI;
- (void)updateSyncAudioMode:(id)arg1;
- (void)handleUM_FORMAT:(id)arg1;
- (void)handleUM_SYNC:(id)arg1;
- (void)handleUM_CHEV:(id)arg1;
- (void)handleUM_FRAMERATE:(id)arg1;
- (void)updateSyncGeneralSMPTEUI;
- (void)updateClockScrubbers;
- (void)updateSyncGeneralUI;
- (void)updateSyncFrameRate;
- (void)updateSyncOptGeneral;
- (void)updateUI;
- (void)populateSmpteFramesRatePopup;
- (void)awakeFromNib;
- (void)menu:(id)arg1 willHighlightItem:(id)arg2;
- (id)modeMenuQuickHelpIDWithTag:(int)arg1;
- (void)willDisappear;
- (void)willAppear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

