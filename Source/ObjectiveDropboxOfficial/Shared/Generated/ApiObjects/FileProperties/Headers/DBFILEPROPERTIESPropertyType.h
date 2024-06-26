///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILEPROPERTIESPropertyType;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `PropertyType` union.
///
/// Data type of the given property field added.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILEPROPERTIESPropertyType : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBFILEPROPERTIESPropertyTypeTag` enum type represents the possible tag
/// states with which the `DBFILEPROPERTIESPropertyType` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBFILEPROPERTIESPropertyTypeTag) {
  /// The associated property field will be of type string. Unicode is
  /// supported.
  DBFILEPROPERTIESPropertyTypeString,

  /// (no description).
  DBFILEPROPERTIESPropertyTypeOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBFILEPROPERTIESPropertyTypeTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "string".
///
/// Description of the "string" tag state: The associated property field will be
/// of type string. Unicode is supported.
///
/// @return An initialized instance.
///
- (instancetype)initWithString;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "string".
///
/// @return Whether the union's current tag state has value "string".
///
- (BOOL)isString;

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
/// The serialization class for the `DBFILEPROPERTIESPropertyType` union.
///
@interface DBFILEPROPERTIESPropertyTypeSerializer : NSObject

///
/// Serializes `DBFILEPROPERTIESPropertyType` instances.
///
/// @param instance An instance of the `DBFILEPROPERTIESPropertyType` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILEPROPERTIESPropertyType` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILEPROPERTIESPropertyType *)instance;

///
/// Deserializes `DBFILEPROPERTIESPropertyType` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILEPROPERTIESPropertyType` API object.
///
/// @return An instantiation of the `DBFILEPROPERTIESPropertyType` object.
///
+ (DBFILEPROPERTIESPropertyType *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
