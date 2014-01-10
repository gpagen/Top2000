//
//  MasterViewController.h
//  Top2000
//
//  Created by Giovanni Pagen on 10-01-14.
//  Copyright (c) 2014 Giovanni Pagen. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
