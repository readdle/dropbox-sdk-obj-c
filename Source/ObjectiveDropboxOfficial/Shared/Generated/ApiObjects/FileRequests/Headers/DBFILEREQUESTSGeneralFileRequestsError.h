///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILEREQUESTSGeneralFileRequestsError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `GeneralFileRequestsError` union.
///
/// There is an error accessing the file requests functionality.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILEREQUESTSGeneralFileRequestsError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBFILEREQUESTSGeneralFileRequestsErrorTag` enum type represents the
/// possible tag states with which the `DBFILEREQUESTSGeneralFileRequestsError`
/// union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBFILEREQUESTSGeneralFileRequestsErrorTag) {
  /// This user's Dropbox Business team doesn't allow file requests.
  DBFILEREQUESTSGeneralFileRequestsErrorDisabledForTeam,

  /// (no description).
  DBFILEREQUESTSGeneralFileRequestsErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBFILEREQUESTSGeneralFileRequestsErrorTag tag;

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
/// The serialization class for the `DBFILEREQUESTSGeneralFileRequestsError`
/// union.
///
@interface DBFILEREQUESTSGeneralFileRequestsErrorSerializer : NSObject

///
/// Serializes `DBFILEREQUESTSGeneralFileRequestsError` instances.
///
/// @param instance An instance of the `DBFILEREQUESTSGeneralFileRequestsError`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILEREQUESTSGeneralFileRequestsError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILEREQUESTSGeneralFileRequestsError *)instance;

///
/// Deserializes `DBFILEREQUESTSGeneralFileRequestsError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILEREQUESTSGeneralFileRequestsError` API object.
///
/// @return An instantiation of the `DBFILEREQUESTSGeneralFileRequestsError`
/// object.
///
+ (DBFILEREQUESTSGeneralFileRequestsError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
