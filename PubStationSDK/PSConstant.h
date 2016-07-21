//
//  PSConstant.h
//  PubStationSDK
//
//  Copyright © 2016 PubStation. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum PSUserGender {
    PSUnknownGender,
    PSMale,
    PSFemale,
    PSOtherGender
}PSUserGenderType;

typedef enum PSPrivacyPolicy  {
    PSPrivacyUndefined,
    PSPrivacyNotProtected,
    PSPrivacyProtected
}PSPrivacyPolicyType;

typedef enum PSAppPaidInfo  {
    PSAppPaidUndefined,
    PSAppNotPaid,
    PSAppPaid
}PSAppPaidInfoType;

typedef enum PSVideoDismissReason {
    PSVideoCompletedPlaying,
    PSMenuButtonPressed,
    PSVideoClicked
}PSVideoDismissReasonType;



