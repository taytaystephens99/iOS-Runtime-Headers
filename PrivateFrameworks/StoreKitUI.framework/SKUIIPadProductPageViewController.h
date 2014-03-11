/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class <SKUIIPadProductPageDelegate>, ACAccountStore, NSOperationQueue, NSURL, NSURLRequest, SKUIClientContext, SKUIFacebookLikeStatus, SKUIIncompatibleAppViewController, SKUIItem, SKUILoadProductPageOperation, SKUIMetricsController, SKUINetworkErrorViewController, SKUIProductPage, SKUIProductPageDetailsViewController, SKUIProductPageHeaderViewController, SKUIProductPagePlaceholderViewController, SKUIProductPageReviewsViewController, SKUISwooshArrayViewController, SSMetricsPageEvent, UIView;

@interface SKUIIPadProductPageViewController : UIViewController <SKUIMetricsViewController, SKUINetworkErrorDelegate, SKUIProductPageHeaderViewDelegate, SKUIProductPageChildViewControllerDelegate> {
    ACAccountStore *_accountStore;
    SKUIClientContext *_clientContext;
    int _defaultSelectedSectionIndex;
    <SKUIIPadProductPageDelegate> *_delegate;
    SKUIProductPageDetailsViewController *_detailsViewController;
    BOOL _didSendCannotOpen;
    SKUIFacebookLikeStatus *_facebookLikeStatus;
    SKUIProductPageHeaderViewController *_headerViewController;
    SKUIIncompatibleAppViewController *_incompatibleViewController;
    SKUIItem *_item;
    SSMetricsPageEvent *_lastPageEvent;
    SKUILoadProductPageOperation *_loadOperation;
    long long _lookupItemIdentifier;
    SKUIMetricsController *_metricsController;
    SKUINetworkErrorViewController *_networkErrorViewController;
    NSOperationQueue *_operationQueue;
    UIView *_overlayView;
    SKUIProductPagePlaceholderViewController *_placeholderViewController;
    SKUIProductPage *_productPage;
    SKUISwooshArrayViewController *_relatedViewController;
    SKUIProductPageReviewsViewController *_reviewsViewController;
    int _selectedSectionIndex;
    NSURLRequest *_urlRequest;
}

@property(readonly) NSURL * URL;
@property(retain) SKUIClientContext * clientContext;
@property <SKUIIPadProductPageDelegate> * delegate;
@property(readonly) SKUIItem * item;
@property(readonly) SKUIProductPage * productPage;

- (void).cxx_destruct;
- (id)URL;
- (void)_accountStoreDidChangeNotification:(id)arg1;
- (id)_detailsViewController;
- (id)_initSKUIIPadProductPageViewController;
- (BOOL)_isIncompatibleItem;
- (void)_metricsEnterEventNotification:(id)arg1;
- (id)_placeholderViewController;
- (id)_relatedViewController;
- (void)_reloadFacebookLikeStatus;
- (void)_reloadHeaderViewController;
- (id)_reviewsViewController;
- (void)_selectSectionIndex:(int)arg1;
- (void)_sendCannotOpen;
- (void)_setDefaultSectionIndexWithFragment:(int)arg1;
- (void)_setFacebookLikeStatus:(id)arg1;
- (void)_setMetricsController:(id)arg1;
- (void)_setProductPage:(id)arg1 error:(id)arg2;
- (void)_showError:(id)arg1;
- (void)_showIncompatibleView;
- (void)_showViewController:(id)arg1;
- (id)_viewControllerForSectionIndex:(int)arg1;
- (id)activeMetricsController;
- (id)clientContext;
- (void)configureMetricsWithPageEvent:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (id)initWithItem:(id)arg1;
- (id)initWithItemIdentifier:(long long)arg1;
- (id)initWithProductPage:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURLRequest:(id)arg1;
- (id)item;
- (void)loadView;
- (id)metricsControllerForProductPageHeader:(id)arg1;
- (void)networkErrorViewControllerInvalidated:(id)arg1;
- (id)productPage;
- (void)productPageChildOpenItem:(id)arg1;
- (void)productPageChildOpenURL:(id)arg1 viewControllerBlock:(id)arg2;
- (void)productPageChildViewControllerDidLoad:(id)arg1;
- (void)productPageChildViewControllerDidLoadScrollView:(id)arg1;
- (void)productPageChildViewControllerDidScroll:(id)arg1;
- (void)productPageHeaderView:(id)arg1 didSelectSectionIndex:(int)arg2;
- (void)productPageHeaderView:(id)arg1 didSelectURL:(id)arg2;
- (void)reloadData;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (struct CGPoint { float x1; float x2; })topContentOffset;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;

@end