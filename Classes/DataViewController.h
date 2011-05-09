//
//  DataViewController.h
//  SlidingView
//
//  Created by Reefaq on 2/24/11.
//  Copyright 2011 Rêve Interiors . All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DataViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
	UITableView*  _tableView;
}

- (id)initWithFrame:(CGRect)frame;


@property(nonatomic, retain)UITableView* tableView;

@end