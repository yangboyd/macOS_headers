//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface iLifeDebug : NSObject
{
}

+ (void)loadOnce;
+ (void)evaluateDebugAssertBehaviorSettings;
+ (BOOL)handledAsDebugAssertBehaviorURL:(id)arg1;
+ (void)readDebugAssertBehaviorFromDisk;
+ (void)writeDebugAssertBehaviorStringToDisk:(id)arg1;
+ (void)writeDebugAssertBehaviorValueToDisk:(int)arg1;
+ (void)removeDebugAssertBehaviorFile;
+ (id)debugAssertBehaviorFilePath;

@end

