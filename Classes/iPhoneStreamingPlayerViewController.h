//
//  iPhoneStreamingPlayerViewController.h
//  iPhoneStreamingPlayer
//
//  Created by Matt Gallagher on 28/10/08.
//  Copyright Matt Gallagher 2008. All rights reserved.
//
//  Permission is given to use this source code file, free of charge, in any
//  project, commercial or otherwise, entirely at your risk, with the condition
//  that any redistribution (in part or whole) of source code must retain
//  this copyright and permission notice. Attribution in compiled projects is
//  appreciated but not required.
//

#import <UIKit/UIKit.h>

@class AudioStreamer, LevelMeterView;

@interface iPhoneStreamingPlayerViewController : UIViewController
{
	IBOutlet UITextField *downloadSourceField;
	IBOutlet UIButton *button;
	IBOutlet UIView *volumeSlider;
	IBOutlet UILabel *positionLabel;
	IBOutlet UISlider *progressSlider;
	IBOutlet UITextField *metadataArtist;
	IBOutlet UITextField *metadataTitle;
	IBOutlet UITextField *metadataAlbum;
	AudioStreamer *streamer;
	NSTimer *progressUpdateTimer;
	NSTimer *levelMeterUpdateTimer;
	LevelMeterView *levelMeterView;
	NSString *currentArtist;
	NSString *currentTitle;
}

@property (retain) NSString* currentArtist;
@property (retain) NSString* currentTitle;

- (IBAction)buttonPressed:(id)sender;
- (void)spinButton;
- (void)forceUIUpdate;
- (void)createTimers:(BOOL)create;
- (void)playbackStateChanged:(NSNotification *)aNotification;
- (void)updateProgress:(NSTimer *)updatedTimer;
- (IBAction)sliderMoved:(UISlider *)aSlider;

@end

