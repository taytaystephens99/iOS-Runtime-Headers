/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@class NSObject<OS_dispatch_source>, UILabel, UIProgressView;

@interface MusicCloudLoadingView : UIView {
    UIProgressView *_progressView;
    UILabel *_titleLabel;
    NSObject<OS_dispatch_source> *_updateTimerSource;
}

- (void).cxx_destruct;
- (void)_updateCloudProgressAnimated:(BOOL)arg1;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;

@end