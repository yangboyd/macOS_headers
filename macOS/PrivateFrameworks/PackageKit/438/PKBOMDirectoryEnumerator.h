//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSDirectoryEnumerator.h>

@class PKBOM;

@interface PKBOMDirectoryEnumerator : NSDirectoryEnumerator
{
    PKBOM *_pkBom;
    struct _BOMBomEnumerator *_be;
    struct _BOMFSObject *_currentFSO;
}

- (id)fileAttributes;
- (BOOL)isDirectory;
- (void)skipDescendents;
- (void)skipDescendants;
- (id)nextObject;
- (void)dealloc;
- (void)finalize;
- (id)initWithBOM:(id)arg1;

@end

