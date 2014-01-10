//
//  DetailViewController.h
//  Top2000
//
//  Created by Giovanni Pagen on 10-01-14.
//  Copyright (c) 2014 Giovanni Pagen. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
