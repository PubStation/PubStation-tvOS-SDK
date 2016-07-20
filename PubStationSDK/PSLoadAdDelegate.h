//
//  PSLoadAdDelegate.h
//  PubStationSDK
//
//  Copyright © 2016 PubStation. All rights reserved.
//

#import <Foundation/Foundation.h>

@class PSInterstitialAdManager;
@class PSInterstitialAd;

/*!
 
 @abstract This class defines the delegate protocol used to inform the app about events during the ad loading process.
 
 */
@protocol PSLoadAdDelegate <NSObject>

@optional
/*!
 @abstract This method is invoked when an interstitial ad starts to download.
 
 @param manager The interstitial ad manager which downloads the ad.
 @param ad      The ad which is downloaded.
 */
- (void)interstitialAdManager:(PSInterstitialAdManager *)manager
           didStartDownloadAd:(PSInterstitialAd *)ad;

@optional
/*!
 @abstract This method is invoked when the download of an interstitial ad is completed.
 
 @param manager The interstitial ad manager which downloaded the ad.
 @param ad      The ad which was downloaded.
 */
- (void)interstitialAdManager:(PSInterstitialAdManager *)manager
        didCompleteDownloadAd:(PSInterstitialAd *)ad;

@optional
/*!
 @abstract This method is invoked when an interstitial ad failed to download.
 
 @param manager The interstitial ad manager which tried to download the ad.
 @param ad      The ad which failed to download.
 @param error   The error object.
 */
-(void)interstitialAdManager:(PSInterstitialAdManager *)manager
          didFailToDownloadAd:(PSInterstitialAd *)ad
                    withError:(NSError *)error;

@end

