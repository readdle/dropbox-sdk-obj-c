///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGInsufficientQuotaAmounts;
@class DBSHARINGMountFolderError;
@class DBSHARINGSharedFolderAccessError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `MountFolderError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGMountFolderError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBSHARINGMountFolderErrorTag` enum type represents the possible tag
/// states with which the `DBSHARINGMountFolderError` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBSHARINGMountFolderErrorTag) {
  /// (no description).
  DBSHARINGMountFolderErrorAccessError,

  /// Mounting would cause a shared folder to be inside another, which is
  /// disallowed.
  DBSHARINGMountFolderErrorInsideSharedFolder,

  /// The current user does not have enough space to mount the shared folder.
  DBSHARINGMountFolderErrorInsufficientQuota,

  /// The shared folder is already mounted.
  DBSHARINGMountFolderErrorAlreadyMounted,

  /// The current user does not have permission to perform this action.
  DBSHARINGMountFolderErrorNoPermission,

  /// The shared folder is not mountable. One example where this can occur is
  /// when the shared folder belongs within a team folder in the user's
  /// Dropbox.
  DBSHARINGMountFolderErrorNotMountable,

  /// (no description).
  DBSHARINGMountFolderErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBSHARINGMountFolderErrorTag tag;

/// (no description). @note Ensure the `isAccessError` method returns true
/// before accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBSHARINGSharedFolderAccessError *accessError;

/// The current user does not have enough space to mount the shared folder.
/// @note Ensure the `isInsufficientQuota` method returns true before accessing,
/// otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBSHARINGInsufficientQuotaAmounts *insufficientQuota;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "access_error".
///
/// @param accessError (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithAccessError:(DBSHARINGSharedFolderAccessError *)accessError;

///
/// Initializes union class with tag state of "inside_shared_folder".
///
/// Description of the "inside_shared_folder" tag state: Mounting would cause a
/// shared folder to be inside another, which is disallowed.
///
/// @return An initialized instance.
///
- (instancetype)initWithInsideSharedFolder;

///
/// Initializes union class with tag state of "insufficient_quota".
///
/// Description of the "insufficient_quota" tag state: The current user does not
/// have enough space to mount the shared folder.
///
/// @param insufficientQuota The current user does not have enough space to
/// mount the shared folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithInsufficientQuota:(DBSHARINGInsufficientQuotaAmounts *)insufficientQuota;

///
/// Initializes union class with tag state of "already_mounted".
///
/// Description of the "already_mounted" tag state: The shared folder is already
/// mounted.
///
/// @return An initialized instance.
///
- (instancetype)initWithAlreadyMounted;

///
/// Initializes union class with tag state of "no_permission".
///
/// Description of the "no_permission" tag state: The current user does not have
/// permission to perform this action.
///
/// @return An initialized instance.
///
- (instancetype)initWithNoPermission;

///
/// Initializes union class with tag state of "not_mountable".
///
/// Description of the "not_mountable" tag state: The shared folder is not
/// mountable. One example where this can occur is when the shared folder
/// belongs within a team folder in the user's Dropbox.
///
/// @return An initialized instance.
///
- (instancetype)initWithNotMountable;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "access_error".
///
/// @note Call this method and ensure it returns true before accessing the
/// `accessError` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "access_error".
///
- (BOOL)isAccessError;

///
/// Retrieves whether the union's current tag state has value
/// "inside_shared_folder".
///
/// @return Whether the union's current tag state has value
/// "inside_shared_folder".
///
- (BOOL)isInsideSharedFolder;

///
/// Retrieves whether the union's current tag state has value
/// "insufficient_quota".
///
/// @note Call this method and ensure it returns true before accessing the
/// `insufficientQuota` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value
/// "insufficient_quota".
///
- (BOOL)isInsufficientQuota;

///
/// Retrieves whether the union's current tag state has value "already_mounted".
///
/// @return Whether the union's current tag state has value "already_mounted".
///
- (BOOL)isAlreadyMounted;

///
/// Retrieves whether the union's current tag state has value "no_permission".
///
/// @return Whether the union's current tag state has value "no_permission".
///
- (BOOL)isNoPermission;

///
/// Retrieves whether the union's current tag state has value "not_mountable".
///
/// @return Whether the union's current tag state has value "not_mountable".
///
- (BOOL)isNotMountable;

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
/// The serialization class for the `DBSHARINGMountFolderError` union.
///
@interface DBSHARINGMountFolderErrorSerializer : NSObject

///
/// Serializes `DBSHARINGMountFolderError` instances.
///
/// @param instance An instance of the `DBSHARINGMountFolderError` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGMountFolderError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBSHARINGMountFolderError *)instance;

///
/// Deserializes `DBSHARINGMountFolderError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGMountFolderError` API object.
///
/// @return An instantiation of the `DBSHARINGMountFolderError` object.
///
+ (DBSHARINGMountFolderError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
