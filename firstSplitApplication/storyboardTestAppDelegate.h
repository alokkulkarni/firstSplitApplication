//
//  storyboardTestAppDelegate.h
//  firstSplitApplication
//
//  Created by Alok Kulkarni on 23/10/11.
//  Copyright (c) 2011 Barclays. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface storyboardTestAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
