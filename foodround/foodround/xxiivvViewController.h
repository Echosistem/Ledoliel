//
//  xxiivvViewController.h
//  foodround
//
//  Created by Devine Lu Linvega on 2014-06-04.
//  Copyright (c) 2014 XXIIVV. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AudioToolbox/AudioToolbox.h>
#import <AVFoundation/AVFoundation.h>

@interface xxiivvViewController : UIViewController

// Session

@property (strong, nonatomic) IBOutlet UIView *mainSessionView;

@property (strong, nonatomic) IBOutlet UIView *menuView;
@property (strong, nonatomic) IBOutlet UIView *selectionView;
@property (strong, nonatomic) IBOutlet UIView *submenuView;
@property (strong, nonatomic) IBOutlet UILabel *selectorView;

@property (strong, nonatomic) IBOutlet UIButton *menuOption1Button;
@property (strong, nonatomic) IBOutlet UIButton *menuOption2Button;
@property (strong, nonatomic) IBOutlet UIButton *menuOption3Button;
@property (strong, nonatomic) IBOutlet UIButton *menuOption4Button;

@property (strong, nonatomic) IBOutlet UIButton *submenuOption1Button;
@property (strong, nonatomic) IBOutlet UIButton *submenuOption2Button;

@property (strong, nonatomic) IBOutlet UIView *statusView;
@property (strong, nonatomic) IBOutlet UILabel *relationshipLabel;
@property (strong, nonatomic) IBOutlet UIView *relationshipRating;
@property (strong, nonatomic) IBOutlet UIView *relationshipRatingBar;
@property (strong, nonatomic) IBOutlet UILabel *relationshipValueLabel;
@property (strong, nonatomic) IBOutlet UIView *hintView;
@property (strong, nonatomic) IBOutlet UILabel *hintLabel;
@property (strong, nonatomic) IBOutlet UIButton *confirmButton;

@property (strong, nonatomic) IBOutlet UILabel *guestNameLabel;
@property (strong, nonatomic) IBOutlet UILabel *guestAttrLabel;

@property (strong, nonatomic) IBOutlet UIView *resultView;
@property (strong, nonatomic) IBOutlet UILabel *resultPaneLabel1;
@property (strong, nonatomic) IBOutlet UILabel *resultPaneLabel2;
@property (strong, nonatomic) IBOutlet UILabel *resultPaneLabel3;
@property (strong, nonatomic) IBOutlet UILabel *resultPaneLabel4;
@property (strong, nonatomic) IBOutlet UIButton *resultCloseButton;

@property (strong, nonatomic) IBOutlet UILabel *resultLabelInit;
@property (strong, nonatomic) IBOutlet UILabel *resultLabelPositive;
@property (strong, nonatomic) IBOutlet UILabel *resultLabelNegative;
@property (strong, nonatomic) IBOutlet UILabel *resultLabelSummary;

@property (strong, nonatomic) IBOutlet UIView *guestStatusView;
@property (strong, nonatomic) IBOutlet UILabel *guestStatusLabel;
@property (strong, nonatomic) IBOutlet UILabel *guestStatusNoteLabel;

@property (strong, nonatomic) IBOutlet UIView *guestGraphics;
@property (strong, nonatomic) IBOutlet UIImageView *guestGraphic1;

@property (strong, nonatomic) IBOutlet UIView *roundsView;
@property (strong, nonatomic) IBOutlet UILabel *roundsLabel;
@property (strong, nonatomic) IBOutlet UIView *roundsProgressView;
@property (strong, nonatomic) IBOutlet UIView *roundsCount1View;
@property (strong, nonatomic) IBOutlet UIView *roundsCount2View;
@property (strong, nonatomic) IBOutlet UIView *roundsCount3View;
@property (strong, nonatomic) IBOutlet UIView *roundsCount4View;
@property (weak, nonatomic) IBOutlet UIButton *twitterShareButton;

@property (strong, nonatomic) IBOutlet UIButton *guestStatusCloseButton;

// Guest Graphics

@property (strong, nonatomic) IBOutlet UIImageView *guestGraphicHeadLeft;
@property (strong, nonatomic) IBOutlet UIImageView *guestGraphicHeadRight;
@property (strong, nonatomic) IBOutlet UIImageView *guestGraphicNeckLeft;
@property (strong, nonatomic) IBOutlet UIImageView *guestGraphicNeckRight;
@property (strong, nonatomic) IBOutlet UIImageView *guestGraphicShoulderLeft;
@property (strong, nonatomic) IBOutlet UIImageView *guestGraphicShoulderRight;
@property (strong, nonatomic) IBOutlet UIImageView *guestGraphicFaceLeft;
@property (strong, nonatomic) IBOutlet UIImageView *guestGraphicFaceRight;
@property (strong, nonatomic) IBOutlet UIImageView *guestGraphicArmorLeft;
@property (strong, nonatomic) IBOutlet UIImageView *guestGraphicArmorRight;
@property (strong, nonatomic) IBOutlet UIImageView *guestGraphicEyesLeft;
@property (strong, nonatomic) IBOutlet UIImageView *guestGraphicEyesRight;
@property (strong, nonatomic) IBOutlet UIImageView *guestGraphicMouth;

// Actions

- (IBAction)guestStatusCloseButton:(id)sender;
- (IBAction)resultCloseButton:(id)sender;
- (IBAction)menuOption1Button:(id)sender;
- (IBAction)menuOption2Button:(id)sender;
- (IBAction)menuOption3Button:(id)sender;
- (IBAction)menuOption4Button:(id)sender;
- (IBAction)submenuOption1Button:(id)sender;
- (IBAction)submenuOption2Button:(id)sender;
- (IBAction)confirmButton:(id)sender;
- (IBAction)twitterShareButton:(id)sender;

