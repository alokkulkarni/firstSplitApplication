//
//  storyboardTestDetailViewController.h
//  firstSplitApplication
//
//  Created by Alok Kulkarni on 23/10/11.
//  Copyright (c) 2011 Barclays. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface storyboardTestDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
