//
//  Student.h
//  CollectionView
//
//  Created by Alessandro Sangiuliano on 01/03/15.
//  Copyright 2015 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface Student : NSObject 
{
	NSString *name;
}

//@property (assign) NSString *name;

- (void) setName:(NSString *)aName;
@end
