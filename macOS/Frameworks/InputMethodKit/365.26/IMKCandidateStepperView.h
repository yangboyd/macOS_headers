//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <InputMethodKit/IMKUIView.h>

@class IMKCandidateStepperAccessoryImageView;
@protocol IMKCandidateStepperViewDelegate;

@interface IMKCandidateStepperView : IMKUIView
{
    id <IMKCandidateStepperViewDelegate> _delegate;
    IMKCandidateStepperAccessoryImageView *_topArrowView;
    IMKCandidateStepperAccessoryImageView *_bottomArrowView;
    BOOL _initialized;
}

@property(retain, nonatomic) IMKCandidateStepperAccessoryImageView *topArrowView; // @synthesize topArrowView=_topArrowView;
@property(nonatomic) BOOL initialized; // @synthesize initialized=_initialized;
@property(nonatomic) id <IMKCandidateStepperViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IMKCandidateStepperAccessoryImageView *bottomArrowView; // @synthesize bottomArrowView=_bottomArrowView;
- (void)mouseUp:(id)arg1;
- (void)setBottomStepperState:(BOOL)arg1;
- (void)setTopStepperState:(BOOL)arg1;
- (void)setupArrows;
- (void)changeArrowFrames;
- (struct CGRect)bottomArrowRectWithFrame:(struct CGRect)arg1;
- (struct CGRect)topArrowRectWithFrame:(struct CGRect)arg1;
- (struct CGRect)stepperAreaFrame;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 properties:(id)arg2;

@end

