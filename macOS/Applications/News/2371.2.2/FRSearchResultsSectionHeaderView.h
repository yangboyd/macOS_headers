//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NFLFeedSettings, NSString, UILabel;

@interface FRSearchResultsSectionHeaderView : UIView
{
    NSString *_text;
    unsigned long long _searchResultType;
    NFLFeedSettings *_feedSettings;
    UILabel *_titleLabel;
    UIView *_backgroundView;
}

@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NFLFeedSettings *feedSettings; // @synthesize feedSettings=_feedSettings;
@property(readonly, nonatomic) unsigned long long searchResultType; // @synthesize searchResultType=_searchResultType;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (BOOL)accessibilityActivate;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (id)accessibilityElements;
- (long long)accessibilityElementCount;
- (BOOL)isAccessibilityElement;
- (void)updateFonts;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)initWithSearchResultsType:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

