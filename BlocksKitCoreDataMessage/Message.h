//
//  Message.h
//  BlocksKitCoreDataMessage
//
//  Created by Kamil Burczyk on 21.01.2013.
//
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Message : NSManagedObject

@property (nonatomic, retain) NSNumber * identifier;
@property (nonatomic, retain) NSString * text;

@end
