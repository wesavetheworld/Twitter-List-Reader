//
//  TwitterAccountsViewController.h
//  Twitter List Reader
//
//  Created by Michael Koby on 11/30/11.
//  Copyright (c) 2011 Michael Koby. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Accounts/Accounts.h>
#import <Twitter/Twitter.h>

#define kAccountName 1

@interface TwitterAccountsViewController : UITableViewController <UIAlertViewDelegate> {
    NSArray *twitterAccounts;
    UITableView *accountsTable;
    ACAccount *selectedAccount;
}

@property (nonatomic, strong) NSArray *twitterAccounts;
@property (nonatomic, strong) IBOutlet UITableView *accountsTable;
@property (nonatomic, strong) ACAccount *selectedAccount;

- (void)getTwitterAccounts;

@end
