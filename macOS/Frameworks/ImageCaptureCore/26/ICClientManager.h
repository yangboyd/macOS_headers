//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ICClientManager : NSObject
{
    BOOL _clientAdded;
    NSMutableArray *_clients;
    struct os_unfair_lock_s _clientsLock;
    id _delegate;
}

@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *clients; // @synthesize clients=_clients;
- (id)allClientConnections;
- (id)clientConnectionsMonitoringObjectID:(id)arg1;
- (id)clientConnectionsMonitoringNotification:(id)arg1;
- (void)setClientWithPID:(id)arg1 usingObjectHandle:(id)arg2;
- (void)setClientWithPID:(id)arg1 usingDevice:(BOOL)arg2;
- (int)clientUsingDevice;
- (unsigned long long)removeClientWithPID:(id)arg1;
- (void)remNotifications:(id)arg1 toClientWithPID:(id)arg2;
- (void)addNotifications:(id)arg1 toClientWithPID:(id)arg2;
- (void)sendMessage:(id)arg1 withConnection:(id)arg2;
- (void)sendMessage:(id)arg1 forClientWithPID:(id)arg2;
- (id)findClientWithPID:(id)arg1;
- (unsigned long long)currentClientCount;
- (id)copyClientsArray;
- (void)addClientWithConnection:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

