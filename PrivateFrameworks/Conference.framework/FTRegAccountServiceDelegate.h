/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CNFRegController, NSTimer, NSDictionary, FTCConnectionHandler, IMAccount;

@interface FTRegAccountServiceDelegate : NSObject <AASetupAssistantDelegateService> {
    CNFRegController *_regController;
    IMAccount *_account;
    NSDictionary *_responseDictionary;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

    FTCConnectionHandler *_connectionHandler;
    NSTimer *_timeoutTimer;
    BOOL _timedOut;
    BOOL _setupFailed;
}

@property(retain) NSTimer * timeoutTimer;
@property(copy) NSDictionary * responseDictionary;
@property(copy) id completionHandler;
@property(retain) IMAccount * account;
@property(retain) CNFRegController * regController;


- (void)setAccount:(id)arg1;
- (id)account;
- (id)init;
- (void)dealloc;
- (void)_cleanup;
- (void)setupOperationFailed;
- (id)delegateServiceIdentifier;
- (id)accountSetupRequestParameters;
- (void)completeSetupWithResponseParameters:(id)arg1 handler:(id)arg2;
- (void)setResponseDictionary:(id)arg1;
- (void)_stopListeningForAccountNotifications;
- (void)_handleTimeout:(id)arg1;
- (void)setTimeoutTimer:(id)arg1;
- (id)timeoutTimer;
- (void)_handleFailureWithErrorCode:(int)arg1;
- (id)__responseAppleID;
- (id)__responseProfileID;
- (id)__responseAuthToken;
- (BOOL)__responseDictionaryIsValid;
- (BOOL)serviceIsAvailable;
- (BOOL)_hasAccount;
- (BOOL)_hasOperationalAccount;
- (id)_defaultSetupRequestParameters;
- (void)_handleSuccess;
- (void)_startListeningForAccountNotifications;
- (void)_beginAccountCreation;
- (void)_beginProfileValidation;
- (void)_beginEmailValidation;
- (id)_logName;
- (void)_startTimeout;
- (id)initWithRegController:(id)arg1;
- (void)_startTimeoutWithDuration:(double)arg1;
- (void)setRegController:(id)arg1;
- (void)_stopTimeout;
- (double)timeoutDuration;
- (id)regController;
- (id)displayName;
- (void)setCompletionHandler:(id)arg1;
- (id)completionHandler;
- (id)responseDictionary;
- (void)_handleFailureWithError:(id)arg1;
- (int)serviceType;

@end