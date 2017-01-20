//
//  Singleton.m
//  empty-project
//
//  Created by Denys Golyshevskyi on 1/20/17.
//  Copyright © 2017 Scaletools UA. All rights reserved.
//

#import "Singleton.h"

@implementation Singleton

@synthesize someProperty;

#pragma mark - Singleton Methods -

+ (id)sharedSingleton
{
    static Singleton *sharedSingleton = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        sharedSingleton = [[self alloc] init];
    });
    
    return sharedSingleton;
}

- (id)init
{
    if (self = [super init]) {
        someProperty = @"Default Property Value";
    }
    return self;
}

- (void)dealloc
{
    // Should never be called, but just here for clarity really.
}

@end
