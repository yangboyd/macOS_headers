//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSKMessage, CSKMessagesViewController, NSArray, NSIndexSet;

@protocol CSKMessagesViewControllerDataSource <NSObject>
- (unsigned long long)numberOfRowsInMessagesViewController:(CSKMessagesViewController *)arg1;
- (NSArray *)messagesViewController:(CSKMessagesViewController *)arg1 messagesAtRows:(NSIndexSet *)arg2;
- (CSKMessage *)messagesViewController:(CSKMessagesViewController *)arg1 messageAtRow:(unsigned long long)arg2;
@end

