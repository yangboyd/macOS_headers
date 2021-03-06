//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NewsCore/FCHeadline.h>

#import <NewsCore/FCHeadlineStocksFields-Protocol.h>

@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohort, FCCoverArt, FCHeadlineThumbnail, FCInterestToken, FCTopStoriesStyleConfiguration, NSArray, NSDate, NSString, NSURL, NTPBArticleRecord;
@protocol FCChannelProviding;

@interface FCArticleHeadline : FCHeadline <FCHeadlineStocksFields>
{
    BOOL _hasThumbnail;
    BOOL _sponsored;
    BOOL _deleted;
    BOOL _isDraft;
    BOOL _featureCandidate;
    BOOL _needsRapidUpdates;
    BOOL _showMinimalChrome;
    BOOL _boundToContext;
    BOOL _hiddenFromFeeds;
    BOOL _pressRelease;
    BOOL _hiddenFromAutoFavorites;
    BOOL _paid;
    BOOL _canBePurchased;
    NSString *_versionIdentifier;
    NSString *_identifier;
    NSString *_articleID;
    NSString *_referencedArticleID;
    NSString *_clusterID;
    unsigned long long _contentType;
    NSString *_title;
    NSString *_titleCompact;
    NSString *_primaryAudience;
    NSDate *_publishDate;
    long long _publisherArticleVersion;
    long long _backendArticleVersion;
    id <FCChannelProviding> _sourceChannel;
    NSString *_sourceName;
    FCHeadlineThumbnail *_thumbnailLQ;
    FCHeadlineThumbnail *_thumbnail;
    FCHeadlineThumbnail *_thumbnailMedium;
    FCHeadlineThumbnail *_thumbnailHQ;
    FCHeadlineThumbnail *_thumbnailUltraHQ;
    FCHeadlineThumbnail *_thumbnailWidgetLQ;
    FCHeadlineThumbnail *_thumbnailWidget;
    FCHeadlineThumbnail *_thumbnailWidgetHQ;
    NSString *_shortExcerpt;
    NSString *_accessoryText;
    NSURL *_contentURL;
    NSDate *_lastModifiedDate;
    NSDate *_lastFetchedDate;
    NSArray *_topics;
    NSArray *_topicIDs;
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohort *_globalCohort;
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohort *_publisherCohort;
    NSURL *_videoURL;
    double _videoDuration;
    NSArray *_iAdCategories;
    NSArray *_iAdKeywords;
    NSArray *_iAdSectionIDs;
    NSArray *_blockedStorefrontIDs;
    NSArray *_allowedStorefrontIDs;
    NSArray *_relatedArticleIDs;
    NSArray *_moreFromPublisherArticleIDs;
    unsigned long long _storyType;
    FCTopStoriesStyleConfiguration *_storyStyle;
    long long _minimumNewsVersion;
    FCCoverArt *_coverArt;
    NSString *_videoCallToActionTitle;
    NSURL *_videoCallToActionURL;
    NTPBArticleRecord *_articleRecord;
    FCInterestToken *_articleInterestToken;
    long long _behaviorFlags;
    struct CGRect _thumbnailFocalFrame;
}

