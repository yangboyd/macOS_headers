//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RDItem.h"

@class RDGenerationOptions;

@interface RDEditingItem : RDItem
{
    RDGenerationOptions *_options;
}

@property(retain, nonatomic) RDGenerationOptions *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (id)copyEditingItemInWebsite:(id)arg1;

@end

