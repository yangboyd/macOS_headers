//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTouchBarViewController.h"

@class NSArray, TArrangeByMenuController, TNodeViewSettings;

@interface TTouchBarSortByViewController : TTouchBarViewController
{
    TArrangeByMenuController *_arrangeByMenuController;
    struct TKeyValueObserver _sortByObserver;
    struct vector<TKeyValueBinder, std::__1::allocator<TKeyValueBinder>> _hiddenBinders;
    NSArray *_buttonConstraints;
    TNodeViewSettings *_viewSettings;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) TNodeViewSettings *viewSettings; // @synthesize viewSettings=_viewSettings;
- (void)fillSortButtonsStackView;
- (void)viewDidLayout;
- (id)makeTouchBarView;
- (void)aboutToTearDown;
- (void)configureView;

@end

