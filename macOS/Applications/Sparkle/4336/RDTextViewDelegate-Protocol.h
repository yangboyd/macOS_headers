//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString, NSDictionary, RDColorManager, RDFontStyleManager, RDTextView;

@protocol RDTextViewDelegate <NSObject>
- (RDFontStyleManager *)styleManager;
- (RDColorManager *)colorManager;

@optional
- (void)textViewDidEndEditing:(RDTextView *)arg1;
- (void)textViewWillBeginEditing:(RDTextView *)arg1;
- (NSDictionary *)textView:(RDTextView *)arg1 updateTypingAttributes:(NSDictionary *)arg2;
- (NSAttributedString *)textView:(RDTextView *)arg1 insertAttributedString:(id)arg2;
@end

