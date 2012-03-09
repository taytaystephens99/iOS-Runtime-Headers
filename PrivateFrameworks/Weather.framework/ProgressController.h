/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@class NSTimer;

@interface ProgressController : NSObject  {
    BOOL _progressShowing;
    int _loadingCount;
    NSTimer *_hideSpinnerTimer;
}

+ (id)sharedProgressController;

- (id)init;
- (void)userScrolled;
- (void)setLoadingData:(BOOL)arg1;
- (void)_setHideSpinnerTimer:(id)arg1;
- (void)_showSpinner;
- (void)_hideSpinner;
- (void)suspend;

@end