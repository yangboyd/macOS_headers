//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCaptionGroupInternal, NSArray;

@interface AVCaptionGroup : NSObject
{
    AVCaptionGroupInternal *_internal;
}

- (struct opaqueCMSampleBuffer *)copySampleBufferWithError:(id *)arg1;
@property(readonly, nonatomic) NSArray *captions;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRange;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (id)initWithTimeRange:(CDStruct_e83c9415)arg1;
- (id)initWithCaptions:(id)arg1 timeRange:(CDStruct_e83c9415)arg2;

@end

