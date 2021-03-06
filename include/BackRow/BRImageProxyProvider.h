/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRProvider.h"

@class NSArray;

@interface BRImageProxyProvider : NSObject <BRProvider> {
@private
	NSArray *_images;	// 4 = 0x4
}
+ (id)providerWithAssets:(id)assets;	// 0x315ce1c9
+ (id)providerWithImageProxies:(id)imageProxies;	// 0x315ce24d
- (id)initWithAssets:(id)assets;	// 0x315ce179
- (id)initWithImageProxies:(id)imageProxies;	// 0x315ce1fd
- (id)controlFactory;	// 0x315cdfe5
- (id)dataAtIndex:(long)index;	// 0x315ce085
- (long)dataCount;	// 0x315ce111
- (void)dealloc;	// 0x315ce131
- (id)hashForDataAtIndex:(long)index;	// 0x315cdfe9
@end

