//
//  Student.m
//  CollectionView
//
//  Created by Alessandro Sangiuliano on 01/03/15.
//  Copyright 2015 __MyCompanyName__. All rights reserved.
//

#import "Student.h"


@implementation Student

//@synthesize name;

- (id) init
{
	self = [super init];
	name = @"Nil Billy";
	return self;
}

- (void) setName:(NSString*)aName
{
	name = aName;
}
@end
