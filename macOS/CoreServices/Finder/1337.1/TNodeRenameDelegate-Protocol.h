//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, TRenameOperation;

@protocol TNodeRenameDelegate <NSObject>
- (void)titleOfNode:(const struct TFENode *)arg1 didChangeTo:(NSString *)arg2 renameOp:(TRenameOperation *)arg3;
@end

