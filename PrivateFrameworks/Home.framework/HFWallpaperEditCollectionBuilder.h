/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFWallpaperEditCollectionBuilder : NSObject {
    <HFHomeKitObject><HMApplicationData> * _hkObject;
    BOOL  _hkObjectNewlyCreated;
    NAFuture * _initialEditCollectionFuture;
    int  _namedWallpaperCollectionType;
    HFWallpaperEditCollection * _updatedEditCollection;
}

@property (nonatomic, retain) <HFHomeKitObject><HMApplicationData> *hkObject;
@property (nonatomic) BOOL hkObjectNewlyCreated;
@property (nonatomic, retain) NAFuture *initialEditCollectionFuture;
@property (nonatomic) int namedWallpaperCollectionType;
@property (nonatomic, retain) HFWallpaperEditCollection *updatedEditCollection;

- (void).cxx_destruct;
- (id)commitWallpaper;
- (id)description;
- (id)editCollectionForWallpaper:(id)arg1 image:(id)arg2;
- (id)hkObject;
- (BOOL)hkObjectNewlyCreated;
- (id)initWithHomeKitObject:(id)arg1 namedWallpaperCollectionType:(int)arg2;
- (id)initialEditCollectionFuture;
- (int)namedWallpaperCollectionType;
- (void)setHkObject:(id)arg1;
- (void)setHkObjectNewlyCreated:(BOOL)arg1;
- (void)setInitialEditCollectionFuture:(id)arg1;
- (void)setNamedWallpaperCollectionType:(int)arg1;
- (void)setUpdatedEditCollection:(id)arg1;
- (void)setWallpaper:(id)arg1 image:(id)arg2;
- (id)updatedEditCollection;
- (id)wallpaperEditCollectionFuture;

@end
