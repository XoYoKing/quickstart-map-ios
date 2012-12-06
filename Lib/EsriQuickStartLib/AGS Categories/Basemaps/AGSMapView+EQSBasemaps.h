//
//  AGSMapView+Basemaps.h
//  EsriQuickStartApp
//
//  Created by Nicholas Furness on 5/9/12.
//  Copyright (c) 2012 ESRI. All rights reserved.
//

#import <ArcGIS/ArcGIS.h>
#import "EQSBasemapTypeEnum.h"
#import "EQSBasemapsNotifications.h"

@interface AGSMapView (EQSBasemaps)
- (void) setBasemap:(EQSBasemapType)basemapType;
@end