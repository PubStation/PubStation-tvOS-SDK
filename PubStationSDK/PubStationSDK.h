//
//  PubStationSDK.h
//  PubStationSDK
//
//  Copyright © 2016 PubStation. All rights reserved.
//

#import <Foundation/Foundation.h>

@class PSInterstitialAdManager;
@class PubStationSDKSettings;
@class PSEventTracker;
@class PSUser;
@class PubStationSDKSettings;
@class PSApp;

/**
 
 * @abstract This is the base class of the PubStation tvOS SDK. It is the starting point for all interaction with it.
 
 */

@interface PubStationSDK : NSObject

/*!
 This method is called when the developer wishes to initialize the SDK with manual settings.
 
 @param settings: Developer can change launchOptions, provide the appKey or setAutoDownload using this object. If this value is nil, default settings will be considered.
 
 */
+ (void)initializeWithSettings:(nullable PubStationSDKSettings *)settings;

/*!
 @abstract This method is used to allow App Event Tracking. Developer can track app related events. Default value is @b YES.
 
 @param allowEventTracking If the value is @b NO, app events will not be tracked.
 
 */
+ (void)setAllowEventTracking:(BOOL)allowEventTracking;

/*!
 @abstract This method is used to print the logs in the console. By default, the logs are hidden.
 
 @param enableLogs If set to @b YES, developer can track the Ad status from the console.
 
 */
+ (void)setEnableLogs:(BOOL)enableLogs;

/*!
 
 @abstract This method is used to download ads automatically or manually.
 @discussion By default, the value is YES
 
 @param autoDownloadVideoAd  If @b YES, the SDK will download the Ad, cache it and alert the developer once the Ad is ready.
 If set to @b NO, developer has to download the Ad manually.
 
 */
+ (void)setAutoDownloadVideoAd:(BOOL)autoDownloadVideoAd;

/*!
 
 @abstract This method is used to set a text which is visible when the Ad is playing.
 @discussion The intention of this text is to tell the user to click on remote to be redirected to App Store.
 
 @param text The text to be displayed when the Ad is playing.
 */
+ (void)setClickThroughLabelText:(nullable NSString *)text;

/*!
 @abstract This method gets the version of the PubStationSDK currently used.
 
 @return The SDK version as NSString.
 */
+ (nonnull NSString *)getSdkVersion;

/*!
 @abstract Creates a single instance of PSInterstitialAdManager.
 */
+ (nonnull PSInterstitialAdManager *)getInterstitialAdManager;

/*!
 @abstract Creates a single instance of PSEventTracker. This is to track the app related events.
 */
+ (nonnull PSEventTracker *)getEventTracker;

/*!
 @abstract Creates a single instance of PSUser. This is to set the user related information like userId, gender etc.
 */
+ (nonnull PSUser *)getUser;

/*!
 @abstract Creates a single instance of PSApp. This is to set the app related information like category privacy policy, etc.
 */
+ (nonnull PSApp *)getApp;

@end
