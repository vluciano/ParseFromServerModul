//
//  MasterViewController.h
//  ParseFromServerModul
//
//  Created by Vladimir Luciano on 1/13/13.
//  Copyright (c) 2013 Vladimir Luciano. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
