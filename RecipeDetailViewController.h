//
//  RecipeDetailViewController.h
//  RecipeBook
//
//  Created by Vincent Lu on 2013-08-29.
//  Copyright (c) 2013 Vincent Lu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RecipeDetailViewController : UIViewController

@property (nonatomic, strong) IBOutlet UILabel *recipeLabel;
@property (nonatomic, strong) NSString *recipeName;

@end
