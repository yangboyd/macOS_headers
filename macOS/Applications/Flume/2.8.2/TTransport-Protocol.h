//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol TTransport <NSObject>
- (BOOL)flush:(id *)arg1;
- (BOOL)write:(const char *)arg1 offset:(unsigned int)arg2 length:(unsigned int)arg3 error:(id *)arg4;
- (unsigned int)readAvail:(char *)arg1 offset:(unsigned int)arg2 maxLength:(unsigned int)arg3 error:(id *)arg4;
- (BOOL)readAll:(char *)arg1 offset:(unsigned int)arg2 length:(unsigned int)arg3 error:(id *)arg4;
@end

