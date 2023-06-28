//
//  Builder.h
//  SoftwareDesignPattern
//
//  Created by goodjobs on 2023/6/28.
//

#import <Foundation/Foundation.h>
#import "Productt.h"

NS_ASSUME_NONNULL_BEGIN

@interface Builder : NSObject
@property (nonatomic, strong) Productt *product;

- (void)buildPartA;
- (void)buildPartB;
- (void)buildPartC;
- (Productt *)getResult;

@end

NS_ASSUME_NONNULL_END
