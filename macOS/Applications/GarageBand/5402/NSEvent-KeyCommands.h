//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSEvent.h>

@interface NSEvent (KeyCommands)
- (BOOL)allowedToPostAUServerEvent;
- (BOOL)matchesBefehlID:(short)arg1;
- (short)befehlIDForSampler;
- (short)globalBefehlID;
- (short)befehlIDForFensterKind:(unsigned short)arg1;
- (short)befehlIDForMode:(int)arg1;
- (const struct BEFEHL *)globalBefehl;
- (const struct BEFEHL *)befehlForFensterKind:(unsigned short)arg1;
- (const struct BEFEHL *)befehlForMode:(int)arg1;
@end

