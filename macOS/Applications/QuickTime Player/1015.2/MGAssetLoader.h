//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, MGAssetValidator, NSArray, NSDictionary, NSError, NSURL;
@protocol OS_dispatch_queue;

@interface MGAssetLoader : NSObject
{
    NSDictionary *_assetOptions;
    NSArray *_keysForInitialAssetValuesToLoad;
    MGAssetValidator *_validator;
    NSObject<OS_dispatch_queue> *_loaderQueue;
    BOOL _calledDidFinishCallback;
    BOOL _cancelled;
    BOOL _allowsPartialContentLoading;
    NSURL *_URL;
    AVAsset *_asset;
    long long _status;
    NSError *_error;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CDUnknownBlockType _willStartLoadingCallback;
    CDUnknownBlockType _didFinishLoadingCallback;
}

+ (id)synchronouslyLoadedAssetWithURL:(id)arg1 assetOptions:(id)arg2 keysForInitialAssetValuesToLoad:(id)arg3 allowsPartialContentLoading:(BOOL)arg4 error:(id *)arg5;
+ (void)promptUserToPartiallyLoadContent:(CDUnknownBlockType)arg1;
+ (id)presentableErrorForLoadingURL:(id)arg1 loaderError:(long long)arg2 userInfo:(id)arg3;
+ (void)initialize;
@property(copy) CDUnknownBlockType didFinishLoadingCallback; // @synthesize didFinishLoadingCallback=_didFinishLoadingCallback;
@property(copy) CDUnknownBlockType willStartLoadingCallback; // @synthesize willStartLoadingCallback=_willStartLoadingCallback;
@property(retain) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property BOOL allowsPartialContentLoading; // @synthesize allowsPartialContentLoading=_allowsPartialContentLoading;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(readonly, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (void)cancelLoading;
- (void)loadAsset;
- (void)_preflightAsset;
- (void)_validateAsset;
- (void)_cancelLoading;
- (void)_loadAsset;
- (void)loadingDidSucceed;
- (void)loadingDidFailWithError:(id)arg1;
- (void)tearDownLoading;
- (id)initWithURL:(id)arg1 assetOptions:(id)arg2 keysForInitialAssetValuesToLoad:(id)arg3;

@end

