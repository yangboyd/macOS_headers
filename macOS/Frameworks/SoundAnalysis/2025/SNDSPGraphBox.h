//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SNDSPGraphBox : NSObject
{
    struct Box *_box;
    shared_ptr_f6ac7592 _graph;
}

@property(readonly, nonatomic) struct Box *box; // @synthesize box=_box;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)setParameter:(float)arg1 forID:(unsigned int)arg2 scope:(unsigned int)arg3 element:(unsigned int)arg4 bufferOffset:(long long)arg5;
- (BOOL)hasParameter:(unsigned int)arg1 scope:(unsigned int)arg2 element:(unsigned int)arg3;
- (BOOL)getParameter:(float *)arg1 forID:(unsigned int)arg2 scope:(unsigned int)arg3 element:(unsigned int)arg4;
- (BOOL)getParameterInfo:(struct AudioUnitParameterInfo *)arg1 forID:(unsigned int)arg2 inScope:(unsigned int)arg3;
- (BOOL)getParameterList:(unsigned int *)arg1 numParameterIDs:(long long *)arg2 inScope:(unsigned int)arg3;
@property(readonly, nonatomic) long long numOutputs;
@property(readonly, nonatomic) long long numInputs;
@property(readonly, nonatomic) NSString *name;
- (BOOL)stopInjectingPort:(long long)arg1;
- (BOOL)startInjectingPort:(long long)arg1 toFile:(id)arg2 shouldLoop:(BOOL)arg3;
- (BOOL)stopRecordingPort:(long long)arg1;
- (BOOL)startRecordingPort:(long long)arg1 toFile:(id)arg2;
- (id)initWithBox:(struct Box *)arg1 fromGraph:(shared_ptr_f6ac7592)arg2;
- (id)init;

@end

