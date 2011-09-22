//
//  JoypadMenuController.m
//  JoypadAppleTVSample
//
//  Created by Lou Zell on 9/22/11.
//  Copyright 2011 Hazelmade. All rights reserved.
//

#import "ApplianceConfig.h"
#import "JoypadMenuController.h"
#import "BackRow.h"
#import "JoypadSDK.h"

@class BRWebView;

@interface JoypadMenuController (Private)

-(void)configureJoypadManager;

@end


@implementation JoypadMenuController

+(JoypadControllerLayout *)joypadLayout
{
  JoypadControllerLayout *customLayout = [[JoypadControllerLayout alloc] init];
  [customLayout setName:@"Apple TV Test App"];
  [customLayout addAnalogStickWithFrame:CGRectMake(0, 70, 240, 240) identifier:kJoyInputAnalogStick1];
  
  [customLayout addButtonWithFrame:CGRectMake(280,0,100,320) 
                             label:@"B" 
                          fontSize:36
                             shape:kJoyButtonShapeSquare
                             color:kJoyButtonColorBlue
                        identifier:kJoyInputBButton];
  
  [customLayout addButtonWithFrame:CGRectMake(380,0,100,320) 
                             label:@"A" 
                          fontSize:36
                             shape:kJoyButtonShapeSquare
                             color:kJoyButtonColorBlue
                        identifier:kJoyInputAButton];
  
  return [customLayout autorelease];
}

-(id)init
{
  if((self = [super init])) 
  {
    [self setListTitle:APPLIANCE_MODULE_NAME];

    BRImage *sp = [[BRThemeInfo sharedTheme] previewActionImage];

    [self setListIcon:sp horizontalOffset:0.0 kerningFactor:0.15];

    _names = [[NSMutableArray alloc] init];
    [_names addObject:@"Connect To Joypad (watch /var/log/syslog)"];

    [[self list] setDatasource:self];

    _joypadManager = [[JoypadManager alloc] init];
    [_joypadManager setDelegate:self];
    [_joypadManager useCustomLayout:[[self class] joypadLayout]];
  }
  return self;
}

-(void)dealloc
{
	[_names release];
  [_joypadManager release];
	[super dealloc];
}


-(id)previewControlForItem:(long)item
{
	BRImageAndSyncingPreviewController *controller = [[BRImageAndSyncingPreviewController alloc] init];
	BRImage* previewImage = nil;
  
  if(item == 0)
  {
    // Is the bundleForClass stuff necessary?
    NSBundle *bundle = [NSBundle bundleForClass:[JoypadMenuController class]];
    previewImage = [BRImage imageWithPath:[bundle pathForResource:@"joypad_icon" 
                                                           ofType:@"png"]];
  }
  
  [controller setImage:previewImage];
	
	return controller;
}

-(void)itemSelected:(long)selected
{
	if(selected == 0)
  {
    [_joypadManager startFindingDevices];
	}
}

-(float)heightForRow:(long)row
{
	return 0.0f;
}

-(long)itemCount
{
	return [_names count];
}

-(id)itemForRow:(long)row
{
	if(row > [_names count])
		return nil;
	
	BRMenuItem* menuItem	= [[BRMenuItem alloc] init];
	NSString* menuTitle		= [_names objectAtIndex:row];
	
	[menuItem setText:menuTitle withAttributes:[[BRThemeInfo sharedTheme] menuItemTextAttributes]];
	
	switch(row)
  {
		case 0:
			[menuItem addAccessoryOfType:1];
			break;
  }
	
	return menuItem;
}

-(BOOL)rowSelectable:(long)selectable
{
  return YES;
}

-(id)titleForRow:(long)row
{
	return [_names objectAtIndex:row];
}

#pragma mark JoypadManager delegate callbacks
-(void)joypadManager:(JoypadManager *)manager didFindDevice:(JoypadDevice *)device previouslyConnected:(BOOL)prev
{
  NSLog(@"Found device: %@", [device name]);
  [_joypadManager connectToDevice:device asPlayer:1];
}

-(void)joypadManager:(JoypadManager *)manager didLoseDevice:(JoypadDevice *)device
{
  NSLog(@"Lost device: %@", [device name]);
}

-(void)joypadManager:(JoypadManager *)manager deviceDidConnect:(JoypadDevice *)device player:(unsigned int)player
{
  NSLog(@"Connected to device: %@", [device name]);
  [device setDelegate:self];
}

-(void)joypadManager:(JoypadManager *)manager deviceDidDisconnect:(JoypadDevice *)device player:(unsigned int)player
{
  NSLog(@"Disconnect from device: %@", [device name]);
  [device setDelegate:nil];
}

#pragma mark JoypadDevice delegate callbacks
-(void)joypadDevice:(JoypadDevice *)device analogStick:(JoyInputIdentifier)stick didMove:(JoypadStickPosition)newPosition
{
  NSLog(@"Analog stick distance: %f, angle (rad): %f", newPosition.distance, newPosition.angle);
}

-(void)joypadDevice:(JoypadDevice *)device buttonDown:(JoyInputIdentifier)button
{
  switch(button)
  {
    case kJoyInputAButton:  NSLog(@"A is down");  break;
    case kJoyInputBButton:  NSLog(@"B is down");  break;
    default:
      NSLog(@"Button %i is down", button);
      break;
  }
}

-(void)joypadDevice:(JoypadDevice *)device buttonUp:(JoyInputIdentifier)button
{
  switch(button)
  {
    case kJoyInputAButton:  NSLog(@"A is up");  break;
    case kJoyInputBButton:  NSLog(@"B is up");  break;
    default:
      NSLog(@"Button %i is up", button);
      break;
  }
}



@end
