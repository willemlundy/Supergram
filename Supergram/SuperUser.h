//
//  SuperUser.h
//  Supergram
//
//  Created by Rumiya Murtazina on 10/22/15.
//  Copyright © 2015 Shotty Shack Games. All rights reserved.
//

#import <Parse/Parse.h>
#import <ParseUI/ParseUI.h>
#import "SGConstants.h"

@interface SuperUser : PFUser <PFSubclassing>
@property PFFile *profilePic;

@end
