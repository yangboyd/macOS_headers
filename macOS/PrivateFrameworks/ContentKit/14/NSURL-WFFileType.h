//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURL.h"

#import "WFNaming.h"

@class NSString, WFFileType;

@interface NSURL (WFFileType) <WFNaming>
+ (id)dc_queryStringWithQueryDictionary:(id)arg1 addingPercentEscapes:(BOOL)arg2;
+ (id)dc_queryStringWithQueryDictionary:(id)arg1;
+ (id)dc_dictionaryFromQueryString:(id)arg1;
+ (id)dc_queryItemsFromQueryString:(id)arg1;
+ (id)wf_shortcutsDirectoryURL;
+ (id)rootVolumeURL;
+ (id)realLibraryDirectoryURL;
+ (id)realHomeDirectoryURL;
@property(readonly, nonatomic) WFFileType *wfFileType;
@property(readonly, copy, nonatomic) NSString *wfName;
- (BOOL)dc_matchesHost:(id)arg1;
- (id)dc_fragmentQueryDictionary;
- (id)dc_queryDictionary;
- (BOOL)wf_proposedFileIsContainedByDirectoryAtURL:(id)arg1;
- (BOOL)isContainedByDirectoryAtURL:(id)arg1;
- (long long)wf_relationshipToDirectoryAtURL:(id)arg1;
- (id)volumeName;
- (id)fileSize;
- (BOOL)wf_sandboxAllowsWritingFile;
- (BOOL)wf_sandboxAllowsReadingFile;
- (BOOL)wf_sandboxAllowsOperation:(const char *)arg1;
- (BOOL)fileIsDirectory;
- (BOOL)fileIsWritable;
- (BOOL)fileIsReadable;
- (BOOL)fileExists;
@end

