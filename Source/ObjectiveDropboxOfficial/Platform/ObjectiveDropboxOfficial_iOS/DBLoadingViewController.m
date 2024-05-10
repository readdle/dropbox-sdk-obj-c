///
/// Copyright (c) 2020 Dropbox, Inc. All rights reserved.
///

#import "DBLoadingViewController.h"

@interface DBLoadingViewController ()

@property (nonatomic, readwrite, strong) UIActivityIndicatorView *loadingSpinner;

@end

@implementation DBLoadingViewController

- (instancetype)init {
  self = [super initWithNibName:nil bundle:nil];
  if (self) {
    _loadingSpinner =
      [[UIActivityIndicatorView alloc] initWithActivityIndicatorStyle:UIActivityIndicatorViewStyleLarge];
  }
  return self;
}

- (void)viewDidLoad {
  [super viewDidLoad];
  UIView *view = self.view;
  view.backgroundColor = [UIColor.blackColor colorWithAlphaComponent:0.4];
  [view addSubview:_loadingSpinner];
  _loadingSpinner.translatesAutoresizingMaskIntoConstraints = NO;
  [NSLayoutConstraint activateConstraints:@[
    [_loadingSpinner.centerXAnchor constraintEqualToAnchor:view.centerXAnchor],
    [_loadingSpinner.centerYAnchor constraintEqualToAnchor:view.centerYAnchor],
  ]];
  [_loadingSpinner startAnimating];
}

@end
