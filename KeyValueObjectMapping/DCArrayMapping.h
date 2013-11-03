//
//  DCArrayMapping.h
//  DCKeyValueObjectMapping
//
//  Created by Diego Chohfi on 4/16/12.
//  Copyright (c) 2012 dchohfi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DCObjectMapping.h"
@interface DCArrayMapping : NSObject
typedef id(^DCArrayMappingBlock)(__weak NSString *attributeName, __weak Class destinationClass, __weak id value);

@property(nonatomic, readonly) DCObjectMapping *objectMapping;
@property(nonatomic, readonly) Class classForElementsOnArray;
@property(nonatomic, strong) DCArrayMappingBlock mappingBlock;

+ (DCArrayMapping *) mapperForClassElements: (Class) classForElementsOnArray 
                               forAttribute: (NSString *) attribute 
                                    onClass: (Class) classReference;

+ (DCArrayMapping *) mapperForClass: (Class) classForElementsOnArray 
                          onMapping: (DCObjectMapping *) objectMapping;

@end
