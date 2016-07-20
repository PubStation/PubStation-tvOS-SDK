//
//  PSUser.h
//  PubStationSDK
//
//  Copyright © 2016 PubStation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PSRequestDelegate.h"
#import <CoreGraphics/CoreGraphics.h>

/*!
 
 @abstract This class is used to provide user details for the PubStationSDK.
 
 */

@interface PSUser : NSObject <PSRequestDelegate>

/*!
 
 @abstract Exchange-specific ID for the user
 
 */
@property (nonatomic) NSString *userId;

/*!
 
 @abstract Buyer-specific ID for the user as mapped by the exchange for the buyer
 
 */
@property (nonatomic) NSString *buyerUId;

/*!
 
 @abstract Gender of the user. Its value can be either @b PSMale or @b PSFemale.
 
 */
@property (nonatomic) NSString *gender;

/*!
 
 @abstract String containing a comma separated list of keywords about the user.
 
 */
@property (nonatomic) NSString *keywords;

/*!
 
 @abstract Year of birth of the user as a 4-digit integer.
 
 */
@property (nonatomic) NSNumber *yob;

@end

