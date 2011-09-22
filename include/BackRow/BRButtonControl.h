/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class NSArray, BRImageControl, BRImage, BRTextControl;

@interface BRButtonControl : BRControl {
@private
	int _style;	// 40 = 0x28
	BRImageControl *_imageControl;	// 44 = 0x2c
	BRImageControl *_badgeControl;	// 48 = 0x30
	BRTextControl *_titleControl;	// 52 = 0x34
	BRTextControl *_subtitleControl;	// 56 = 0x38
	BRImageControl *_overlayImageControl;	// 60 = 0x3c
	BRImageControl *_backgroundImageControl;	// 64 = 0x40
	BRImageControl *_bottomBackgroundImageControl;	// 68 = 0x44
	BRImage *_image;	// 72 = 0x48
	BRImage *_highlightedImage;	// 76 = 0x4c
	NSArray *_subcontrolOrder;	// 80 = 0x50
	BOOL _subcontrolsNeedSorting;	// 84 = 0x54
	BOOL _buttonEnabled;	// 85 = 0x55
}
@property(retain) id badgeImage;	// G=0x31607249; S=0x31607269; converted property
@property(retain) BRImage *highlightedImage;	// G=0x31606f81; S=0x31607115; converted property
@property(retain) BRImage *image;	// G=0x31607349; S=0x31607369; converted property
@property(retain) id subtitle;	// G=0x316073b1; S=0x316073d1; converted property
@property(retain) id title;	// G=0x316074d9; S=0x316074f9; converted property
+ (id)actionButtonWithImage:(id)image subtitle:(id)subtitle badge:(id)badge;	// 0x315a26f5
+ (id)actionButtonWithTitle:(id)title subtitle:(id)subtitle badge:(id)badge;	// 0x315a2835
+ (id)dashedActionButtonWithTitle:(id)title subtitle:(id)subtitle selectable:(BOOL)selectable;	// 0x31607651
+ (id)dialogButtonWithTitle:(id)title;	// 0x316076c1
+ (id)glossyButtonWithTitle:(id)title;	// 0x31607601
- (id)init;	// 0x3159e39d
- (id)_addFadeAnimationToLayer:(id)layer forKey:(id)key;	// 0x3159e525
- (void)_addOpacityFadeAnimationIfNeededToControl:(id)control;	// 0x31607b05
- (void)_addSortedControl:(id)control;	// 0x31607979
- (void)_focusWasChanged;	// 0x315a1601
- (void)_layoutActionSublayers;	// 0x31608771
- (void)_layoutDashedSublayers;	// 0x316084b5
- (void)_layoutDialogSublayers;	// 0x316082c1
- (void)_layoutGlossySublayers;	// 0x31608109
- (id)_nonFocusedOpacityForControlNamed:(id)controlNamed;	// 0x31607b85
- (void)_setBackgroundHighlightImage:(id)image;	// 0x316078ad
- (void)_setBottomBackgroundHighlightImage:(id)image;	// 0x316077e1
- (void)_setControlOrderArray:(id)array;	// 0x316076fd
- (void)_setNonAttributedSubtitle:(id)subtitle;	// 0x315a27a1
- (void)_setNonAttributedTitle:(id)title;	// 0x3159ead9
- (void)_updateAllFocusOpacities;	// 0x315a1665
- (void)_updateBackgroundDialogImages;	// 0x31607755
- (void)_updateFocusOpacityOfControl:(id)control;	// 0x31607a5d
- (void)_updateImageLayer;	// 0x3159e3f9
// converted property getter: - (id)badgeImage;	// 0x31607249
- (void)controlWasActivated;	// 0x31607ced
- (void)controlWasFocused;	// 0x315a15c5
- (void)controlWasUnfocused;	// 0x315a1ba9
- (void)dealloc;	// 0x315a0005
// converted property getter: - (id)highlightedImage;	// 0x31606f81
// converted property getter: - (id)image;	// 0x31607349
- (void)layoutSubcontrols;	// 0x31606fb9
- (id)overayImage;	// 0x3160715d
// converted property setter: - (void)setBadgeImage:(id)image;	// 0x31607269
- (void)setButtonEnabled:(BOOL)enabled;	// 0x316070c9
- (void)setButtonStyle:(int)style;	// 0x31608dc5
// converted property setter: - (void)setHighlightedImage:(id)image;	// 0x31607115
// converted property setter: - (void)setImage:(id)image;	// 0x31607369
- (void)setNonAttributedSubtitle:(id)subtitle;	// 0x31606f91
- (void)setNonAttributedTitle:(id)title;	// 0x31606fa5
- (void)setOverlayImage:(id)image;	// 0x3160717d
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x316073d1
// converted property setter: - (void)setTitle:(id)title;	// 0x316074f9
// converted property getter: - (id)subtitle;	// 0x316073b1
// converted property getter: - (id)title;	// 0x316074d9
@end
