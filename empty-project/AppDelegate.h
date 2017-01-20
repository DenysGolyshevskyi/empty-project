//
//  AppDelegate.h
//  empty-project
//
//  Created by Denys Golyshevskyi on 1/20/17.
//  Copyright © 2017 Denys Golyshevskyi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

