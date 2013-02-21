//
//  ViewController.m
//  CarmenJohnson_AOC2Week3
//
//  Created by Carmen Johnson on 2/20/13.
//  Copyright (c) 2013 Carmen Johnson. All rights reserved.
//

#import "ViewController.h"


@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view/from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

// Switch to SecondViewController (Adding Event page)
-(IBAction)addEvent:(id)sender
{
    SecondViewController *_switchPage = [[SecondViewController alloc] initWithNibName:@"SecondView" bundle:nil];
    if (_switchPage != nil)
    {
        _switchPage.delegate = self;
        
        [self presentViewController:_switchPage animated:true completion:nil];
        NSLog(@"Add Event Button Pressed");
    }
}

-(void)eventSaved:(NSString*)_eventSaved dateSaved:(NSDate *)_dateSaved
{
    // \n represents a new line/spaces between events
    NSString *eventText = [NSString stringWithFormat:@"\n\n%@\n%@", _eventSaved, _dateSaved];
    
    if ([eventField.text isEqualToString:@""])
    {
        eventField.text = [NSString stringWithFormat:@"%@\n%@", _eventSaved, _dateSaved];
    }
    else
    {
        eventField.text = [eventField.text stringByAppendingString:eventText];
    }
}

@end
