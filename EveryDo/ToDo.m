//
//  ToDo.m
//  EveryDo
//
//  Created by Alex Quigley on 2017-11-15.
//  Copyright © 2017 Alex Quigley. All rights reserved.
//

#import "ToDo.h"

@implementation ToDo

- (instancetype)initWithTitle:(NSString*)title todoInfo:(NSString*)todoInfo andPriorityNum:(int)priorityNum {
    self = [super init];
    if (self) {
        _title = title;
        _todoInfo = todoInfo;
        _priorityNum = priorityNum;
    }
    return self;
}


@end
