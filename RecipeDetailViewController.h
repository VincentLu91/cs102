//
//  RecipeDetailViewController.h
//  RecipeBook
//
//  Created by Vincent Lu on 2013-08-29.
//  Copyright (c) 2013 Vincent Lu. All rights reserved.
//

// This is the interface I wrote after following a tutorial on creating a recipe database app
// Link: http://www.appcoda.com/objective-c-object-oriented-programming-intro/
#import <UIKit/UIKit.h>

@interface RecipeDetailViewController : UIViewController

@property (nonatomic, strong) IBOutlet UILabel *recipeLabel;
@property (nonatomic, strong) NSString *recipeName;

@end
