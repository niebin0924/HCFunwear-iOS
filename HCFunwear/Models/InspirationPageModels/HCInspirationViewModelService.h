//
//  HCInspirationViewModelService.h
//  HCFunwear
//
//  Created by 刘海川 on 16/10/11.
//  Copyright © 2016年 Haichuan Liu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HCNavigationService.h"
#import "HCInspirationApiService.h"

@protocol HCInspirationViewModelService <HCNavigationService>

- (id<HCInspirationApiService>)getInspApiService;

@end
