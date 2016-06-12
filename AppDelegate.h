//
//  AppDelegate.h
//  PalindromeLab
//
//  Created by Flatiron School on 6/12/16.
//  Copyright © 2016 Flatiron School. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

-(BOOL)isIsPalindrome: (NSString*)string;

@end