// World Map

@property (strong, nonatomic) IBOutlet UIView *mainMapView;

@property (strong, nonatomic) IBOutlet UILabel *destinationLabel;

@property (strong, nonatomic) IBOutlet UIView *spellbookPreviewView;
@property (strong, nonatomic) IBOutlet UILabel *spellbookSayLabel;
@property (strong, nonatomic) IBOutlet UILabel *spellbookTouchLabel;
@property (strong, nonatomic) IBOutlet UILabel *spellbookGiveLabel;

@property (strong, nonatomic) IBOutlet UILabel *spellbookSaySpell1;
@property (strong, nonatomic) IBOutlet UILabel *spellbookSaySpell2;
@property (strong, nonatomic) IBOutlet UILabel *spellbookTouchSpell1;
@property (strong, nonatomic) IBOutlet UILabel *spellbookTouchSpell2;
@property (strong, nonatomic) IBOutlet UILabel *spellbookGiveSpell1;
@property (strong, nonatomic) IBOutlet UILabel *spellbookGiveSpell2;

@property (strong, nonatomic) IBOutlet UILabel *spellbookPreviewLabel;

@property (strong, nonatomic) IBOutlet UIButton *quitButton;

@property (strong, nonatomic) IBOutlet UIView *planetChoice1View;
@property (strong, nonatomic) IBOutlet UILabel *planetChoice1GuestLabel;
@property (strong, nonatomic) IBOutlet UILabel *planetChoice1GuestAttr1Label;
@property (strong, nonatomic) IBOutlet UILabel *planetChoice1GuestAttr2Label;
@property (strong, nonatomic) IBOutlet UILabel *planetChoice1GuestAttr3Label;
@property (strong, nonatomic) IBOutlet UIView *planetChoice1Graphics;

@property (strong, nonatomic) IBOutlet UIButton *planetChoice1Button;
- (IBAction)planetChoice1Button:(id)sender;
@property (strong, nonatomic) IBOutlet UILabel *gameStartLabel;

@property (strong, nonatomic) IBOutlet UIView *planetChoice2View;
@property (strong, nonatomic) IBOutlet UIView *planetChoice2Graphics;
@property (strong, nonatomic) IBOutlet UILabel *planetChoice2GuestLabel;
@property (strong, nonatomic) IBOutlet UILabel *planetChoice2GuestAttr1Label;
@property (strong, nonatomic) IBOutlet UILabel *planetChoice2GuestAttr2Label;
@property (strong, nonatomic) IBOutlet UILabel *planetChoice2GuestAttr3Label;
@property (strong, nonatomic) IBOutlet UIButton *planetChoice2Button;

@property (strong, nonatomic) IBOutlet UIImageView *planetChoice1Graphic1;
@property (strong, nonatomic) IBOutlet UIImageView *planetChoice1Graphic2;
@property (strong, nonatomic) IBOutlet UIImageView *planetChoice1Graphic3;
@property (strong, nonatomic) IBOutlet UIImageView *planetChoice2Graphic1;
@property (strong, nonatomic) IBOutlet UIImageView *planetChoice2Graphic2;
@property (strong, nonatomic) IBOutlet UIImageView *planetChoice2Graphic3;

@property (strong, nonatomic) IBOutlet UIButton *spellbookPreviewToggleButton;
- (IBAction)spellbookPreviewToggleButton:(id)sender;
@property (strong, nonatomic) IBOutlet UILabel *spellbookPreviewToggleLabel;

@property (strong, nonatomic) IBOutlet UILabel *gameScoreLabel;

- (IBAction)planetChoice2Button:(id)sender;

@property (strong, nonatomic) IBOutlet UIView *planetSelectionView;

- (IBAction)quitButton:(id)sender;

@property (strong, nonatomic) IBOutlet UIButton *cinematicToggleButton;
- (IBAction)cinematicToggleButton:(id)sender;

// Menu

@property (strong, nonatomic) IBOutlet UIView *mainMenuView;
@property (strong, nonatomic) IBOutlet UIButton *gameStartButton;
@property (weak, nonatomic) IBOutlet UIButton *gameAudioButton;

- (IBAction)gameStartButton:(id)sender;
- (IBAction)gameAudioButton:(id)sender;

// Modal

@property (strong, nonatomic) IBOutlet UIView *modalView;
@property (strong, nonatomic) IBOutlet UILabel *modalLabel;
@property (strong, nonatomic) IBOutlet UIButton *modalButton;
@property (strong, nonatomic) IBOutlet UIView *modalLabelFrame;
- (IBAction)modalButton:(id)sender;

@end

int currentGameStage = 1;
int currentGameRound = 0;
int currentMenuSelection = -1;
int currentSubmenuSelection = -1;
int currentSessionResultscreenPosition = 0;
int touchActive = 1;
int audioActive = 1;
float templateUnit = 30;

NSMutableDictionary *user;
NSMutableDictionary *guest;
NSMutableDictionary *spellbook;

NSTimer* flickrTimer;

AVAudioPlayer *audioPlayer;

AVAudioPlayer *ambient1Player;
AVAudioPlayer *ambient2Player;
AVAudioPlayer *ambient3Player;

NSString * ambient1TrackName;
NSString * ambient2TrackName;
NSString * ambient3TrackName;

