//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HIDDevice, Headset;

@protocol HeadsetManagerDelegate <NSObject>

@optional
- (void)headsetDeattach:(HIDDevice *)arg1;
- (void)headsetAttach:(Headset *)arg1;
- (void)refreshConnection:(int)arg1;
@end

