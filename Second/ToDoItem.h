//
//  ToDoItem.h
//  Second
//
//  Created by David Schwartz on 10/27/14.
//  Copyright (c) 2014 David Schwartz. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property NSString *assignee;
@property (readonly) NSDate *creationDate;

@end
