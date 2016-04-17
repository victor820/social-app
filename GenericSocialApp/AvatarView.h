//
//  AvatarView.h
//  PeggSite
//
//  Created by Victor Belenko  on 3/30/14.
//  Copyright (c) 2014 Victor Belenko . All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol AvatarViewDelegate;

@interface AvatarView : UIView

@property (nonatomic, strong) NSString *avatarURL;
@property (nonatomic, strong) UIImageView *avatarImageView;
@property (nonatomic, weak) IBOutlet id <AvatarViewDelegate> delegate;
@property (nonatomic, assign) BOOL editable, photoMode;

- (id)initWithAvatarURL:(NSString *)avatarURL;

@end

@protocol AvatarViewDelegate

- (void)avatarViewWasSelected:(AvatarView *)avatarView;

@end