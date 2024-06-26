///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILESSyncSettingArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SyncSettingArg` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESSyncSettingArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBFILESSyncSettingArgTag` enum type represents the possible tag states
/// with which the `DBFILESSyncSettingArg` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBFILESSyncSettingArgTag) {
  /// On first sync to members' computers, the specified folder will follow
  /// its parent folder's setting or otherwise follow default sync behavior.
  DBFILESSyncSettingArgDefault_,

  /// On first sync to members' computers, the specified folder will be set to
  /// not sync with selective sync.
  DBFILESSyncSettingArgNotSynced,

  /// (no description).
  DBFILESSyncSettingArgOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBFILESSyncSettingArgTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "default".
///
/// Description of the "default" tag state: On first sync to members' computers,
/// the specified folder will follow its parent folder's setting or otherwise
/// follow default sync behavior.
///
/// @return An initialized instance.
///
- (instancetype)initWithDefault_;

///
/// Initializes union class with tag state of "not_synced".
///
/// Description of the "not_synced" tag state: On first sync to members'
/// computers, the specified folder will be set to not sync with selective sync.
///
/// @return An initialized instance.
///
- (instancetype)initWithNotSynced;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "default".
///
/// @return Whether the union's current tag state has value "default".
///
- (BOOL)isDefault_;

///
/// Retrieves whether the union's current tag state has value "not_synced".
///
/// @return Whether the union's current tag state has value "not_synced".
///
- (BOOL)isNotSynced;

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
/// The serialization class for the `DBFILESSyncSettingArg` union.
///
@interface DBFILESSyncSettingArgSerializer : NSObject

///
/// Serializes `DBFILESSyncSettingArg` instances.
///
/// @param instance An instance of the `DBFILESSyncSettingArg` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESSyncSettingArg` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILESSyncSettingArg *)instance;

///
/// Deserializes `DBFILESSyncSettingArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESSyncSettingArg` API object.
///
/// @return An instantiation of the `DBFILESSyncSettingArg` object.
///
+ (DBFILESSyncSettingArg *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
