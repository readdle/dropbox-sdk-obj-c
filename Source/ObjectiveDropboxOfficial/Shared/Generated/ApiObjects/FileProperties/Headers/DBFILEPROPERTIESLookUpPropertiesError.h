///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILEPROPERTIESLookUpPropertiesError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `LookUpPropertiesError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILEPROPERTIESLookUpPropertiesError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBFILEPROPERTIESLookUpPropertiesErrorTag` enum type represents the
/// possible tag states with which the `DBFILEPROPERTIESLookUpPropertiesError`
/// union can exist.
typedef NS_ENUM(NSInteger, DBFILEPROPERTIESLookUpPropertiesErrorTag) {
  /// No property group was found.
  DBFILEPROPERTIESLookUpPropertiesErrorPropertyGroupNotFound,

  /// (no description).
  DBFILEPROPERTIESLookUpPropertiesErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBFILEPROPERTIESLookUpPropertiesErrorTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "property_group_not_found".
///
/// Description of the "property_group_not_found" tag state: No property group
/// was found.
///
/// @return An initialized instance.
///
- (instancetype)initWithPropertyGroupNotFound;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value
/// "property_group_not_found".
///
/// @return Whether the union's current tag state has value
/// "property_group_not_found".
///
- (BOOL)isPropertyGroupNotFound;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBFILEPROPERTIESLookUpPropertiesError`
/// union.
///
@interface DBFILEPROPERTIESLookUpPropertiesErrorSerializer : NSObject

///
/// Serializes `DBFILEPROPERTIESLookUpPropertiesError` instances.
///
/// @param instance An instance of the `DBFILEPROPERTIESLookUpPropertiesError`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILEPROPERTIESLookUpPropertiesError` API object.
///
+ (nullable NSDictionary *)serialize:(DBFILEPROPERTIESLookUpPropertiesError *)instance;

///
/// Deserializes `DBFILEPROPERTIESLookUpPropertiesError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILEPROPERTIESLookUpPropertiesError` API object.
///
/// @return An instantiation of the `DBFILEPROPERTIESLookUpPropertiesError`
/// object.
///
+ (DBFILEPROPERTIESLookUpPropertiesError *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END