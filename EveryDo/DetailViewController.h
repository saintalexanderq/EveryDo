//
//  DetailViewController.h
//  EveryDo
//
//  Created by Alex Quigley on 2017-11-15.
//  Copyright © 2017 Alex Quigley. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

