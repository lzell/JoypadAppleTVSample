/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRCursorLayer, NSTimer, BRHorizontalSegmentedWidget;

@interface BRCursorControl : BRControl {
@private
	BRControl *_trackedControl;	// 40 = 0x28
	BRControl *_previousTrackedControl;	// 44 = 0x2c
	BRCursorLayer *_cursorLayer;	// 48 = 0x30
	int _style;	// 52 = 0x34
	BOOL _cursorInactive;	// 56 = 0x38
	BRHorizontalSegmentedWidget *_previousBadge;	// 60 = 0x3c
	BRHorizontalSegmentedWidget *_badge;	// 64 = 0x40
	NSTimer *_removePreviousBadgeTimer;	// 68 = 0x44
}
@property(assign) BOOL cursorInactive;	// G=0x315e19a1; S=0x315e2189; converted property
@property(readonly, retain) BRCursorLayer *cursorLayer;	// G=0x315e19b1; converted property
@property(assign) int cursorStyle;	// G=0x315e1991; S=0x315afae5; converted property
- (id)init;	// 0x3159dbad
- (void)_addCursor;	// 0x315e1f0d
- (void)_cursorFrameChanged:(id)changed;	// 0x315e1b79
- (void)_focusChanged:(id)changed;	// 0x3159eba1
- (void)_removeCursor;	// 0x315a1495
- (void)_removePreviousBadgeTimerFired:(id)fired;	// 0x315e1a75
- (void)_removePreviousTrackedControl;	// 0x315e19c9
- (void)_trackFocusedControl:(id)control;	// 0x315e1b8d
- (void)_trackedBadgeUpdated:(id)updated;	// 0x315e1b25
- (void)_updateBadgeForTrackedControl;	// 0x315e1acd
- (void)_updateCursorPositioning;	// 0x3159ec15
- (void)_updateMyBadge:(id *)badge withTrackedControl:(id)trackedControl;	// 0x315e2231
- (void)_updatePreviousBadge;	// 0x315e1af9
- (void)controlWasActivated;	// 0x315e2149
// converted property getter: - (BOOL)cursorInactive;	// 0x315e19a1
// converted property getter: - (id)cursorLayer;	// 0x315e19b1
// converted property getter: - (int)cursorStyle;	// 0x315e1991
- (void)dealloc;	// 0x315a65cd
- (void)layoutSubcontrols;	// 0x315e2135
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x315e209d
- (id)preferredActionForKey:(id)key;	// 0x315e1fdd
// converted property setter: - (void)setCursorInactive:(BOOL)inactive;	// 0x315e2189
// converted property setter: - (void)setCursorStyle:(int)style;	// 0x315afae5
- (void)setOpacity:(float)opacity;	// 0x315e1da5
@end

