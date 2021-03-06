/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class <QLPreviewControllerDataSource>, <QLPreviewControllerDelegate>, <QLPreviewItem>, QLPreviewControllerReserved;

@interface QLPreviewController : UIViewController {
    QLPreviewControllerReserved *_reserved;
}

@property(readonly) <QLPreviewItem> * currentPreviewItem;
@property int currentPreviewItemIndex;
@property <QLPreviewControllerDataSource> * dataSource;
@property <QLPreviewControllerDelegate> * delegate;

+ (id)_passThroughDocumentTypes;
+ (BOOL)_shouldPassThroughDocumentType:(id)arg1;
+ (BOOL)canPreviewDocumentType:(id)arg1;
+ (BOOL)canPreviewItem:(id)arg1;
+ (BOOL)canPreviewMIMEType:(id)arg1;
+ (id)contentTypeForPreviewItem:(id)arg1;
+ (BOOL)copyPreviewItemToPasteboard:(id)arg1;
+ (void)presentPreviewItem:(id)arg1 onViewController:(id)arg2 withDelegate:(id)arg3 animated:(BOOL)arg4;
+ (id)titleForPreviewItem:(id)arg1;

- (void)_addPreviewContentController;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (BOOL)_canPrint;
- (void)_commonInit;
- (void)_configurePreviewContentController;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_contentFrameForRemoteView;
- (void)_contentWasTapped;
- (void)_createControls;
- (id)_currentInteractionController;
- (id)_currentNavigationController;
- (id)_displayedInteractionController;
- (id)_documentProxyForPreviewItem:(id)arg1;
- (id)_fixedSpaceItemWithWidth:(float)arg1;
- (id)_flexibleSpaceItem;
- (void)_hideOverlayWithStatusBar:(BOOL)arg1 duration:(double)arg2;
- (id)_indexFormatter;
- (id)_listDescriptionStringWithTitle:(id)arg1;
- (void)_loadInternalViews;
- (BOOL)_needsAVControls;
- (BOOL)_needsToolbar;
- (BOOL)_overlayVisible;
- (id)_pdfPreviewDataAtURL:(id)arg1;
- (void)_prepareDelayedAppearance;
- (void)_removeChildPreviewContentControllerIfNeeded;
- (void)_setControlsOverlayVisible:(BOOL)arg1 withStatusBar:(BOOL)arg2 duration:(double)arg3;
- (void)_setCurrentPreviewItemIndex:(int)arg1 fromClient:(BOOL)arg2 showContentsIfPossible:(BOOL)arg3;
- (void)_setupWithMode:(int)arg1 parentViewController:(id)arg2;
- (void)_showContentsIfPossibleAnimated:(BOOL)arg1;
- (void)_showGenericDisplayBundle;
- (void)_showOverlayWithStatusBar:(BOOL)arg1 duration:(double)arg2;
- (void)_startWaiting;
- (void)_stopWaiting;
- (void)_unloadInternalViews;
- (BOOL)_updateAVState;
- (BOOL)_updateActionItem;
- (void)_updateNavigationBar:(BOOL)arg1;
- (void)_updateRouteImages;
- (void)_updateToolbar:(BOOL)arg1;
- (void)_updateToolbarVisibility:(BOOL)arg1;
- (id)_updatedArchiveButton;
- (void)_waitingTimedOut;
- (void)actionButtonTapped:(id)arg1;
- (id)activityItemForDocumentInteractionController:(id)arg1;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItems:(id)arg1;
- (void)animateWhenReadyWithBlock:(id)arg1;
- (void)arrowsAction:(id)arg1;
- (BOOL)blockRemoteImages;
- (BOOL)canPrint;
- (BOOL)ckCanDismissWhenSuspending;
- (void)contentWasTappedInPreviewContentController:(id)arg1;
- (id)currentPreviewItem;
- (int)currentPreviewItemIndex;
- (int)currentSourceUUIDForPreviewContentController:(id)arg1;
- (void)customActionButtonTapped:(id)arg1;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (void)didReceiveMemoryWarning;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)documentInteractionControllerDidDismissOptionsMenu:(id)arg1;
- (void)documentInteractionControllerWillPresentOptionsMenu:(id)arg1;
- (void)doneButtonTapped:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)itemsSource;
- (void)leftArrowAction:(id)arg1;
- (void)loadView;
- (int)mode;
- (void)navigationGoBackAction:(id)arg1;
- (int)numberOfPreviewItems;
- (int)numberOfPreviewItemsInPreviewContentController:(id)arg1;
- (void)overlayWasTappedInPreviewContentController:(id)arg1;
- (id)passThroughViewsForIndexSheet;
- (void)playButtonAction:(id)arg1;
- (int)preferredStatusBarStyle;
- (BOOL)prefersStatusBarHidden;
- (void)prepareForPrinting;
- (void)presentPreviewItem:(id)arg1 onViewController:(id)arg2 withDelegate:(id)arg3 animated:(BOOL)arg4;
- (void)previewContentController:(id)arg1 didFailWithError:(id)arg2;
- (void)previewContentController:(id)arg1 didLoadItem:(id)arg2 atIndex:(int)arg3 withError:(id)arg4;
- (void)previewContentController:(id)arg1 didMoveToItem:(id)arg2 atIndex:(int)arg3;
- (void)previewContentController:(id)arg1 previewItemAtIndex:(int)arg2 completionBlock:(id)arg3;
- (id)previewContentController:(id)arg1 previewItemAtIndex:(int)arg2;
- (void)previewContentController:(id)arg1 receivedTapOnURL:(id)arg2;
- (void)previewContentController:(id)arg1 setAVState:(id)arg2 forPreviewItem:(id)arg3;
- (void)previewContentController:(id)arg1 willHideOverlayWithDuration:(double)arg2;
- (void)previewContentController:(id)arg1 willMoveToItemAtIndex:(int)arg2;
- (void)previewContentController:(id)arg1 willShowOverlayWithDuration:(double)arg2;
- (id)previewContentController;
- (id)previewItemAtIndex:(int)arg1;
- (id)printInfoForDocumentInteractionController:(id)arg1;
- (void)refreshCurrentPreviewItem;
- (void)reloadData;
- (void)rightArrowAction:(id)arg1;
- (void)setBlockRemoteImages:(BOOL)arg1;
- (void)setCurrentPreviewItemIndex:(int)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLoadingTextForMissingFiles:(id)arg1;
- (void)setShowActionAsDefaultButton:(BOOL)arg1;
- (void)setSourceIsManaged:(BOOL)arg1;
- (void)setTransitioning:(BOOL)arg1 synchronizedWithBlock:(id)arg2;
- (void)setUseCustomActionButton:(BOOL)arg1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)showActionAsDefaultButton;
- (void)showArchiveContent:(id)arg1;
- (void)showArchiveContentAnimated:(BOOL)arg1;
- (void)showContentsWasTappedInPreviewContentController:(id)arg1;
- (BOOL)sourceIsManaged;
- (BOOL)useCustomActionButton;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)wirelessRoutesDidChange:(id)arg1;

@end
