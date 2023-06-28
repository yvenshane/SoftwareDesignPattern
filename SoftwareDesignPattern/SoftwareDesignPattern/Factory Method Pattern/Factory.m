//
//  Factory.m
//  SoftwareDesignPattern
//
//  Created by goodjobs on 2023/6/28.
//

#import "Factory.h"

@implementation Factory

- (Product *)createProduct {
    return [[Product alloc] init];
}

@end
