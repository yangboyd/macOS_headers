//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iCloudDriveCore/BRCDumper.h>

@interface BRCTermDumper : BRCDumper
{
    struct __sFILE *_file;
    unsigned long long _termWidth;
    unsigned long long _usedTermWidth;
    int _curAttrs;
    int _curFg;
    int _curBg;
    BOOL _isatty;
    BOOL _useColor;
    BOOL _supportsEscapeSequences;
}

+ (void)execPagerOnFileFd:(int)arg1;
+ (void)setupPagerForFd:(int)arg1;
@property(readonly, nonatomic) BOOL supportsEscapeSequences; // @synthesize supportsEscapeSequences=_supportsEscapeSequences;
@property(readonly, nonatomic) BOOL useColor; // @synthesize useColor=_useColor;
@property(readonly, nonatomic) BOOL isatty; // @synthesize isatty=_isatty;
- (void)write:(const char *)arg1;
- (void)put:(id)arg1;
- (void)puts:(const char *)arg1;
- (void)puts:(const char *)arg1 len:(unsigned long long)arg2;
- (void)_putsAndCrop:(const char *)arg1 len:(unsigned long long)arg2;
- (void)dumpProgress:(id)arg1;
- (void)forgetRemainingSpace;
- (unsigned long long)remainingSpace;
- (void)endLine;
- (void)startNewLine;
- (void)cursorGotoLineStart;
- (void)cursorLeft:(unsigned int)arg1;
- (void)cursorRight:(unsigned int)arg1;
- (void)cursorDown:(unsigned int)arg1;
- (void)cursorUp:(unsigned int)arg1;
- (void)cursorRestore;
- (void)cursorSave;
- (void)eraseScreenUp;
- (void)eraseScreenDown;
- (void)eraseLine;
- (void)eraseStartOfLine;
- (void)eraseEndOfLine;
- (void)reset;
- (void)startFgColor:(int)arg1 bgColor:(int)arg2 attr:(int)arg3;
- (id)stringForReset;
- (id)startStringForFgColor:(int)arg1 bgColor:(int)arg2 attr:(int)arg3;
- (unsigned long long)_startInCString:(char [256])arg1 fgColor:(int)arg2 bgColor:(int)arg3 attr:(int)arg4;
- (void)startPager;
- (id)initWithFd:(int)arg1 forceColor:(BOOL)arg2;

@end

