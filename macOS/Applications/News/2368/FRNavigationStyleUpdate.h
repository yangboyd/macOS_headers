//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;
@protocol FCFeedTheming;

@interface FRNavigationStyleUpdate : NSObject
{
    BOOL _transparentNavigationBarEnabled;
    BOOL _shouldUseMultiColorStatusBar;
    UIColor *_contentBackgroundColor;
    long long _userInterfaceStyle;
    id <FCFeedTheming> _feedTheme;
}

@property(retain, nonatomic) id <FCFeedTheming> feedTheme; // @synthesize feedTheme=_feedTheme;
@property(nonatomic) long long userInterfaceStyle; // @synthesize userInterfaceStyle=_userInterfaceStyle;
@property(nonatomic) BOOL shouldUseMultiColorStatusBar; // @synthesize shouldUseMultiColorStatusBar=_shouldUseMultiColorStatusBar;
@property(nonatomic) BOOL transparentNavigationBarEnabled; // @synthesize transparentNavigationBarEnabled=_transparentNavigationBarEnabled;
@property(retain, nonatomic) UIColor *contentBackgroundColor; // @synthesize contentBackgroundColor=_contentBackgroundColor;
- (void).cxx_destruct;

@end

