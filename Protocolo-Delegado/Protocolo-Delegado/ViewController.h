//
//  ViewController.h
//  Protocolo-Delegado
//
//  Created by Felipe Hernandez on 11/09/16.
//  Copyright © 2016 Felipe Hernandez. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EjemploProtocolo.h"

@interface ViewController : UIViewController<EjemploProtocoloDelegate>
@property (weak, nonatomic) IBOutlet UILabel *lblInformacion;


@end

