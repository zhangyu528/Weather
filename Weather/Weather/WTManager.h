//
//  WTManager.h
//  Weather
//
//  Created by zzyy on 14/6/15.
//  Copyright (c) 2014年 zzyy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import <ReactiveCocoa.h>

#import "WTDataModel.h"

@interface WTManager : NSObject <CLLocationManagerDelegate>

@property (nonatomic, strong, readonly) CLLocation* currentLocation;
@property (nonatomic, strong, readwrite) NSString   *searchKey;
@property (nonatomic, assign, readonly) BOOL isSearchResult;


@property (nonatomic, strong, readonly) WTDataModel* currentDataModel;
@property (nonatomic, strong, readonly) NSMutableArray *focusDataModelList;
@property (nonatomic, strong, readonly) NSMutableArray* searchDataModeList;

+ (instancetype)sharedManager;

- (void)findCurrentLocation;

@end
