//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "VehicleDetailCell-Protocol.h"

@class UITextField;

__attribute__((visibility("hidden")))
@interface VehicleTextFieldCell : UITableViewCell <VehicleDetailCell>
{
    UITextField *_textField;
}

+ (double)cellHeight;
- (void).cxx_destruct;
@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
- (void)_commonInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)init;

@end

