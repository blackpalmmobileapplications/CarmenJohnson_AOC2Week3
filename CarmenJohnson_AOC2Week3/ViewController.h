//
//  ViewController.h
//  CarmenJohnson_AOC2Week3
//
//  Created by Carmen Johnson on 2/20/13.
//  Copyright (c) 2013 Carmen Johnson. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SecondViewController.h"

@interface ViewController : UIViewController <SecondViewDelegate>
{
    IBOutlet UITextView *eventField; // TextView
}

-(IBAction)addEvent:(id)sender; // Add Event button

@end
