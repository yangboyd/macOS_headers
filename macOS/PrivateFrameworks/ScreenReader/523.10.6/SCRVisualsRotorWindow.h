//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AXVTitleWindow, NSString;

__attribute__((visibility("hidden")))
@interface SCRVisualsRotorWindow : NSObject
{
    BOOL _enabled;
    AXVTitleWindow *__titleWindow;
}

@property(retain, nonatomic, setter=_setTitleWindow:) AXVTitleWindow *_titleWindow; // @synthesize _titleWindow=__titleWindow;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (id)_titleWIndow;
- (void)setBaseFontSize:(double)arg1;
@property(copy, nonatomic) NSString *rotorTitle;
- (void)hideRotorWindow;
- (void)showRotorWindow;
- (id)init;

@end

