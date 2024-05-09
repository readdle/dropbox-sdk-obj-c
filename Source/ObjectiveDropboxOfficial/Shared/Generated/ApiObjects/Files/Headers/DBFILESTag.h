///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILESTag;
@class DBFILESUserGeneratedTag;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `Tag` union.
///
/// Tag that can be added in multiple ways.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESTag : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBFILESTagTag` enum type represents the possible tag states with which
/// the `DBFILESTag` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBFILESTagTag) {
  /// Tag generated by the user.
  DBFILESTagUserGeneratedTag,

  /// (no description).
  DBFILESTagOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBFILESTagTag tag;

/// Tag generated by the user. @note Ensure the `isUserGeneratedTag` method
/// returns true before accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBFILESUserGeneratedTag *userGeneratedTag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "user_generated_tag".
///
/// Description of the "user_generated_tag" tag state: Tag generated by the
/// user.
///
/// @param userGeneratedTag Tag generated by the user.
///
/// @return An initialized instance.
///
- (instancetype)initWithUserGeneratedTag:(DBFILESUserGeneratedTag *)userGeneratedTag;

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
/// "user_generated_tag".
///
/// @note Call this method and ensure it returns true before accessing the
/// `userGeneratedTag` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value
/// "user_generated_tag".
///
- (BOOL)isUserGeneratedTag;

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
/// The serialization class for the `DBFILESTag` union.
///
@interface DBFILESTagSerializer : NSObject

///
/// Serializes `DBFILESTag` instances.
///
/// @param instance An instance of the `DBFILESTag` API object.
///
/// @return A json-compatible dictionary representation of the `DBFILESTag` API
/// object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILESTag *)instance;

///
/// Deserializes `DBFILESTag` instances.
///
/// @param dict A json-compatible dictionary representation of the `DBFILESTag`
/// API object.
///
/// @return An instantiation of the `DBFILESTag` object.
///
+ (DBFILESTag *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