+ (BOOL)_simulateTopStoriesBadges;
+ (BOOL)_forceArticlesToBeShownAsSponsored;
@property(nonatomic) long long behaviorFlags; // @synthesize behaviorFlags=_behaviorFlags;
@property(retain, nonatomic) FCInterestToken *articleInterestToken; // @synthesize articleInterestToken=_articleInterestToken;
@property(retain, nonatomic) NTPBArticleRecord *articleRecord; // @synthesize articleRecord=_articleRecord;
- (BOOL)canBePurchased;
- (id)videoCallToActionURL;
- (id)videoCallToActionTitle;
- (id)coverArt;
- (void)setPaid:(BOOL)arg1;
- (BOOL)isPaid;
- (long long)minimumNewsVersion;
- (BOOL)isHiddenFromAutoFavorites;
- (BOOL)isPressRelease;
- (BOOL)isHiddenFromFeeds;
- (BOOL)isBoundToContext;
- (BOOL)showMinimalChrome;
- (BOOL)needsRapidUpdates;
- (void)setStoryStyle:(id)arg1;
- (id)storyStyle;
- (void)setStoryType:(unsigned long long)arg1;
- (unsigned long long)storyType;
- (id)moreFromPublisherArticleIDs;
- (id)relatedArticleIDs;
- (BOOL)isFeatureCandidate;
- (id)allowedStorefrontIDs;
- (id)blockedStorefrontIDs;
- (BOOL)isDraft;
- (void)setDeleted:(BOOL)arg1;
- (BOOL)isDeleted;
- (id)iAdSectionIDs;
- (id)iAdKeywords;
- (id)iAdCategories;
- (void)setSponsored:(BOOL)arg1;
- (BOOL)isSponsored;
- (double)videoDuration;
- (id)videoURL;
- (id)publisherCohort;
- (id)globalCohort;
- (void)setTopicIDs:(id)arg1;
- (id)topicIDs;
- (id)topics;
- (id)lastFetchedDate;
- (id)lastModifiedDate;
- (id)contentURL;
- (id)accessoryText;
- (void)setShortExcerpt:(id)arg1;
- (id)shortExcerpt;
- (id)thumbnailWidgetHQ;
- (id)thumbnailWidget;
- (id)thumbnailWidgetLQ;
- (void)setThumbnailUltraHQ:(id)arg1;
- (id)thumbnailUltraHQ;
- (void)setThumbnailHQ:(id)arg1;
- (id)thumbnailHQ;
- (void)setThumbnailMedium:(id)arg1;
- (id)thumbnailMedium;
- (void)setThumbnail:(id)arg1;
- (id)thumbnail;
- (void)setThumbnailLQ:(id)arg1;
- (id)thumbnailLQ;
- (void)setHasThumbnail:(BOOL)arg1;
- (BOOL)hasThumbnail;
- (void)setThumbnailFocalFrame:(struct CGRect)arg1;
- (struct CGRect)thumbnailFocalFrame;
- (void)setSourceName:(id)arg1;
- (id)sourceName;
- (void)setSourceChannel:(id)arg1;
- (id)sourceChannel;
- (long long)backendArticleVersion;
- (long long)publisherArticleVersion;
- (void)setPublishDate:(id)arg1;
- (id)publishDate;
- (id)primaryAudience;
- (void)setTitleCompact:(id)arg1;
- (id)titleCompact;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)setContentType:(unsigned long long)arg1;
- (unsigned long long)contentType;
- (void)setClusterID:(id)arg1;
- (id)clusterID;
- (id)referencedArticleID;
- (void)setArticleID:(id)arg1;
- (id)articleID;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)versionIdentifier;
- (void).cxx_destruct;
- (id)publisherID;
@property(readonly, copy, nonatomic) NSString *stocksScoresJSON;
@property(readonly, copy, nonatomic) NSString *stocksMetadataJSON;
@property(readonly, copy, nonatomic) NSString *stocksClusterID;
- (id)stocksFields;
- (id)publisherSpecifiedArticleIDs;
- (id)articleRecirculationConfigJSON;
- (id)backingArticleRecordData;
- (id)endOfArticleTopicIDs;
- (id)contentManifestWithContext:(id)arg1;
- (id)initWithArticleRecordData:(id)arg1 sourceChannel:(id)arg2 assetManager:(id)arg3;
- (id)initWithArticleRecord:(id)arg1 articleInterestToken:(id)arg2 sourceChannel:(id)arg3 storyStyleConfigs:(id)arg4 storyTypeTimeout:(long long)arg5 rapidUpdatesTimeout:(long long)arg6 assetManager:(id)arg7;
- (id)init;

@end

