//
//  Factory.h
//  SoftwareDesignPattern
//
//  Created by goodjobs on 2023/6/28.
//

#import <Foundation/Foundation.h>
#import "Product.h"

NS_ASSUME_NONNULL_BEGIN

@interface Factory : NSObject

- (Product *)createProduct;

@end

NS_ASSUME_NONNULL_END
