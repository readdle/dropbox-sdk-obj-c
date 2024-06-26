///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILEREQUESTSListFileRequestsContinueError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ListFileRequestsContinueError` union.
///
/// There was an error retrieving the file requests.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILEREQUESTSListFileRequestsContinueError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBFILEREQUESTSListFileRequestsContinueErrorTag` enum type represents
/// the possible tag states with which the
/// `DBFILEREQUESTSListFileRequestsContinueError` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBFILEREQUESTSListFileRequestsContinueErrorTag) {
  /// This user's Dropbox Business team doesn't allow file requests.
  DBFILEREQUESTSListFileRequestsContinueErrorDisabledForTeam,

  /// (no description).
  DBFILEREQUESTSListFileRequestsContinueErrorOther,

  /// The cursor is invalid.
  DBFILEREQUESTSListFileRequestsContinueErrorInvalidCursor,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBFILEREQUESTSListFileRequestsContinueErrorTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "disabled_for_team".
///
/// Description of the "disabled_for_team" tag state: This user's Dropbox
/// Business team doesn't allow file requests.
///
/// @return An initialized instance.
///
- (instancetype)initWithDisabledForTeam;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

///
/// Initializes union class with tag state of "invalid_cursor".
///
/// Description of the "invalid_cursor" tag state: The cursor is invalid.
///
/// @return An initialized instance.
///
- (instancetype)initWithInvalidCursor;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value
/// "disabled_for_team".
///
/// @return Whether the union's current tag state has value "disabled_for_team".
///
- (BOOL)isDisabledForTeam;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves whether the union's current tag state has value "invalid_cursor".
///
/// @return Whether the union's current tag state has value "invalid_cursor".
///
- (BOOL)isInvalidCursor;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the
/// `DBFILEREQUESTSListFileRequestsContinueError` union.
///
@interface DBFILEREQUESTSListFileRequestsContinueErrorSerializer : NSObject

///
/// Serializes `DBFILEREQUESTSListFileRequestsContinueError` instances.
///
/// @param instance An instance of the
/// `DBFILEREQUESTSListFileRequestsContinueError` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILEREQUESTSListFileRequestsContinueError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILEREQUESTSListFileRequestsContinueError *)instance;

///
/// Deserializes `DBFILEREQUESTSListFileRequestsContinueError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILEREQUESTSListFileRequestsContinueError` API object.
///
/// @return An instantiation of the
/// `DBFILEREQUESTSListFileRequestsContinueError` object.
///
+ (DBFILEREQUESTSListFileRequestsContinueError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
