//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class CWInterface, NSButton, NSProgressIndicator, SFAuthorization, WDLogger, WDXPCClient;

@interface WDLogsWindowController : NSWindowController
{
    NSButton *_wifiCheckbox;
    NSProgressIndicator *_wifiProgress;
    NSButton *_systemCheckbox;
    NSProgressIndicator *_systemProgress;
    NSButton *_collectLogsButton;
    NSProgressIndicator *_collectLogsProgress;
    WDLogger *_wdLogger;
    WDXPCClient *_xpcClient;
    SFAuthorization *_authorization;
    CWInterface *_interface;
}

@property(retain) CWInterface *interface; // @synthesize interface=_interface;
@property(retain) SFAuthorization *authorization; // @synthesize authorization=_authorization;
@property(retain) WDXPCClient *xpcClient; // @synthesize xpcClient=_xpcClient;
- (void).cxx_destruct;
- (void)onCollectLogs:(id)arg1;
- (void)onRefresh:(id)arg1;
- (void)__refresh;
- (void)onSharingShowButton:(id)arg1;
- (void)onOpenDirectoryShowButton:(id)arg1;
- (void)onDNSShowButton:(id)arg1;
- (void)onDHCPShowButton:(id)arg1;
- (void)onWiFiShowButton:(id)arg1;
- (void)onSystemCheckbox:(id)arg1;
- (void)onWiFiCheckbox:(id)arg1;
- (void)showWindow:(id)arg1;

@end

