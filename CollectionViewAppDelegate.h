//
//  CollectionViewAppDelegate.h
//  CollectionView
//
//  Created by Alessandro Sangiuliano on 01/03/15.
//  Copyright 2015 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface CollectionViewAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow __unsafe_unretained *window;
}

@property (assign) IBOutlet NSWindow *window;

@end
