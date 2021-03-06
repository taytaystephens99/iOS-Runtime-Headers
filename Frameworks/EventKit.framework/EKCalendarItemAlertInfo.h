/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSDate, NSString, NSTimeZone, NSURL;

@interface EKCalendarItemAlertInfo : NSObject <NSCopying> {
    BOOL _acknowledged;
    NSURL *_action;
    BOOL _allDay;
    NSString *_dismissalID;
    NSDate *_endDate;
    NSURL *_entityID;
    NSDate *_eventDate;
    NSTimeZone *_eventTimeZone;
    NSString *_externalID;
    NSString *_location;
    int _proximity;
    BOOL _tentative;
    NSString *_title;
}

@property(readonly) BOOL acknowledged;
@property(readonly) NSURL * action;
@property(readonly) BOOL allDay;
@property(readonly) NSString * dismissalID;
@property(readonly) NSDate * endDate;
@property(readonly) NSURL * entityID;
@property(readonly) NSDate * eventDate;
@property(readonly) NSTimeZone * eventTimeZone;
@property(readonly) NSString * externalID;
@property(readonly) NSString * location;
@property(readonly) int proximity;
@property(readonly) BOOL tentative;
@property(readonly) NSString * title;

+ (id)alertInfoWithTitle:(id)arg1 location:(id)arg2 date:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5 allDay:(BOOL)arg6 tentative:(BOOL)arg7 entityID:(id)arg8 action:(id)arg9 proximity:(int)arg10 externalID:(id)arg11 acknowledged:(BOOL)arg12 dismissalID:(id)arg13;

- (BOOL)acknowledged;
- (id)action;
- (BOOL)allDay;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dismissalID;
- (id)endDate;
- (id)entityID;
- (id)eventDate;
- (id)eventTimeZone;
- (id)externalID;
- (unsigned int)hash;
- (id)initWithTitle:(id)arg1 location:(id)arg2 date:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5 allDay:(BOOL)arg6 tentative:(BOOL)arg7 entityID:(id)arg8 action:(id)arg9 proximity:(int)arg10 externalID:(id)arg11 acknowledged:(BOOL)arg12 dismissalID:(id)arg13;
- (BOOL)isEqual:(id)arg1;
- (id)location;
- (int)proximity;
- (BOOL)tentative;
- (id)title;

@end
