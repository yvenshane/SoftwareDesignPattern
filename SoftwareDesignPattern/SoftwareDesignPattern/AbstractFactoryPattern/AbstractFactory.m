//
//  AbstractFactory.m
//  SoftwareDesignPattern
//
//  Created by goodjobs on 2023/6/28.
//

#import "AbstractFactory.h"

@implementation AbstractFactory

- (AbstractProductA *)createProductA {
    return [[ConcreteProductA alloc] init];
}

- (AbstractProductB *)createProductB {
    return [[ConcreteProductB alloc] init];
}

@end
