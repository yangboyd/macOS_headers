//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface AVCaptureOperationDescriptorQueueItem : NSObject
{
    id <AVCaptureOperationDescriptor> _operationDescriptor;
    CDStruct_1b6d18a9 _operationTime;
}

- (CDStruct_1b6d18a9)operationTime;
- (id)operationDescriptor;
- (void)dealloc;
- (id)initWithOperationDescriptor:(id)arg1 operationTime:(CDStruct_1b6d18a9)arg2;
- (id)init;

@end

