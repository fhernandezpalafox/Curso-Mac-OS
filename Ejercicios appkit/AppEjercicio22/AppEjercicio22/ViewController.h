//
//  ViewController.h
//  AppEjercicio22
//
//  Created by Felipe Hernandez on 05/01/17.
//  Copyright © 2017 Felipe Hernandez. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface ViewController : NSViewController
@property (weak) IBOutlet NSTextField *txtUsuario;
@property (weak) IBOutlet NSSecureTextField *txtPassword;

- (IBAction)Entrar:(id)sender;

@end

