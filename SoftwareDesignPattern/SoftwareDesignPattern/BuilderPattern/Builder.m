//
//  Builder.m
//  SoftwareDesignPattern
//
//  Created by goodjobs on 2023/6/28.
//

#import "Builder.h"

@implementation Builder

- (instancetype)init {
    self = [super init];
    if (self) {
        _product = [[Productt alloc] init];
    }
    return self;
}

- (void)buildPartA {
    _product.partA = @"PartA";
}

- (void)buildPartB {
    _product.partB = @"PartB";
}

- (void)buildPartC {
    _product.partC = @"PartC";
}

- (Productt *)getResult {
    return _product;
}

@end
