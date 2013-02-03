/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, SSURLConnectionRequest;

@interface _HomeSharingGroupIDResolver : NSObject <SSURLConnectionRequestDelegate> {
    NSString *_appleID;
    id _completionHandler;
    NSString *_password;
    SSURLConnectionRequest *_request;
    BOOL _success;
}

- (void)dealloc;
- (id)initWithAppleID:(id)arg1 password:(id)arg2 completionHandler:(id)arg3;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;
- (void)start;
- (void)urlConnectionRequest:(id)arg1 didReceiveResponse:(id)arg2;

@end