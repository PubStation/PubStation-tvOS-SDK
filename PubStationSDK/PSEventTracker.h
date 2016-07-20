//
//  PSEventTracker.h
//  PubStationSDK
//
//  Copyright © 2016 PubStation. All rights reserved.
//

#import <Foundation/Foundation.h>

/*!
 @abstract PSEventTracker is a class for tracking custom app events. With this, you can track arbitrary
 events inside the app (e.g. "level of game completed", "channel was switched", etc.). Using this class is
 optional and not necessary if you just want to use the advertising capabilities of this SDK. An event consists
 of an event name and an optional dictionary with event parameters. For more details, see description of the methods
 of this class.
 */

@interface PSEventTracker : NSObject

/*!
 @abstract Tracks an app event only by its name. Use this, if you don't need to provide parameters connected to the event.
 
 @param event The NSString which contains the event name.
 
 */
- (void)trackEvent:(nonnull NSString *)event;

/*!
 @abstract Tracks an app event by its name and a parameter dictionary.
 
 @param event The NSString which contains the event name.
 @param params The NSDictionary which contains additional information about the event.
 
 */
- (void)trackEvent:(nonnull NSString *)event params:(nullable NSDictionary *)params;

@end
