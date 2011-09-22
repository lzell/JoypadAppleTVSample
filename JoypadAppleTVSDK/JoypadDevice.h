//
//  JoypadDevice.h
//  Joypad SDK
//
//  Created by Lou Zell on 2/25/11.
//  Copyright 2011 Hazelmade. All rights reserved.
//
//  Please email questions to me, Lou, at lzell11@gmail.com
//

#import <Foundation/Foundation.h>
#import "JoypadConstants.h"

@interface JoypadDevice : NSObject

/**
 * Sets the object that will receive input from a JoypadDevice.
 * See the JoypadDeviceDelegate Category at the bottom of this header.
 */
-(void)setDelegate:(id)aDelegate;

/**
 * Gets the object that will receive input from a JoypadDevice.
 * See the JoypadDeviceDelegate Category at the bottom of this header.
 */
-(id)delegate;

/**
 * The name of this device.  This is the name that is displayed 
 * in iTunes when you connect your phone.
 */
-(NSString *)name;

/**
 * The player number of this device.  You set the player number when 
 * you initiate a connection.  For example:
 *
 *   -[JoypadManager connectToDevice:aDevice asPlayer:2];
 *   
 */
-(unsigned int)playerNumber;

/**
 * Is the device currently connected.
 */
-(BOOL)isConnected;

/**
 * Force a disconnect.
 */
-(void)disconnect;

@end



@interface NSObject (JoypadDeviceDelegate)

/**
 
 Implement the following methods in the class that will receive input from Joypad.
 For example, if you would like an instance of MyClass to receive accelerometer data, 
 you would implement something like this in MyClass:
 
  +----------------------------------------------------------------------------------------+
  | @implementation MyClass                                                                |
  |                                                                                        |
  | -(void)joypadDevice:(JoypadDevice *)device didAccelerate:(JoypadAcceleration)accel     |
  | {                                                                                      |
  |   NSLog(@"Received new accel data => x: %f, y: %f, z: %f", accel.x, accel.y, accel.z); |
  | }                                                                                      |
  |                                                                                        |
  | @end                                                                                   |
  +----------------------------------------------------------------------------------------+
 
 Please see the sample project that comes with the SDK download for more examples.
 
 */
-(void)joypadDevice:(JoypadDevice *)device didAccelerate:(JoypadAcceleration)accel;
-(void)joypadDevice:(JoypadDevice *)device dPad:(JoyInputIdentifier)dpad buttonUp:(JoyDpadButton)dpadButton;
-(void)joypadDevice:(JoypadDevice *)device dPad:(JoyInputIdentifier)dpad buttonDown:(JoyDpadButton)dpadButton;
-(void)joypadDevice:(JoypadDevice *)device buttonUp:(JoyInputIdentifier)button;
-(void)joypadDevice:(JoypadDevice *)device buttonDown:(JoyInputIdentifier)button;
-(void)joypadDevice:(JoypadDevice *)device analogStick:(JoyInputIdentifier)stick didMove:(JoypadStickPosition)newPosition;

@end
