//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSArray, NSImage, NSString;

@interface FIAirDropView : NSView
{
    id _controller;
    id _reserved;
    struct TNSRef<FIAirDropViewGutsController, void> _gutsController;
    struct TKeyValueObserver _isTransferInProgressObserver;
    _Bool _isTransferInProgress;
}

@property(readonly, nonatomic) _Bool isTransferInProgress; // @synthesize isTransferInProgress=_isTransferInProgress;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGRect)fileImageFrame;
- (id)recipientNames;
- (void)cancel;
- (void)send;
- (void)setIsTransferInProgress:(_Bool)arg1;
@property(copy) NSString *clientBundleID; // @dynamic clientBundleID;
@property(copy) NSImage *smallThumbnail; // @dynamic smallThumbnail;
@property(copy) NSImage *mediumThumbnail;
@property(copy) NSImage *largeThumbnail; // @dynamic largeThumbnail;
@property(copy) NSArray *urlsToSend; // @dynamic urlsToSend;
@property __weak id <FIAirDropViewDelegate> delegate; // @dynamic delegate;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonAirDropViewInit;

@end

