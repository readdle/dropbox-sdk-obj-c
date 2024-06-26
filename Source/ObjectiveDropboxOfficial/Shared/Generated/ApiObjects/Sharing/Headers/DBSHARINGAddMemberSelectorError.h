///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGAddMemberSelectorError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `AddMemberSelectorError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGAddMemberSelectorError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBSHARINGAddMemberSelectorErrorTag` enum type represents the possible
/// tag states with which the `DBSHARINGAddMemberSelectorError` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBSHARINGAddMemberSelectorErrorTag) {
  /// Automatically created groups can only be added to team folders.
  DBSHARINGAddMemberSelectorErrorAutomaticGroup,

  /// The value is the ID that could not be identified.
  DBSHARINGAddMemberSelectorErrorInvalidDropboxId,

  /// The value is the e-email address that is malformed.
  DBSHARINGAddMemberSelectorErrorInvalidEmail,

  /// The value is the ID of the Dropbox user with an unverified email
  /// address. Invite unverified users by email address instead of by their
  /// Dropbox ID.
  DBSHARINGAddMemberSelectorErrorUnverifiedDropboxId,

  /// At least one of the specified groups in `members` in
  /// `DBSHARINGAddFolderMemberArg` is deleted.
  DBSHARINGAddMemberSelectorErrorGroupDeleted,

  /// Sharing to a group that is not on the current user's team.
  DBSHARINGAddMemberSelectorErrorGroupNotOnTeam,

  /// (no description).
  DBSHARINGAddMemberSelectorErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBSHARINGAddMemberSelectorErrorTag tag;

/// The value is the ID that could not be identified. @note Ensure the
/// `isInvalidDropboxId` method returns true before accessing, otherwise a
/// runtime exception will be raised.
@property (nonatomic, readonly, copy) NSString *invalidDropboxId;

/// The value is the e-email address that is malformed. @note Ensure the
/// `isInvalidEmail` method returns true before accessing, otherwise a runtime
/// exception will be raised.
@property (nonatomic, readonly, copy) NSString *invalidEmail;

/// The value is the ID of the Dropbox user with an unverified email address.
/// Invite unverified users by email address instead of by their Dropbox ID.
/// @note Ensure the `isUnverifiedDropboxId` method returns true before
/// accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly, copy) NSString *unverifiedDropboxId;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "automatic_group".
///
/// Description of the "automatic_group" tag state: Automatically created groups
/// can only be added to team folders.
///
/// @return An initialized instance.
///
- (instancetype)initWithAutomaticGroup;

///
/// Initializes union class with tag state of "invalid_dropbox_id".
///
/// Description of the "invalid_dropbox_id" tag state: The value is the ID that
/// could not be identified.
///
/// @param invalidDropboxId The value is the ID that could not be identified.
///
/// @return An initialized instance.
///
- (instancetype)initWithInvalidDropboxId:(NSString *)invalidDropboxId;

///
/// Initializes union class with tag state of "invalid_email".
///
/// Description of the "invalid_email" tag state: The value is the e-email
/// address that is malformed.
///
/// @param invalidEmail The value is the e-email address that is malformed.
///
/// @return An initialized instance.
///
- (instancetype)initWithInvalidEmail:(NSString *)invalidEmail;

///
/// Initializes union class with tag state of "unverified_dropbox_id".
///
/// Description of the "unverified_dropbox_id" tag state: The value is the ID of
/// the Dropbox user with an unverified email address. Invite unverified users
/// by email address instead of by their Dropbox ID.
///
/// @param unverifiedDropboxId The value is the ID of the Dropbox user with an
/// unverified email address. Invite unverified users by email address instead
/// of by their Dropbox ID.
///
/// @return An initialized instance.
///
- (instancetype)initWithUnverifiedDropboxId:(NSString *)unverifiedDropboxId;

///
/// Initializes union class with tag state of "group_deleted".
///
/// Description of the "group_deleted" tag state: At least one of the specified
/// groups in `members` in `DBSHARINGAddFolderMemberArg` is deleted.
///
/// @return An initialized instance.
///
- (instancetype)initWithGroupDeleted;

///
/// Initializes union class with tag state of "group_not_on_team".
///
/// Description of the "group_not_on_team" tag state: Sharing to a group that is
/// not on the current user's team.
///
/// @return An initialized instance.
///
- (instancetype)initWithGroupNotOnTeam;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "automatic_group".
///
/// @return Whether the union's current tag state has value "automatic_group".
///
- (BOOL)isAutomaticGroup;

///
/// Retrieves whether the union's current tag state has value
/// "invalid_dropbox_id".
///
/// @note Call this method and ensure it returns true before accessing the
/// `invalidDropboxId` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value
/// "invalid_dropbox_id".
///
- (BOOL)isInvalidDropboxId;

///
/// Retrieves whether the union's current tag state has value "invalid_email".
///
/// @note Call this method and ensure it returns true before accessing the
/// `invalidEmail` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "invalid_email".
///
- (BOOL)isInvalidEmail;

///
/// Retrieves whether the union's current tag state has value
/// "unverified_dropbox_id".
///
/// @note Call this method and ensure it returns true before accessing the
/// `unverifiedDropboxId` property, otherwise a runtime exception will be
/// thrown.
///
/// @return Whether the union's current tag state has value
/// "unverified_dropbox_id".
///
- (BOOL)isUnverifiedDropboxId;

///
/// Retrieves whether the union's current tag state has value "group_deleted".
///
/// @return Whether the union's current tag state has value "group_deleted".
///
- (BOOL)isGroupDeleted;

///
/// Retrieves whether the union's current tag state has value
/// "group_not_on_team".
///
/// @return Whether the union's current tag state has value "group_not_on_team".
///
- (BOOL)isGroupNotOnTeam;

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
/// The serialization class for the `DBSHARINGAddMemberSelectorError` union.
///
@interface DBSHARINGAddMemberSelectorErrorSerializer : NSObject

///
/// Serializes `DBSHARINGAddMemberSelectorError` instances.
///
/// @param instance An instance of the `DBSHARINGAddMemberSelectorError` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGAddMemberSelectorError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBSHARINGAddMemberSelectorError *)instance;

///
/// Deserializes `DBSHARINGAddMemberSelectorError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGAddMemberSelectorError` API object.
///
/// @return An instantiation of the `DBSHARINGAddMemberSelectorError` object.
///
+ (DBSHARINGAddMemberSelectorError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
