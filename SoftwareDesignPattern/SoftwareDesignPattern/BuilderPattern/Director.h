//
//  Director.h
//  SoftwareDesignPattern
//
//  Created by goodjobs on 2023/6/28.
//

#import <Foundation/Foundation.h>
#import "Builder.h"
#import "Productt.h"

NS_ASSUME_NONNULL_BEGIN

@interface Director : NSObject
@property (nonatomic, strong) Builder *builder;

- (Productt *)constructProduct;

@end

NS_ASSUME_NONNULL_END
