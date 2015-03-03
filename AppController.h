//
//  AppController.h
//  CollectionView
//
//  Created by Alessandro Sangiuliano on 01/03/15.
//  Copyright 2015 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppController : NSObject 
{
	IBOutlet NSArrayController *arrayController;
	NSMutableArray *students;
}

//@property (assign) NSMutableArray *students;
@end
