//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CoreDAVItem.h"

@class CalDAVCalendarServerActionItem, CoreDAVLeafItem;

@interface CalDAVCalendarServerScheduleChangesItem : CoreDAVItem
{
    CoreDAVLeafItem *_dtstamp;
    CalDAVCalendarServerActionItem *_action;
}

@property(retain, nonatomic) CalDAVCalendarServerActionItem *action; // @synthesize action=_action;
@property(retain, nonatomic) CoreDAVLeafItem *dtstamp; // @synthesize dtstamp=_dtstamp;
- (void).cxx_destruct;
- (id)copyParseRules;
- (id)init;

@end

