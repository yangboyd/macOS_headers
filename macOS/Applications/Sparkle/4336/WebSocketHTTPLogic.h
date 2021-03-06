//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSMutableURLRequest, NSString, NSURL, NSURLCredential;

@interface WebSocketHTTPLogic : NSObject
{
    NSMutableURLRequest *_urlRequest;
    NSString *_nonceKey;
    NSString *_authorizationHeader;
    struct __CFHTTPMessage *_responseMsg;
    NSURLCredential *_credential;
    unsigned long long _redirectCount;
    BOOL _handleRedirects;
    BOOL _shouldContinue;
    BOOL _shouldRetry;
    int _httpStatus;
    NSError *_error;
}

@property(readonly) NSError *error; // @synthesize error=_error;
@property(readonly) int httpStatus; // @synthesize httpStatus=_httpStatus;
@property(readonly) NSURLCredential *credential; // @synthesize credential=_credential;
@property(readonly) BOOL shouldRetry; // @synthesize shouldRetry=_shouldRetry;
@property(readonly) BOOL shouldContinue; // @synthesize shouldContinue=_shouldContinue;
@property BOOL handleRedirects; // @synthesize handleRedirects=_handleRedirects;
- (void).cxx_destruct;
- (void)setErrorCode:(long long)arg1 userInfo:(id)arg2;
- (id)credentialForAuthHeader:(id)arg1;
- (BOOL)redirect;
- (void)receivedResponse:(struct __CFHTTPMessage *)arg1;
- (struct __CFHTTPMessage *)newHTTPRequest;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
@property(readonly) NSURL *URL;
- (void)dealloc;
- (id)initWithURLRequest:(id)arg1;

@end

