//
//  storyboardTestMasterViewController.h
//  firstSplitApplication
//
//  Created by Alok Kulkarni on 23/10/11.
//  Copyright (c) 2011 Barclays. All rights reserved.
//

#import <UIKit/UIKit.h>

@class storyboardTestDetailViewController;

#import <CoreData/CoreData.h>

@interface storyboardTestMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) storyboardTestDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
