

#import <Foundation/Foundation.h>
#import "SRWebSocket.h"



#define kNeedPayOrderNote       @"kNeedPayOrderNote"
#define kWebSocketDidOpenNote   @"kWebSocketDidOpenNote"
#define kWebSocketDidCloseNote  @"kWebSocketDidCloseNote"
#define kWebSocketdidReceiveMessageNote @"kWebSocketdidReceiveMessageNote"

@interface SocketRocketUtility : NSObject


@property (nonatomic,assign,readonly) SRReadyState socketReadyState;


- (void)SRWebSocketOpenWithURLString:(NSString *)urlString;


- (void)SRWebSocketClose;


- (void)sendData:(id)data;

+ (SocketRocketUtility *)instance;


@property (nonatomic,copy) NSString *requestId;
@property (nonatomic,copy) NSString *callbackId;

@end
