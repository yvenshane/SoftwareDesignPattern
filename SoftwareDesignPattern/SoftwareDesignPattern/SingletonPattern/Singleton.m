//
//  Singleton.m
//  SoftwareDesignPattern
//
//  Created by goodjobs on 2023/6/28.
//

#import "Singleton.h"

@implementation Singleton

+ (Singleton *)sharedInstance {
    static Singleton *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[Singleton alloc] init];
    });
    return instance;
}

@end
