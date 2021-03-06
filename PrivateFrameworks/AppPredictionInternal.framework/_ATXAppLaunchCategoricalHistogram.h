/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXAppLaunchCategoricalHistogram : NSObject <NSSecureCoding, _ATXAppLaunchCategoricalHistogramInterface> {
    NSObject<OS_dispatch_queue> * _asyncQueue;
    NSMutableDictionary * _bundleIdToEventId;
    NSMutableDictionary * _categoryIdToCategory;
    NSMutableDictionary * _categoryToCategoryId;
    NSMutableDictionary * _eventIdToBundleId;
    _ATXCategoricalHistogram * _histogram;
    double  _launchThreshold;
    unsigned int  _maxCategoryCount;
    unsigned int  _maxCategoryId;
    unsigned int  _maxEventId;
    double  _maxSSIDCount;
    NSDictionary * _parameters;
    NSString * _prevBundleId;
    NSString * _prevCategory;
    unsigned int  _prevCategoryId;
    unsigned int  _prevEventId;
    int  _pruningMethod;
    _ATXInternalUninstallNotification * _uninstallNotificationListener;
}

@property (nonatomic, readonly) unsigned int bundleIdCount;
@property (nonatomic, readonly) unsigned int categoryCount;
@property (nonatomic, readonly) unsigned int maxCategoryCount;
@property (nonatomic, readonly) int pruningMethod;

+ (id)stringForPruningMethod:(int)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_categoricalHistogram;
- (unsigned int)_categoryIdforCategory:(id)arg1;
- (unsigned int)_eventIdforBundleId:(id)arg1;
- (void)_reduceCategoryCountTo:(unsigned int)arg1;
- (void)_removeMappingForCategoryId:(unsigned int)arg1;
- (void)_removeMappingForEventId:(unsigned int)arg1;
- (void)_setMaxCategoryCount:(unsigned int)arg1 pruningMethod:(int)arg2;
- (double)_smoothRatio:(double)arg1 denom:(double)arg2;
- (BOOL)_tryGetCategoryIdforCategory:(id)arg1 createIfMissing:(BOOL)arg2 categoryIdOut:(unsigned int*)arg3;
- (BOOL)_tryGetEventIdforBundleId:(id)arg1 createIfMissing:(BOOL)arg2 eventIdOut:(unsigned int*)arg3;
- (void)addLaunchWithBundleId:(id)arg1 date:(id)arg2 category:(id)arg3;
- (BOOL)bundleHasBeenLaunched:(id)arg1;
- (unsigned int)bundleIdCount;
- (unsigned int)categoryCount;
- (void)decayByFactor:(double)arg1;
- (void)decayWithHalfLife:(double)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCategoricalHistogram:(id)arg1 bundleIdToEventId:(id)arg2 eventIdToBundleId:(id)arg3 maxEventId:(unsigned int)arg4 categoryToCategoryId:(id)arg5 categoryIdToCategory:(id)arg6 maxCategoryId:(unsigned int)arg7 maxCategoryCount:(unsigned int)arg8 pruningMethod:(int)arg9;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(int)arg1;
- (id)initWithType:(int)arg1 maxCategoryCount:(unsigned int)arg2 pruningMethod:(int)arg3;
- (void)initializeFromAsset;
- (double)launchPopularityWithBundleId:(id)arg1 category:(id)arg2;
- (unsigned int)maxCategoryCount;
- (double)overallLaunchPopularityForBundleId:(id)arg1;
- (double)overallLaunchPopularityForBundleId:(id)arg1 category:(id)arg2;
- (double)overallLaunchPopularityForCategory:(id)arg1;
- (int)pruningMethod;
- (double)relativeLaunchPopularityWithBundleId:(id)arg1 category:(id)arg2;
- (int)removeAllHistoryForAllBundleIds:(id)arg1;
- (BOOL)removeAllHistoryForBundleId:(id)arg1;
- (BOOL)removeAllHistoryForCategory:(id)arg1;
- (void)removeLaunchWithBundleId:(id)arg1 category:(id)arg2;
- (void)removeMappingForBundleId:(id)arg1;
- (void)removeMappingForCategory:(id)arg1;
- (void)resetData;
- (void)swapWithCoder:(id)arg1;
- (double)totalLaunches;
- (double)totalLaunchesForCategory:(id)arg1;
- (void)verifyDataIntegrity;

@end
