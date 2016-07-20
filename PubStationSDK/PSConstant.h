//
//  PSConstant.h
//  PubStationSDK
//
//  Copyright © 2016 PubStation. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum PSUserGender {
    PSMale,
    PSFemale
}PSUserGenderType;

typedef enum PSPrivacyPolicy  {
    PSPrivacyNotProtected,
    PSPrivacyProtected
}PSPrivacyPolicyType;

typedef enum PSAppPaidInfo  {
    PSAppNotPaid,
    PSAppPaid
}PSAppPaidInfoType;

typedef enum PSVideoDismissReason {
    PSVideoCompletedPlaying,
    PSMenuButtonPressed,
    PSVideoClicked
}PSVideoDismissReasonType;

#pragma - mark Gender constants
extern NSString * const PSMALE;
extern NSString * const PSFEMALE;








