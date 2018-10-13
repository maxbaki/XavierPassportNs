//
//  SCIXavierWidget.h
//  Copyright © 2017 BlackShark Tech. All rights reserved.
//


#import <UIKit/UIKit.h>

FOUNDATION_EXPORT @protocol SCIXavierWidgetProtocol <NSObject>

@required

FOUNDATION_EXPORT -(void) drawFocusSymbol: (BOOL) val;
FOUNDATION_EXPORT -(CGPoint) getFocusPoint;
FOUNDATION_EXPORT -(void) displayStatusMsg:(NSString*) status;
FOUNDATION_EXPORT -(void) showGlareScore:(float)glareScore;

@end

typedef void (^WidgetCompleted)(void);

FOUNDATION_EXPORT @interface SCIXavierWidgetView : UIView <SCIXavierWidgetProtocol>

FOUNDATION_EXPORT - (id)init: (UIView*) previewBoxView
        andParentFrameRect:(CGRect)frameRect
        withWidgetCompletedBlock:(WidgetCompleted) widgetCompleteCallback;
FOUNDATION_EXPORT -(void)close;

FOUNDATION_EXPORT @property (nonatomic, weak) id <SCIXavierWidgetProtocol> _widgetProtocol;

@end
