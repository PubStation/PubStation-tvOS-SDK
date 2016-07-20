//
//  PSRequestDelegate.h
//  PubStationSDK
//
//  Copyright © 2016 PubStation. All rights reserved.
//

#import <Foundation/Foundation.h>
/*!
 
 @abstract This class defines a protocol which is used internally. If you are an app developer and you are just using this SDK
           for advertising purposes, you don't have to care about this protocol.
 
 */
@protocol PSRequestDelegate <NSObject>

-(NSDictionary *)prepareJSONForObject;

@end
