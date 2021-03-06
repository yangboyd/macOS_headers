//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSApplication/TMAExportOptionsViewController.h>

@class NSMatrix, NSObject;
@protocol TNMacExportSVOptionsAccessoryViewControllerDelegate;

@interface TNMacExportSVOptionsAccessoryViewController : TMAExportOptionsViewController
{
    NSMatrix *_tablesMatrix;
    long long _delimiterType;
    NSObject<TNMacExportSVOptionsAccessoryViewControllerDelegate> *_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSObject<TNMacExportSVOptionsAccessoryViewControllerDelegate> *delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long delimiterType; // @synthesize delimiterType=_delimiterType;
@property(retain, nonatomic) NSMatrix *tablesMatrix; // @synthesize tablesMatrix=_tablesMatrix;
- (void)tablesMatrixTapped:(id)arg1;
- (id)options;
- (void)loadView;
- (id)initWithDocument:(id)arg1 delimiterType:(long long)arg2;

@end

