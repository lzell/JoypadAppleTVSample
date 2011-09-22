//
//  JoypadMenuController.h
//  JoypadAppleTVSample
//
//  Created by Lou Zell on 9/22/11.
//  Copyright 2011 Hazelmade. All rights reserved.
//

#import "BRMediaMenuController.h"

@class JoypadManager;

@interface JoypadMenuController : BRMediaMenuController
{
	NSMutableArray		*_names;
  JoypadManager *_joypadManager;
}

//list provider
- (float)heightForRow:(long)row;
- (long)itemCount;
- (id)itemForRow:(long)row;
- (BOOL)rowSelectable:(long)selectable;
- (id)titleForRow:(long)row;

@end
