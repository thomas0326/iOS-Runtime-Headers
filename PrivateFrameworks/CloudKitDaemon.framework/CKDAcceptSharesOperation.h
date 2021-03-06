/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDAcceptSharesOperation : CKDDatabaseOperation {
    id /* block */ _acceptCompletionBlock;
    NSMutableArray *_acceptedShareURLsToFetch;
    int _numShareAcceptAttempts;
    NSMutableDictionary *_shareInfosToAcceptByURL;
    NSMutableArray *_shareURLsToAccept;
}

@property (nonatomic, copy) id /* block */ acceptCompletionBlock;
@property (nonatomic, retain) NSMutableArray *acceptedShareURLsToFetch;
@property (nonatomic) int numShareAcceptAttempts;
@property (nonatomic, retain) NSMutableDictionary *shareInfosToAcceptByURL;
@property (nonatomic, retain) NSMutableArray *shareURLsToAccept;

- (void).cxx_destruct;
- (BOOL)_acceptShares;
- (id)_addSelfIdentityToShareInfoPublicPCS:(id)arg1 forShareWithURL:(id)arg2 error:(id*)arg3;
- (void)_fetchAcceptedShares;
- (void)_fetchInfoForShares;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleShareURLAccepted:(id)arg1 forShare:(id)arg2 responseCode:(id)arg3;
- (void)_performCallbackForURL:(id)arg1 withShare:(id)arg2 error:(id)arg3;
- (void)_prepareShareInfo;
- (id /* block */)acceptCompletionBlock;
- (id)acceptedShareURLsToFetch;
- (unsigned long long)activityStart;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (BOOL)makeStateTransition;
- (id)nameForState:(unsigned int)arg1;
- (int)numShareAcceptAttempts;
- (void)setAcceptCompletionBlock:(id /* block */)arg1;
- (void)setAcceptedShareURLsToFetch:(id)arg1;
- (void)setNumShareAcceptAttempts:(int)arg1;
- (void)setShareInfosToAcceptByURL:(id)arg1;
- (void)setShareURLsToAccept:(id)arg1;
- (id)shareInfosToAcceptByURL;
- (id)shareURLsToAccept;

@end
