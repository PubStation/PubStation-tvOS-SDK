//
//  PSInterstitialAdManager.h
//  PubStationSDK
//
//  Copyright © 2016 PubStation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol PSLoadAdDelegate;
@protocol PSPlayAdDelegate;

/*!
 
 @abstract   This class contains the PubStation Interstitial Ad Manager. It contains all the functions to retrieve and show ads.
           
 @discussion In the simplest case (default behaviour), fetching of ads is happening automatically; in particular, this means that
             in this case the only methods of this class you might use are @b isAdReady (for checking, if an ad is available for playing)
             and @b showVideoAd (to play the interstitial ad).
 
             In addition to that, you might want to use the @b loadDelegate and
             @b playDelegate objects to let you inform about ad loading and playing events.
 
 */

@interface PSInterstitialAdManager : NSObject

/*!
 @abstract This method fetches a new ad. Calling this method is only necessary, if automatic fetching is disabled
           (i.e. with default settings, you don't need to call it).
 
 @discussion When calling this method, an ad request will be sent to the ad server and in case it replies with an ad, it will be downloaded.
 
             To get multiple ads, this method must be called multiple times, until the maximum download count is reached.
 
             No new ads can be downloaded if the maximum download count is reached, until the videos are watched.
 */
- (void)fetchNewAd;

/*!
 @abstract Returns if an ad is ready for playing.
 
 @return YES if video is ready to play. NO if no video ad is ready for playing (yet).
 */
- (BOOL)isAdReady; //check whether the video is ready to play

/*!
 @abstract Show a video ad over the application's key window.
 
 @return YES if the ad started playing successfully. NO if the ad could not be played.
 */
- (BOOL)showVideoAd;

/*!
 @abstract Returns if a video ad is already playing.
 
 @return YES if an ad is playing. NO if no ad is playing.
 */
- (BOOL)isAdPlaying;

/*!
 @abstract Dismisses the current video ad (usually, you shouldn't call this method).
 */
- (void)dismissVideoAd;

/*!
 @abstract Stops all current downloads of ads.
 */
- (void)stopAdDownloading;

/*!
 @abstract A protocol which invokes ad load events.
 */
@property (nonatomic, weak) id<PSLoadAdDelegate> loadDelegate;

/*!
 @abstract A protocol which invokes ad playback events.
 */
@property (nonatomic, weak) id<PSPlayAdDelegate> playDelegate;

@end


