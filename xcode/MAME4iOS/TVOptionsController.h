//
//  TVOptionsController.h
//  MAME tvOS
//
//  Created by Yoshi Sugawara on 1/17/19.
//  Copyright © 2019 Seleuco. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "Options.h"
#import "Globals.h"
#import "EmulatorController.h"
#import "OptionsTableViewController.h"

enum OptionSections
{
    kInputSection = 0,
    kImportSection,
    kScreenSection,
    kVectorSection,
    kMiscSection,
    kFilterSection,
    kResetSection,
    kNumSections
};

@interface TVOptionsController : OptionsTableViewController

@end
