//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, NSWindow;
@protocol IPXLibrarySizeCheckerDelegate;

__attribute__((visibility("hidden")))
@interface IPXLibrarySizeChecker : NSObject
{
    unsigned long long _librarySize;
    NSURL *_libraryURL;
    NSWindow *_windowForSheets;
    id <IPXLibrarySizeCheckerDelegate> _delegate;
}

- (void).cxx_destruct;
@property __weak id <IPXLibrarySizeCheckerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSWindow *windowForSheets; // @synthesize windowForSheets=_windowForSheets;
@property(retain) NSURL *libraryURL; // @synthesize libraryURL=_libraryURL;
@property unsigned long long librarySize; // @synthesize librarySize=_librarySize;
- (void)_requestLibrarySizeAndRepairPermissionsOnFailure:(BOOL)arg1;
- (void)_handleLibrarySizeRequestReplyWithOriginalResourceBytes:(long long)arg1 error:(id)arg2 repairPermissionsOnFailure:(BOOL)arg3;
- (void)_repairPermissions;
- (void)_handleRepairPermissionsReplyWithRepairPerformed:(BOOL)arg1 error:(id)arg2;
- (void)_runAppModalAlert;
- (void)checkSize;
- (id)initWithLibraryAtURL:(id)arg1 windowForSheets:(id)arg2 delegate:(id)arg3;

@end

