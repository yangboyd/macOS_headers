//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTGenericSettingsViewController.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UITapGestureRecognizer, UITextField;

@interface MTiOSGenericSettingsViewController : MTGenericSettingsViewController <UITextFieldDelegate>
{
    UITextField *_activeTextField;
    UITapGestureRecognizer *_tap;
}

- (void).cxx_destruct;
- (id)optionsTableViewControllerWithOption:(id)arg1;
- (void)dismissKeyboard:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)setCell:(id)arg1 enabled:(BOOL)arg2 withDescription:(id)arg3;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2 withDescription:(id)arg3 inGroupWithIdentifier:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

