//
//  SCIXavierViewController.h
//
//  Copyright © 2017 BlackShark Tech. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SCIImageProcessor.h"
#import "SCIProcessor.h"

FOUNDATION_EXPORT @class SCIMetrics;
FOUNDATION_EXPORT @class SCIMrzProcessor;
FOUNDATION_EXPORT @class SCIGunSerialProcessor;

FOUNDATION_EXPORT @protocol SCIXavierClientProtocol <NSObject>

@required
FOUNDATION_EXPORT -(void) onRawMrz: (NSString*) rawMrz;
FOUNDATION_EXPORT -(void) onParsedXmlFromlMrz: (NSString*) parsedXmFromlMrz;
FOUNDATION_EXPORT -(void) onParsedJsonFromlMrz: (NSString*) parsedJsonFromlMrz;
FOUNDATION_EXPORT -(void) onMrzCaptureCompleted;
FOUNDATION_EXPORT -(void) onError: (NSString*) errorMessage;
FOUNDATION_EXPORT -(void) onCapturedImage: (UIImage*) image;
FOUNDATION_EXPORT -(void) onCapturedBarcode:(NSString*) barcode;

@optional
FOUNDATION_EXPORT -(void)setPortraitMode:(BOOL) value;
FOUNDATION_EXPORT -(void) onMetrics: (SCIMetrics*) metrics;
FOUNDATION_EXPORT -(void) onClose;

@end


FOUNDATION_EXPORT @interface SCIXavierViewController : UIViewController <SCIProcessorProtocol, SCIImageProcessorProtocol>


/**
 init
 */
FOUNDATION_EXPORT -(SCIXavierViewController *) init;
FOUNDATION_EXPORT -(SCIXavierViewController *) init:(BOOL)portraitMode;
FOUNDATION_EXPORT -(SCIXavierViewController *) init:(BOOL)portraitMode andUseFrontCam:(BOOL)useFrontCam;


/**
 Shutdown the OCR previewing process and close the OCR previewing window
 */
FOUNDATION_EXPORT -(void) close;


/**
 * Client application is required to implement SCIXavierClientProtocol
 */
FOUNDATION_EXPORT @property (nonatomic, weak) id <SCIXavierClientProtocol> _clientProtocol;

@end
