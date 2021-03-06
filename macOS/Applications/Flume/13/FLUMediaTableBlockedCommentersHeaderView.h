//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FLUMediaTableHeaderView.h"

#import "FLUTextFieldDelegate.h"

@class FLUBlurView, FLUBorderView, FLUHoverButton, FLUImageView, FLUTextField, FLUTextFieldLabel, NSString, NSTimer;

@interface FLUMediaTableBlockedCommentersHeaderView : FLUMediaTableHeaderView <FLUTextFieldDelegate>
{
    id <FLUMediaTableBlockedCommentersHeaderViewDelegate> _delegate;
    FLUBlurView *_blurView;
    FLUTextFieldLabel *_label;
    FLUTextField *_searchTextField;
    FLUImageView *_searchImageView;
    FLUHoverButton *_clearButton;
    FLUBorderView *_borderView;
    NSTimer *_searchTimer;
}

+ (double)viewHeight;
@property(retain, nonatomic) NSTimer *searchTimer; // @synthesize searchTimer=_searchTimer;
@property(retain, nonatomic) FLUBorderView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) FLUHoverButton *clearButton; // @synthesize clearButton=_clearButton;
@property(retain, nonatomic) FLUImageView *searchImageView; // @synthesize searchImageView=_searchImageView;
@property(retain, nonatomic) FLUTextField *searchTextField; // @synthesize searchTextField=_searchTextField;
@property(retain, nonatomic) FLUTextFieldLabel *label; // @synthesize label=_label;
@property(retain, nonatomic) FLUBlurView *blurView; // @synthesize blurView=_blurView;
@property(nonatomic) __weak id <FLUMediaTableBlockedCommentersHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)focusSearchField;
- (BOOL)clearSearchField;
- (id)searchTerm;
- (id)labelAttributes;
- (void)drawRect:(struct CGRect)arg1;
- (void)performSearch;
- (void)refreshView;
- (void)didPressClearButton:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)controlTextDidChange:(id)arg1;
- (void)didChangeDesignModeOption:(id)arg1;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)updateFrames;
- (void)setFrame:(struct CGRect)arg1;
- (void)setupAccessibility;
- (void)dealloc;
- (void)setupWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

