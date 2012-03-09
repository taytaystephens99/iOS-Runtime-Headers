/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class EKSourceConstraints, NSString, NSNumber;

@interface EKPersistentSource : EKPersistentObject  {
    EKSourceConstraints *_constraints;
}

@property NSString * UUID;
@property int sourceType;
@property(copy) NSString * title;
@property(copy) NSNumber * defaultAlarmOffset;
@property(copy) NSString * externalID;
@property(getter=isEnabled) BOOL enabled;
@property(readonly) EKSourceConstraints * constraints;

+ (id)relations;

- (void)setExternalID:(id)arg1;
- (id)externalID;
- (id)description;
- (id)init;
- (void)dealloc;
- (void)setUUID:(id)arg1;
- (void)setDefaultAlarmOffset:(id)arg1;
- (id)defaultAlarmOffset;
- (int)entityType;
- (id)constraints;
- (BOOL)refresh;
- (void)reset;
- (void)setSourceType:(int)arg1;
- (int)sourceType;
- (id)title;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
- (void)setTitle:(id)arg1;
- (id)UUID;

@end