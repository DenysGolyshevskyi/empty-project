//
//  Singleton.h
//  empty-project
//
//  Created by Denys Golyshevskyi on 1/20/17.
//  Copyright © 2017 Scaletools UA. All rights reserved.
//

#import <foundation/Foundation.h>

@interface Singleton : NSObject {
    NSString *someProperty;
}

@property (copy, nonatomic) NSString *someProperty;

+ (id)sharedSingleton;

@end
