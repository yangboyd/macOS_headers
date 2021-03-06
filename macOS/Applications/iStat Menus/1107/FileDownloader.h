//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData, NSObject<FileDownloaderDelegate>, NSURLConnection;

@interface FileDownloader : NSObject
{
    long long fileLength;
    NSObject<FileDownloaderDelegate> *_delegate;
    NSURLConnection *_connection;
    NSMutableData *_data;
}

@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSObject<FileDownloaderDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)cancel;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)downloadURL:(id)arg1;

@end

