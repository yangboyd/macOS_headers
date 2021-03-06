//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString, NSURL, UIImage;

@interface MKMapAttribution : NSObject
{
    NSAttributedString *_string;
    NSURL *_url;
    UIImage *_providerImage;
    NSString *_providerString;
    NSString *_providerName;
}

+ (id)attributionUrlFromRegionalAttributions:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *providerName; // @synthesize providerName=_providerName;
@property(readonly, nonatomic) NSString *providerString; // @synthesize providerString=_providerString;
@property(readonly, nonatomic) UIImage *providerImage; // @synthesize providerImage=_providerImage;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSAttributedString *string; // @synthesize string=_string;
- (id)initWithStringAttributes:(id)arg1 regionalAttributions:(id)arg2 underlineText:(BOOL)arg3 applyLinkAttribution:(BOOL)arg4 scale:(double)arg5;
- (id)disclosureArrow;
- (id)attributedStringWithImage:(id)arg1;

@end

