/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class CoreDAVItem;

@interface CalDAVCalendarServerSetItem : CoreDAVItem  {
    CoreDAVItem *_href;
    CoreDAVItem *_commonName;
    CoreDAVItem *_summary;
    CoreDAVItem *_accessLevel;
}

@property(retain,readonly) CoreDAVItem * accessLevel;
@property(retain,readonly) CoreDAVItem * summary;
@property(retain,readonly) CoreDAVItem * commonName;
@property(retain,readonly) CoreDAVItem * href;


- (id)summary;
- (id)href;
- (id)commonName;
- (id)accessLevel;

@end