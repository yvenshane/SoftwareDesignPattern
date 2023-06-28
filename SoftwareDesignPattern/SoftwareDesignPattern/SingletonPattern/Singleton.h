//
//  Singleton.h
//  SoftwareDesignPattern
//
//  Created by goodjobs on 2023/6/28.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Singleton : NSObject
@property (class, nonatomic, readonly) Singleton *sharedInstance;

@end

NS_ASSUME_NONNULL_END
