/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRKeyboard.h"


__attribute__((visibility("hidden")))
@interface BRKeyboardHex : BRKeyboard {
}
- (id)init;	// 0x315fc075
- (id)_keyboardDataFileName;	// 0x315fc0b5
- (id)_mainKeyRowWithKeys:(id)keys index:(int)index;	// 0x315fbffd
- (float)_mainKeysContainerBaseGap:(id)gap resolutionScale:(float)scale;	// 0x315fc0cd
- (CGSize)_mainKeysContainerSize:(id)size resolutionScale:(float)scale;	// 0x315fc279
- (CGSize)_minTextEntryControlSize:(id)size resolutionScale:(float)scale;	// 0x315fc1d9
- (int)_numberOfColumnsForMainKeyRowIndex:(int)mainKeyRowIndex;	// 0x315fbfed
- (int)_numberOfMainKeyRows;	// 0x315fbfe9
- (float)_preferredGlyphHeight:(id)height;	// 0x315fbfe1
- (float)_preferredGlyphWidth:(id)width;	// 0x315fbfd9
- (float)_textFieldBackgroundBaseGap:(id)gap resolutionScale:(float)scale;	// 0x315fc0e9
- (CGSize)_textFieldBackgroundSize:(id)size resolutionScale:(float)scale;	// 0x315fc105
- (float)_topMostUIElementGap:(id)gap resolutionScale:(float)scale;	// 0x315fc1bd
- (id)name;	// 0x315fbfc1
- (id)popupKeyboardForKeyControl:(id)keyControl baseKeyboardType:(int)type;	// 0x315fbfd1
- (BOOL)requiresTextFieldLabel;	// 0x315fbfd5
@end

