/* Copyright (c) 2009 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//
//  GDataSpreadsheetField.h
//

#import "GDataObject.h"

// For table fields, like:
//    <gs:field name="Name">Noah</gs:field>

@interface GDataSpreadsheetField : GDataObject <GDataExtension>

+ (GDataSpreadsheetField *)fieldWithName:(NSString *)name
                                   value:(NSString *)value;

- (NSString *)name;
- (void)setName:(NSString *)str;

- (NSString *)indexString;
- (void)setIndexString:(NSString *)str;

- (NSString *)formula;
- (void)setFormula:(NSString *)str;

- (NSString *)value;
- (void)setValue:(NSString *)str;

@end

