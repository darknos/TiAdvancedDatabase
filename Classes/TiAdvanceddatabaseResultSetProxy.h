/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2013 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */
#import "TiProxy.h"

#import "PlausibleDatabase.h"

@class TiAdvanceddatabaseProxy;

@interface TiAdvanceddatabaseResultSetProxy : TiProxy {
@private
	TiAdvanceddatabaseProxy *database;
	PLSqliteResultSet *results;
	BOOL validRow;
	int rowCount;
}

-(id)initWithResults:(PLSqliteResultSet*)results database:(TiAdvanceddatabaseProxy*)database pageContext:(id<TiEvaluator>)context;

@property(nonatomic,readonly) NSNumber *rowCount;
@property(nonatomic,readonly) NSNumber *validRow;

@end
