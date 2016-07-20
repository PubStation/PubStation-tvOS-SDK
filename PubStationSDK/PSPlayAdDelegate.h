//
//  PSPlayAdDelegate.h
//  PubStationSDK
//
//  Copyright © 2016 PubStation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PSConstant.h"

@class PSInterstitialAdManager;
@class PSInterstitialAd;

/*!
 
 @abstract This class defines the delegate protocol used to inform the app about events during the ad playing process.
 
 */
@protocol PSPlayAdDelegate <NSObject>

@optional
/*!
 @abstract This method is invoked when an interstitial video ad starts playing.
 
 @param manager The interstitial ad manager which is playing the ad.
 @param ad      The ad which is playing.
 */
- (void)interstitialAdManager:(PSInterstitialAdManager *)manager
           didStartAdPlayback:(PSInterstitialAd *)ad;


@optional
/*!
 @abstract This method is invoked when an interstitial ad reached its midpoint.
 
 @param manager The interstitial ad manager which is playing the ad.
 @param ad      The ad which is playing.
 */
- (void)interstitialAdManager:(PSInterstitialAdManager *)manager
         didReachMidPointOfAd:(PSInterstitialAd *)ad;

@optional
/*!
 @abstract This method is invoked when an interstitial ad reached its first quartile.
 
 @param manager The interstitial ad manager which is playing the ad.
 @param ad      The ad which is playing.
 */
- (void)interstitialAdManager:(PSInterstitialAdManager *)manager
    didReachFirstQuartileOfAd:(PSInterstitialAd *)ad;

@optional
/*!
 @abstract This method is invoked when an interstitial ad reached its third quartile.
 
 @param manager The interstitial ad manager which is playing the ad.
 @param ad      The ad which is playing.
 */
- (void)interstitialAdManager:(PSInterstitialAdManager *)manager
    didReachThirdQuartileOfAd:(PSInterstitialAd *)ad;

@optional
/*!
 @abstract This method is invoked when an interstitial ad completed playing.
 
 @param manager The interstitial ad manager which was playing the ad.
 @param ad      The ad which was played.
 */
- (void)interstitialAdManager:(PSInterstitialAdManager *)manager
                didCompleteAd:(PSInterstitialAd *)ad;

@optional
/*!
 @abstract This method is invoked when the user clicks on a clickable interstitial video ad.
 
 @param manager The interstitial ad manager which was playing the ad.
 @param ad      The ad which is playing.
 */
- (void)interstitialAdManager:(PSInterstitialAdManager *)manager
                 didClickOnAd:(PSInterstitialAd *)ad;

@optional
/*!
 @abstract This method is invoked when an interstitial ad video controller is dismissed.
 
 @param manager The interstitial ad manager which was playing the ad.
 @param ad      The ad which was played.
 @param reason  Reason, why the interstital ad was dismissed (at the moment one of @b PSVideoCompletedPlaying, @b PSMenuButtonPressed, @b PSVideoClicked )
 */
- (void)interstitialAdManager:(PSInterstitialAdManager *)manager
                 didDismissAd:(PSInterstitialAd *)ad
                   withReason:(PSVideoDismissReasonType)reason;

@optional
/*!
 @abstract This method is invoked when an interstitial video ad fails to play.
 
 @param manager The interstitial ad manager which downloaded the Ad.
 @param ad      The ad which failed to play.
 @param error   An error which occured during downloading, if there was no error it will be nil.
 */
- (void)interstitialAdManager:(PSInterstitialAdManager *)manager
              didFailToPlayAd:(PSInterstitialAd *)ad
                        error:(NSError *)error;

@end
