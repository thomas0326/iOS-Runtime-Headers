/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLPhotoStreamsHelper : NSObject {
}

+ (id)photoStreamAccount;
+ (BOOL)photoStreamsEnabled;
+ (id)publishBreadcrumbsPath;
+ (id)sharedPhotoStreamsHelper;
+ (BOOL)writeBreadcrumbContent:(id)arg1 forHashString:(id)arg2;

- (void)_appDidEnterBackground:(id)arg1;
- (id)_derivedAssertPathForMasterAsset:(id)arg1;
- (struct CGSize { float x1; float x2; })_derivedAssetSizeForMasterSizeWidth:(float)arg1 height:(float)arg2;
- (id)_photoStreamAlbumNameWithFirstName:(id)arg1 lastName:(id)arg2 email:(id)arg3;
- (int)_serverIntegerLimitForKey:(id)arg1 debugDefaultKey:(id)arg2;
- (void)assetWithFileHash:(id)arg1 metadata:(id)arg2 wasSavedToPath:(id)arg3;
- (void)assetsWithNames:(id)arg1 willBeDeletedForStreamID:(id)arg2;
- (void)dealloc;
- (float)derivedAssetDimensionLimit;
- (id)derivedAssetForMasterAsset:(id)arg1;
- (BOOL)enqueuePhotoForPSPublishing:(id)arg1 imageHash:(id)arg2 fullPath:(id)arg3 fileSize:(id)arg4 type:(id)arg5;
- (int)friendsLimit;
- (int)imageLimitForFriendStream;
- (int)imageLimitForOwnStream;
- (id)init;
- (id)pathToSavedMetadataForAssetHash:(id)arg1 streamID:(id)arg2 createIntermediateDirs:(BOOL)arg3;
- (id)pause_mstreamd;
- (id)photoStreamAlbumTitleForPersonID:(id)arg1;
- (id)photoStreamsPublishStreamID;
- (void)pollForNewSubscriptionContent;
- (id)psHashAsString:(id)arg1;
- (id)psHashForData:(id)arg1;
- (BOOL)removeBreadcrumbsForHashString:(id)arg1;
- (void)resetServerState;
- (void)resetSubscriptionSyncForPersonID:(id)arg1;
- (void)resume_mstreamd:(id)arg1;
- (BOOL)shouldPublishScreenShots;
- (void)writeDidEnqueueBreadcrumbForHash:(id)arg1 imagePath:(id)arg2;
- (void)writeDidPublishBreadcrumbforHash:(id)arg1 imagePath:(id)arg2;
- (void)writeWillEnqueueBreadcrumbForHash:(id)arg1 imagePath:(id)arg2;

@end