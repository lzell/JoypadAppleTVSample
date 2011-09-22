//
//  JoypadAppleTVSampleAppliance.h
//  JoypadAppleTVSample
//
//  Created by Lou Zell on 9/22/11.
//  Copyright 2011 Hazelmade. All rights reserved.
//

#import "BackRowExtras.h"
#import "BackRow.h"


@class TopShelfController;

@interface JoypadAppleTVSampleAppliance : BRBaseAppliance
{
  TopShelfController *_topShelfController;
	NSArray *_applianceCategories;
}

@property(nonatomic, readonly, retain) id topShelfController;

+ (NSArray*) applianceCategories;

@end
