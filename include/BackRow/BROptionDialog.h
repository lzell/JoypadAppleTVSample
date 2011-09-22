/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRMenuController.h"
#import "BRMenuListItemProvider.h"

@class NSMutableArray, NSString, NSDictionary;

@interface BROptionDialog : BRMenuController <BRMenuListItemProvider> {
@private
	NSString *_tag;	// 100 = 0x64
	int _currentSelection;	// 104 = 0x68
	NSDictionary *_userInfo;	// 108 = 0x6c
	NSMutableArray *_options;	// 112 = 0x70
	id _delegate;	// 116 = 0x74
	SEL _actionSelector;	// 120 = 0x78
}
@property(retain) NSString *tag;	// G=0x315a5c25; S=0x315a5acd; converted property
@property(retain) NSDictionary *userInfo;	// G=0x315a50c9; S=0x315a4f09; converted property
- (id)init;	// 0x315a497d
- (BOOL)_itemSelected:(id)selected;	// 0x315db629
- (void)_setSelectedIndex:(long)index;	// 0x315a5c15
- (void)addOptionText:(id)text;	// 0x315a4d7d
- (void)addOptionText:(id)text isDefault:(BOOL)aDefault;	// 0x315a4d19
- (void)dealloc;	// 0x315a6125
- (float)heightForRow:(long)row;	// 0x315a4dbd
- (long)itemCount;	// 0x315a4b71
- (id)itemForRow:(long)row;	// 0x315a4dc1
- (float)listVerticalOffset;	// 0x315db6d9
- (BOOL)rowSelectable:(long)selectable;	// 0x315db5c9
- (long)selectedIndex;	// 0x315a50b9
- (id)selectedText;	// 0x315db70d
- (void)setActionSelector:(SEL)selector target:(id)target;	// 0x315a4eb5
// converted property setter: - (void)setTag:(id)tag;	// 0x315a5acd
// converted property setter: - (void)setUserInfo:(id)info;	// 0x315a4f09
// converted property getter: - (id)tag;	// 0x315a5c25
- (id)titleForRow:(long)row;	// 0x315a4e6d
// converted property getter: - (id)userInfo;	// 0x315a50c9
@end

