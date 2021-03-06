//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "iTermKeyMapper.h"

@class NSString, iTermModifyOtherKeysMapper, iTermStandardKeyMapper;

@interface iTermModifyOtherKeysMapper1 : NSObject <iTermKeyMapper>
{
    iTermStandardKeyMapper *_standard;
    iTermModifyOtherKeysMapper *_modifyOther;
    id <iTermStandardKeyMapperDelegate><iTermModifyOtherKeysMapperDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <iTermStandardKeyMapperDelegate><iTermModifyOtherKeysMapperDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)shouldModifyOtherKeysForEvent:(id)arg1 modifiedEvent:(out id *)arg2;
- (BOOL)optionSendsEscPlusForEvent:(id)arg1;
- (BOOL)keyMapperWantsKeyEquivalent:(id)arg1;
- (void)keyMapperSetEvent:(id)arg1;
- (BOOL)keyMapperShouldBypassPreCocoaForEvent:(id)arg1;
- (id)keyMapperDataForKeyUp:(id)arg1;
- (id)keyMapperDataForPostCocoaEvent:(id)arg1;
- (id)keyMapperStringForPreCocoaEvent:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

