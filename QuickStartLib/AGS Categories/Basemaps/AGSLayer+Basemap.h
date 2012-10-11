//
//  AGSLayer+Basemap.h
//  EsriQuickStartApp
//
//  Created by Nicholas Furness on 5/30/12.
//  Copyright (c) 2012 ESRI. All rights reserved.
//

#import <ArcGIS/ArcGIS.h>

@interface AGSLayer (EQSBasemaps)
- (BOOL) isEQSBasemapLayer;
- (void) setIsEQSBasemapLayer:(BOOL)isBasemapLayer;
@end