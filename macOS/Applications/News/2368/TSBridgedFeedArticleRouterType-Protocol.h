//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class TSBridgedFeedArticleContext, UINavigationItem, UIViewController;
@protocol FCHeadlineProviding;

@protocol TSBridgedFeedArticleRouterType
- (UINavigationItem *)navigationItemForPreviewViewController:(UIViewController *)arg1;
- (UIViewController *)previewViewControllerForHeadline:(id <FCHeadlineProviding>)arg1 withContext:(TSBridgedFeedArticleContext *)arg2;
- (void)routeToHeadline:(id <FCHeadlineProviding>)arg1 withContext:(TSBridgedFeedArticleContext *)arg2;
@end

