//
//  PSUser.h
//  PubStationSDK
//
//  Copyright © 2016 PubStation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PSRequestDelegate.h"
#import "PSConstant.h"
#import <CoreGraphics/CoreGraphics.h>

/*!
 
 @abstract This class is used to provide user details for the PubStationSDK.
 
 */
@interface PSUser : NSObject <PSRequestDelegate>

/*!
 
 @abstract Gender of the user. Its value can be @b PSMale or @b PSFemale, @b PSOtherGender or @b PSUnknownGender.
 
 */
@property (nonatomic) PSUserGenderType gender;


/*!
 
 @abstract String containing a comma separated list of keywords about the user.
 
 */
@property (nonatomic) NSString *keywords;

/*!
 
 @abstract Year of birth of the user as a 4-digit integer.
 
 */
@property (nonatomic) NSNumber *yob;

@end

