//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSPAbstractMutableLargeArraySegment.h"

@interface TSPMutableLargeStringArraySegment : TSPAbstractMutableLargeArraySegment
{
}

- (void)loadFromMessage:(const struct LargeStringArraySegment *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToMessage:(struct LargeStringArraySegment *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (unsigned long long)estimatedByteSizeOfElement:(id)arg1;

@end

