//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TCDrawableAccessibilityDescription : NSObject
{
}

+ (id)accessibilityDescriptionForDrawableAndContainedDrawables:(id)arg1 includeTitleAndCaption:(BOOL)arg2;
+ (id)ownAccessibilityDescriptionForDrawable:(id)arg1 includeTitleAndCaption:(BOOL)arg2;
+ (id)labelledAccessibilityDescriptionForCaption:(id)arg1;
+ (id)accessibilityDescriptionForDrawable:(id)arg1 withFormat:(id)arg2 includeTitleAndCaption:(BOOL)arg3;
+ (void)toDescriptionComponents:(id)arg1 appendComponent:(id)arg2;

@end

