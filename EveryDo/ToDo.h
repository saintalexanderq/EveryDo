//
//  ToDo.h
//  EveryDo
//
//  Created by Alex Quigley on 2017-11-15.
//  Copyright © 2017 Alex Quigley. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDo : NSObject

@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *todoInfo;
@property (nonatomic, assign) int priorityNum;
@property (nonatomic) BOOL *isCompleted;

- (instancetype)initWithTitle:(NSString*)title todoInfo:(NSString*)todoInfo andPriorityNum:(int)priorityNum;

@end
