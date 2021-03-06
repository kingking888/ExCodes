//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSImageView.h"

@interface MMMessageCellAvatarView : NSImageView
{
    BOOL m_isMouseDown;
    BOOL m_isMousePressed;
    BOOL _allowPress;
    CDUnknownBlockType _didDoubleClickBlock;
    CDUnknownBlockType _didClickBlock;
    CDUnknownBlockType _didPressBlock;
}

@property(copy, nonatomic) CDUnknownBlockType didPressBlock; // @synthesize didPressBlock=_didPressBlock;
@property(copy, nonatomic) CDUnknownBlockType didClickBlock; // @synthesize didClickBlock=_didClickBlock;
@property(copy, nonatomic) CDUnknownBlockType didDoubleClickBlock; // @synthesize didDoubleClickBlock=_didDoubleClickBlock;
@property(nonatomic) BOOL allowPress; // @synthesize allowPress=_allowPress;
- (void).cxx_destruct;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

