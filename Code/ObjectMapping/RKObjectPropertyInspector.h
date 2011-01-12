//
//  RKObjectPropertyInspector.h
//  RestKit
//
//  Created by Blake Watters on 3/4/10.
//
//

#import <Foundation/Foundation.h>


@interface RKObjectPropertyInspector : NSObject {
	NSMutableDictionary* _cachedPropertyNamesAndTypes;
}

/**
 * Returns a dictionary of names and types for the properties of a given class
 */
- (NSDictionary *)propertyNamesAndTypesForClass:(Class)class;

@end
