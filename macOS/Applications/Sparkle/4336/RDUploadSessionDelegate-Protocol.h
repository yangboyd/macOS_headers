//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RDProgressProtocol.h"

@class NSString, RDFileInfo, RDUploadSession;

@protocol RDUploadSessionDelegate <RDProgressProtocol>
- (void)endUploadSession:(RDUploadSession *)arg1;
- (void)endFileUpload:(RDFileInfo *)arg1 inSession:(RDUploadSession *)arg2 result:(BOOL)arg3;
- (void)beginFileUpload:(RDFileInfo *)arg1 inSession:(RDUploadSession *)arg2;
- (void)processImage:(NSString *)arg1 inSession:(RDUploadSession *)arg2;
- (BOOL)startUploadSession:(RDUploadSession *)arg1;

@optional
- (void)attachUploadSession:(RDUploadSession *)arg1;
@end

