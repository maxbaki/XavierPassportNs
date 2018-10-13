//
//  ImageProcessor.h
//
//  Copyright © 2017 BlackShark Tech. All rights reserved.
//

#import <UIKit/UIKit.h>


FOUNDATION_EXPORT @protocol SCIImageProcessorProtocol <NSObject>

@required
FOUNDATION_EXPORT -(void) onParsedMrzTextBlob: (NSString*) parsedMrzTextBlob cleanedImage:(UIImage*) image;
FOUNDATION_EXPORT -(void) onStartImageOcr;
FOUNDATION_EXPORT -(void) onUnrecognizedMRZBlob;
FOUNDATION_EXPORT -(void) onGlareDetected:(float)glareScore;

@optional

@end

FOUNDATION_EXPORT @interface SCIImageProcessor : NSObject

FOUNDATION_EXPORT -(void) stop;

FOUNDATION_EXPORT -(void)start;

@property (nonatomic, weak) id <SCIImageProcessorProtocol> _imageProcessorProtocol;


@end
