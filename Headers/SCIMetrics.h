//
//  SCImetrics.h
//
//  Copyright © 2017 BlackShark Tech. All rights reserved.
//

#import <UIKit/UIKit.h>

FOUNDATION_EXPORT @interface SCIMetrics : NSObject
{
    
    double _startOfWidget;
    double _endOfWidget;
    double _startOfCandidate;
    double _endOfCandidate;
    int _numberOfCandidates;
    int _numberOfScans;
    double _imageAnalysis;
    double _scrubbing;
    
}

FOUNDATION_EXPORT @property(nonatomic, readwrite) double startOfWidget;
FOUNDATION_EXPORT @property(nonatomic, readwrite) double endOfWidget;
FOUNDATION_EXPORT @property(nonatomic, readwrite) double startOfCandidate;
FOUNDATION_EXPORT @property(nonatomic, readwrite) double endOfCandidate;
FOUNDATION_EXPORT @property(nonatomic, readwrite) int numberOfCandidates;
FOUNDATION_EXPORT @property(nonatomic, readwrite) int numberOfScans;
FOUNDATION_EXPORT @property(nonatomic, readwrite) double imageAnalysis;
FOUNDATION_EXPORT @property(nonatomic, readwrite) double scrubbing;


FOUNDATION_EXPORT -(void)clear;

+(SCIMetrics *)sharedInstance;

+(double) getNow;

@end

FOUNDATION_EXPORT @protocol SCIMetricsProtocol <NSObject>


@optional
FOUNDATION_EXPORT -(void) onMetrics: (SCIMetrics*) metrics;

@end
