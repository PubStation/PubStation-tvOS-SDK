//
//  PSApp.h
//  PubStationSDK
//
//  Copyright © 2016 PubStation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PSInterstitialAdManager.h"
#import "PSRequestDelegate.h"
#import "PSConstant.h"

/*!
 
 @abstract This class is used to provide app details for the PubStationSDK.
 
 */

@interface PSApp : NSObject <PSRequestDelegate>

/*!
 
 @abstract Array of IAB content categories of the app. See section 5.1 in the OpenRTB specifications for a full list:
           http://www.iab.com/wp-content/uploads/2015/05/OpenRTB_API_Specification_Version_2_3_1.pdf
 
 */
@property (nonatomic) NSArray *category;

/*!
 
 @abstract Array of IAB content categories of the app that describe the current section of the app.
           See section 5.1 in the OpenRTB specifications for a full list:
           http://www.iab.com/wp-content/uploads/2015/05/OpenRTB_API_Specification_Version_2_3_1.pdf
 
 */
@property (nonatomic) NSArray *sectionCategory;

/*!
 
 @abstract Array of IAB content categories of the app that describe the current page or view of the app.
           See section 5.1 in the OpenRTB specifications for a full list:
           http://www.iab.com/wp-content/uploads/2015/05/OpenRTB_API_Specification_Version_2_3_1.pdf
 
 */
@property (nonatomic) NSArray *pageCategory;

/*!
 
 @abstract Indicates if the app has a privacy policy. Its value can be either @b PSPrivacyNotProtected or @b PSPrivacyProtected.
 
 */
@property (nonatomic) PSPrivacyPolicyType privacyPolicy;

/*!
 
 @abstract Indicates if the app is a paid one or not. Its value can be either @b PSAppNotPaid or @b PSAppPaid.
 
 */
@property (nonatomic) PSAppPaidInfoType paid;

/*!
 
 @abstract A string with comma separated keywords about the app.
 
 */
@property (nonatomic) NSString *keyword;

@end
