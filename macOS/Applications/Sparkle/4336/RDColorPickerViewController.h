//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NSBox, NSButton, NSColorWell, NSLayoutConstraint, NSMutableArray, NSObject<RDTouchBarProviderProtocol>, NSTextField, RDAlphaView, RDBrightnessSaturationView, RDColorManager, RDCurrentColorSwatchView, RDHueView, RDSwatchContainer;

@interface RDColorPickerViewController : NSViewController
{
    BOOL _editing;
    BOOL _editMode;
    RDSwatchContainer *_swatchContainer;
    NSBox *_containerBox;
    NSButton *_editButton;
    RDBrightnessSaturationView *_brightnessSaturationView;
    RDHueView *_hueView;
    RDAlphaView *_alphaView;
    RDCurrentColorSwatchView *_currentColorView;
    NSLayoutConstraint *_swatchContainerViewHeight;
    NSTextField *_redTextField;
    NSTextField *_greenTextField;
    NSTextField *_blueTextField;
    NSTextField *_hueTextField;
    NSTextField *_saturationTextField;
    NSTextField *_brightnessTextField;
    NSTextField *_hexTextField;
    NSTextField *_alphaTextField;
    NSColorWell *_systemColorWell;
    CDUnknownBlockType _toggleEditing;
    CDUnknownBlockType _pickColor;
    RDColorManager *_colorManager;
    long long _selectedColor;
    NSMutableArray *_swatchViews;
    id _previousColorValue;
    NSObject<RDTouchBarProviderProtocol> *_touchBarProvider;
}

@property(nonatomic) __weak NSObject<RDTouchBarProviderProtocol> *touchBarProvider; // @synthesize touchBarProvider=_touchBarProvider;
@property(nonatomic) BOOL editMode; // @synthesize editMode=_editMode;
@property(nonatomic) BOOL editing; // @synthesize editing=_editing;
@property(retain, nonatomic) id previousColorValue; // @synthesize previousColorValue=_previousColorValue;
@property(retain, nonatomic) NSMutableArray *swatchViews; // @synthesize swatchViews=_swatchViews;
@property(nonatomic) long long selectedColor; // @synthesize selectedColor=_selectedColor;
@property(retain, nonatomic) RDColorManager *colorManager; // @synthesize colorManager=_colorManager;
@property(copy, nonatomic) CDUnknownBlockType pickColor; // @synthesize pickColor=_pickColor;
@property(copy, nonatomic) CDUnknownBlockType toggleEditing; // @synthesize toggleEditing=_toggleEditing;
@property(nonatomic) __weak NSColorWell *systemColorWell; // @synthesize systemColorWell=_systemColorWell;
@property(nonatomic) __weak NSTextField *alphaTextField; // @synthesize alphaTextField=_alphaTextField;
@property(nonatomic) __weak NSTextField *hexTextField; // @synthesize hexTextField=_hexTextField;
@property(nonatomic) __weak NSTextField *brightnessTextField; // @synthesize brightnessTextField=_brightnessTextField;
@property(nonatomic) __weak NSTextField *saturationTextField; // @synthesize saturationTextField=_saturationTextField;
@property(nonatomic) __weak NSTextField *hueTextField; // @synthesize hueTextField=_hueTextField;
@property(nonatomic) __weak NSTextField *blueTextField; // @synthesize blueTextField=_blueTextField;
@property(nonatomic) __weak NSTextField *greenTextField; // @synthesize greenTextField=_greenTextField;
@property(nonatomic) __weak NSTextField *redTextField; // @synthesize redTextField=_redTextField;
@property(nonatomic) __weak NSLayoutConstraint *swatchContainerViewHeight; // @synthesize swatchContainerViewHeight=_swatchContainerViewHeight;
@property(nonatomic) __weak RDCurrentColorSwatchView *currentColorView; // @synthesize currentColorView=_currentColorView;
@property(nonatomic) __weak RDAlphaView *alphaView; // @synthesize alphaView=_alphaView;
@property(nonatomic) __weak RDHueView *hueView; // @synthesize hueView=_hueView;
@property(nonatomic) __weak RDBrightnessSaturationView *brightnessSaturationView; // @synthesize brightnessSaturationView=_brightnessSaturationView;
@property(nonatomic) __weak NSButton *editButton; // @synthesize editButton=_editButton;
@property(nonatomic) __weak NSBox *containerBox; // @synthesize containerBox=_containerBox;
@property(nonatomic) __weak RDSwatchContainer *swatchContainer; // @synthesize swatchContainer=_swatchContainer;
- (void).cxx_destruct;
- (void)systemColorChanged:(id)arg1;
- (void)updateAlpha:(id)arg1;
- (void)updateSB:(id)arg1;
- (void)updateHex:(id)arg1;
- (void)updateRGB:(id)arg1;
- (id)touchBar;
- (void)displayInEditingState:(BOOL)arg1 forPopover:(id)arg2 animated:(BOOL)arg3;
- (void)displayInEditingState:(BOOL)arg1 forPopover:(id)arg2 animated:(BOOL)arg3 touchBarProvider:(id)arg4;
- (void)updateTextFields;
- (void)reflectColor;
- (void)toggleEditing:(id)arg1;
- (void)setNewColor:(id)arg1;
- (void)updateColorsFinal:(BOOL)arg1;
- (void)awakeFromNib;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

