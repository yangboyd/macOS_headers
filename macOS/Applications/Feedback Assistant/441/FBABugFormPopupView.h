//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBABugFormControlView.h"

@class NSPopUpButton;

@interface FBABugFormPopupView : FBABugFormControlView
{
    BOOL _hasControlConstraints;
    NSPopUpButton *_control;
}

- (void).cxx_destruct;
@property BOOL hasControlConstraints; // @synthesize hasControlConstraints=_hasControlConstraints;
@property(retain) NSPopUpButton *control; // @synthesize control=_control;
- (void)updateWithChoices:(id)arg1;
- (void)didGetClientSideResolvedNotification:(id)arg1;
- (void)updateConstraints;
- (void)popUpMenuDidChange:(id)arg1;
- (void)focus;
- (void)updatePopUpFromAnswer;
- (void)setAnswer:(id)arg1;
- (void)setQuestion:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

