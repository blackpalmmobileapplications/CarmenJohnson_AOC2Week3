//
//  SecondViewController.h
//  CarmenJohnson_AOC2Week3
//
//  Created by Carmen Johnson on 2/20/13.
//  Copyright (c) 2013 Carmen Johnson. All rights reserved.
//

#import <UIKit/UIKit.h>

// Delegate that takes the new event back to the ViewController text view.
@protocol SecondViewDelegate <NSObject>

@required
-(void)eventSaved:(NSString*)_eventSaved dateSaved:(NSDate *)_dateSaved;

@end

@interface SecondViewController : UIViewController <UITextFieldDelegate, UIPickerViewDelegate>
{
    // Outlets
    IBOutlet UITextField *eventText; // TextField
    IBOutlet UIDatePicker *_date; // Date picker
    
    id<SecondViewDelegate> delegate; // Creates SecondViewDelegate
    
    NSString *_eventSaved;
    NSDate *_dateSaved;
}

-(IBAction)closeKeyboard:(id)sender; //close
-(IBAction)_picker:(id)sender;  //picker

// Allows you to set the delegate from outside
@property (strong) id<SecondViewDelegate> delegate;
@end