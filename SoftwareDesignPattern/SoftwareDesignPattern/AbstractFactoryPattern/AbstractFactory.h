//
//  AbstractFactory.h
//  SoftwareDesignPattern
//
//  Created by goodjobs on 2023/6/28.
//

#import <Foundation/Foundation.h>
#import "ConcreteProductA.h"
#import "ConcreteProductB.h"

NS_ASSUME_NONNULL_BEGIN

@interface AbstractFactory : NSObject

- (AbstractProductA *)createProductA;
- (AbstractProductB *)createProductB;

@end

NS_ASSUME_NONNULL_END
