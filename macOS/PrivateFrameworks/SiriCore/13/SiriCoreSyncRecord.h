//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface SiriCoreSyncRecord : NSObject
{
    int _itemPriority;
    NSString *_key;
    NSString *_identifier;
    NSString *_debugValue;
    NSData *_dataValue;
    NSData *_addedValue;
    NSData *_metaValue;
    double _updateTime;
    NSData *_checkHash;
}

+ (id)syncRecordWithKey:(id)arg1 identifier:(id)arg2;
+ (id)syncRecordWithKey:(id)arg1 identifier:(id)arg2 priority:(int)arg3 debugValue:(id)arg4 dataValue:(id)arg5 addedValue:(id)arg6 appMeta:(id)arg7;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *checkHash; // @synthesize checkHash=_checkHash;
@property(nonatomic) double updateTime; // @synthesize updateTime=_updateTime;
@property(retain, nonatomic) NSData *metaValue; // @synthesize metaValue=_metaValue;
@property(retain, nonatomic) NSData *addedValue; // @synthesize addedValue=_addedValue;
@property(retain, nonatomic) NSData *dataValue; // @synthesize dataValue=_dataValue;
@property(retain, nonatomic) NSString *debugValue; // @synthesize debugValue=_debugValue;
@property(nonatomic) int itemPriority; // @synthesize itemPriority=_itemPriority;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (id)description;
- (void)setUpdateTimeToNow;
- (void)updateHash;
- (id)initWithKey:(id)arg1 identifier:(id)arg2 priority:(int)arg3 debugValue:(id)arg4 dataValue:(id)arg5 addedValue:(id)arg6 appMeta:(id)arg7;

@end

