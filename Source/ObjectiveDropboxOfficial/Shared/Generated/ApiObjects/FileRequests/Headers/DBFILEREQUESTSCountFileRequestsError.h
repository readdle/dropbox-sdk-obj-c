///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILEREQUESTSCountFileRequestsError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `CountFileRequestsError` union.
///
/// There was an error counting the file requests.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILEREQUESTSCountFileRequestsError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBFILEREQUESTSCountFileRequestsErrorTag` enum type represents the
/// possible tag states with which the `DBFILEREQUESTSCountFileRequestsError`
/// union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBFILEREQUESTSCountFileRequestsErrorTag) {
  /// This user's Dropbox Business team doesn't allow file requests.
  DBFILEREQUESTSCountFileRequestsErrorDisabledForTeam,

  /// (no description).
  DBFILEREQUESTSCountFileRequestsErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBFILEREQUESTSCountFileRequestsErrorTag tag;

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
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBFILEREQUESTSCountFileRequestsError`
/// union.
///
@interface DBFILEREQUESTSCountFileRequestsErrorSerializer : NSObject

///
/// Serializes `DBFILEREQUESTSCountFileRequestsError` instances.
///
/// @param instance An instance of the `DBFILEREQUESTSCountFileRequestsError`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILEREQUESTSCountFileRequestsError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILEREQUESTSCountFileRequestsError *)instance;

///
/// Deserializes `DBFILEREQUESTSCountFileRequestsError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILEREQUESTSCountFileRequestsError` API object.
///
/// @return An instantiation of the `DBFILEREQUESTSCountFileRequestsError`
/// object.
///
+ (DBFILEREQUESTSCountFileRequestsError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
