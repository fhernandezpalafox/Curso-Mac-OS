//
//  NSPopUpButtonViewController.h
//  Componentes02
//
//  Created by Felipe Hernandez on 16/09/16.
//  Copyright © 2016 Felipe Hernandez. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface NSPopUpButtonViewController : NSViewController
@property (weak) IBOutlet NSPopUpButtonCell *popUp;
@property (weak) IBOutlet NSTextField *txtItem;
- (IBAction)Agregar:(id)sender;
@property (weak) IBOutlet NSTextField *lblInformacion;
- (IBAction)Cambia:(id)sender;
@property (weak) IBOutlet NSPopUpButton *Lista;


@end
