//
//  CK2QueueProxy.h
//  Connection
//
//  Created by Mike on 10/11/2012.
//
//

#import <Foundation/Foundation.h>

@interface CK2QueueProxy : NSObject
{
  @private
    void    (^_dispatchBlock)(void(^)(void));
}

+ (instancetype)currentQueue;   // Creates a queue encapsulating the current operation or dispatch queue
- (id)initWithOperationQueue:(NSOperationQueue *)queue;
- (id)initWithDispatchQueue:(dispatch_queue_t)queue;

- (void)addOperationWithBlock:(void (^)(void))block;

@end
