//
//  LoginViewController.h
//  Componentes02
//
//  Created by Felipe Hernandez on 31/12/15.
//  Copyright © 2015 Felipe Hernandez. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface LoginViewController : NSViewController
@property (weak) IBOutlet NSTextField *txtUsuario;
@property (weak) IBOutlet NSSecureTextField *txtPassword;
- (IBAction)Logear:(id)sender;

@end
