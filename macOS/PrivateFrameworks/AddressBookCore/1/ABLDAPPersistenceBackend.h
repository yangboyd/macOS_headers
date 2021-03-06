//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBookCore/ABAccountPersistenceBackend-Protocol.h>

@class NSString;

@interface ABLDAPPersistenceBackend : NSObject <ABAccountPersistenceBackend>
{
    NSString *_uid;
}

- (id)addressBookDomainName;
- (id)userDefaultKeyToKeyPathMapping;
- (void)deletePersistentValuesWithAddressBook:(id)arg1;
- (BOOL)savePersistentValues:(id)arg1;
- (BOOL)savePersistentValues:(id)arg1 postNotifications:(BOOL)arg2;
- (void)rediscoverPersistentValuesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)loadPersistentValues;
- (id)parentAccountTypeIdentifier;
- (id)accountTypeIdentifier;
- (id)acAccountIdentifier;
- (id)uid;
- (void)dealloc;
- (id)initWithUID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

