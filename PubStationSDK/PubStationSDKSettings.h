//
//  PubStationSDKSettings.h
//  PubStationSDK
//
//  Copyright © 2016 PubStation. All rights reserved.
//

#import <Foundation/Foundation.h>

/*!
 
 * This class is used to configure the PubStationSDK
 
 */

@interface PubStationSDKSettings : NSObject

/*!
 
 @abstract An alternate method to set the @b PSAppKey.
 
 */
@property (nonatomic) NSString *appkey;

/*!
 
 @abstract A dictionary indicating the reason the app was launched (if any).
 @discussion The contents of this dictionary may be empty in situations where the user launched the app directly.
 
 */
@property (nonatomic) NSDictionary *launchOptions;

/*!
 
 @abstract This property is used to set the download of the video Ad automatically or manually.
 
 */
@property (nonatomic) BOOL autoDownloadVideoAd;

@end
