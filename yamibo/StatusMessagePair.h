//
//  StatusMessagePair.h
//  yamibo
//
//  Created by 李思良 on 15/4/16.
//  Copyright (c) 2015年 lsl. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * 网络返回状态提示.
 */
@interface StatusMessagePair : NSObject

@property (nonatomic, assign) BOOL success;
@property (nonatomic, strong) NSString *message;

@end
