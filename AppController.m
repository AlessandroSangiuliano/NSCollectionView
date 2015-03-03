//
//  AppController.m
//  CollectionView
//
//  Created by Alessandro Sangiuliano on 01/03/15.
//  Copyright 2015 __MyCompanyName__. All rights reserved.
//

#import "AppController.h"
#import "Student.h"

@implementation AppController

//@synthesize students;

- (void) awakeFromNib
{
	Student *s = [[Student alloc] init];
	s.name = @"Ciccio";
	students = [[NSMutableArray alloc] init];
	[arrayController addObject:s];
}
@end
