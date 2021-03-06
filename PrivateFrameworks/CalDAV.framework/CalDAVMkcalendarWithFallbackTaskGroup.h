/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSDictionary, NSSet, NSURL;

@interface CalDAVMkcalendarWithFallbackTaskGroup : CoreDAVTaskGroup {
    NSSet *_fallbackElements;
    NSDictionary *_headersToOverride;
    NSSet *_primaryElements;
    NSDictionary *_responseHeaders;
    BOOL _shouldSupportVEVENT;
    BOOL _shouldSupportVTODO;
    NSURL *_url;
}

@property(retain) NSDictionary * headersToOverride;
@property(retain) NSDictionary * responseHeaders;
@property BOOL shouldSupportVEVENT;
@property BOOL shouldSupportVTODO;

- (void)_mkcalendarAfterFailureCount:(unsigned int)arg1;
- (void)dealloc;
- (id)headersToOverride;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 primaryPropertiesToSet:(id)arg3 fallbackPropertiesToSet:(id)arg4 atURL:(id)arg5;
- (id)responseHeaders;
- (void)setHeadersToOverride:(id)arg1;
- (void)setResponseHeaders:(id)arg1;
- (void)setShouldSupportVEVENT:(BOOL)arg1;
- (void)setShouldSupportVTODO:(BOOL)arg1;
- (BOOL)shouldSupportVEVENT;
- (BOOL)shouldSupportVTODO;
- (void)startTaskGroup;

@end
