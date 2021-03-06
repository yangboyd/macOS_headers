//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ML3MigrationAddedColumn : NSObject
{
    NSString *_columnName;
    NSString *_foreignTableName;
    NSString *_foreignColumnName;
    NSString *_joinColumnName;
}

@property(readonly, nonatomic) NSString *joinColumnName; // @synthesize joinColumnName=_joinColumnName;
@property(readonly, nonatomic) NSString *foreignColumnName; // @synthesize foreignColumnName=_foreignColumnName;
@property(readonly, nonatomic) NSString *foreignTableName; // @synthesize foreignTableName=_foreignTableName;
@property(readonly, nonatomic) NSString *columnName; // @synthesize columnName=_columnName;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL shouldImportFromForeignTable;
- (id)initWithName:(id)arg1 foreignTable:(id)arg2 foreignColumn:(id)arg3 joinColumn:(id)arg4;

@end

