//
//  ISO8601DateFormatterValueTransformer.h
//  RestKit
//
//  Created by Blake Watters on 9/11/13.
//  Copyright (c) 2013 RestKit. All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <RKValueTransformers/RKValueTransformers.h>
#import <ISO8601/ISO8601.h>

/**
 The `RKValueTransformers` category extends ISO8601DateFormatter to support the `RKValueTransforming` interface, making it usable with the RestKit value transformation architecture.
 */
@interface ISO8601DateFormatter (RKValueTransformers) <RKValueTransforming>

/**
 Returns an ISO 8601 date formatter configured to strictly parse times into `NSDate` instances with the UTC time zone and `en_US_POSIX` locale.
 */
+ (instancetype)defaultISO8601DateFormatter;

@end
