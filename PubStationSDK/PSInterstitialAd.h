//
//  PSInterstitialAd.h
//  PubStationSDK
//
//  Copyright © 2016 PubStation. All rights reserved.
//

#import <Foundation/Foundation.h>

@class PSMediaFile;

/*!
 
 @abstract This class is used to store ad related information. In most cases, you don't need to touch that class at all. Anyway, it might be useful for debugging purposes.
 
 */

@interface PSInterstitialAd : NSObject

/*!
 
 @abstract Contains the name of the Ad.
 
 */
@property (readonly) NSString *title;

/*!
 
 @abstract Contains the URLs to track impressions.
 
 */
@property (readonly) NSMutableArray *impression;

/*!
 
 @abstract Contains the duration of the ad as a string in the format hh:mm:ss.
 
 */
@property (readonly) NSString *duration;

/*!
 
 @abstract A dictionary with tracking events as keys and tracking URLs as values.
 
 */
@property (readonly) NSDictionary *trackingEvents;


/*!
 
 @abstract Contains the click-through URL of the ad (only relevant for clickable interstitials leading to an app in the app store).
 
 */
@property (readonly) NSString *clickThrough;

/*!
 
 @abstract Contains details about the video ad.
 
 */
@property (nonatomic) PSMediaFile *mediaFile;

/*!
 
 @abstract Contains the text to suggest the user to click on the ad (in case of clickable ads).
 
 */
@property (readonly) NSString *clickThroughText;

@end
