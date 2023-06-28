//
//  Director.m
//  SoftwareDesignPattern
//
//  Created by goodjobs on 2023/6/28.
//

#import "Director.h"

@implementation Director

- (Productt *)constructProduct {
    [_builder buildPartA];
    [_builder buildPartB];
    [_builder buildPartC];
    return [_builder getResult];
}

@end
