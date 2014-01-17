//
//  Promise.h
//  Promises
//
//  Created by Josh Holtz on 1/16/14.
//  Copyright (c) 2014 Josh Holtz. All rights reserved.
//

typedef void (^doneBlock)(id object);
typedef void (^failBlock)(NSError *error);
typedef void (^alwaysBlock)();

#import <Foundation/Foundation.h>

@interface Promise : NSObject

- (Promise*)addDone:(doneBlock)doneBlock;
- (Promise*)addFail:(failBlock)failBlock;
- (Promise*)addAlways:(alwaysBlock)alwaysBlock;

@end
