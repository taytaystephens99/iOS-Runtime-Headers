/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/WirelessDiagnostics
 */

@class PBCodable;

@interface AWDMetricContainer : NSObject {
    PBCodable *_metric;
    unsigned long _metricId;
}

@property(retain) PBCodable * metric;
@property(readonly) unsigned long metricId;

- (void)dealloc;
- (id)initWithMetricId:(unsigned long)arg1;
- (id)metric;
- (unsigned long)metricId;
- (void)setMetric:(id)arg1;

@end