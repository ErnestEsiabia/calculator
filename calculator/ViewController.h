//
//  ViewController.h
//  calculator
//
//  Created by ilabadmin on 6/29/16.
//  Copyright (c) 2016 strathmore ernest. All rights reserved.
//

#import <UIKit/UIKit.h>



typedef enum{ Plus,Minus,Multiply,Divide} CalcOperation;

@interface ViewController : UIViewController {
    IBOutlet UITextField *display;
    IBOutlet UIButton *cbutton;
    NSString *storage;
    CalcOperation operation;
}

- (IBAction) button1;
- (IBAction) button2;
- (IBAction) button3;
- (IBAction) button4;
- (IBAction) button5;
- (IBAction) button6;
- (IBAction) button7;
- (IBAction) button8;
- (IBAction) button9;
- (IBAction) button0;
- (IBAction) plusbutton;
- (IBAction) equalsbutton;
- (IBAction) minusbutton;
- (IBAction) multiplybutton;
- (IBAction) dividebutton;
- (IBAction) clearDisplay;

@end