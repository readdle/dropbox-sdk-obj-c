///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGRemoveFolderMemberError;
@class DBSHARINGSharedFolderAccessError;
@class DBSHARINGSharedFolderMemberError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `RemoveFolderMemberError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGRemoveFolderMemberError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBSHARINGRemoveFolderMemberErrorTag` enum type represents the possible
/// tag states with which the `DBSHARINGRemoveFolderMemberError` union can
/// exist.
typedef NS_CLOSED_ENUM(NSInteger, DBSHARINGRemoveFolderMemberErrorTag) {
  /// (no description).
  DBSHARINGRemoveFolderMemberErrorAccessError,

  /// (no description).
  DBSHARINGRemoveFolderMemberErrorMemberError,

  /// The target user is the owner of the shared folder. You can't remove this
  /// user until ownership has been transferred to another member.
  DBSHARINGRemoveFolderMemberErrorFolderOwner,

  /// The target user has access to the shared folder via a group.
  DBSHARINGRemoveFolderMemberErrorGroupAccess,

  /// This action cannot be performed on a team shared folder.
  DBSHARINGRemoveFolderMemberErrorTeamFolder,

  /// The current user does not have permission to perform this action.
  DBSHARINGRemoveFolderMemberErrorNoPermission,

  /// This shared folder has too many files for leaving a copy. You can still
  /// remove this user without leaving a copy.
  DBSHARINGRemoveFolderMemberErrorTooManyFiles,

  /// (no description).
  DBSHARINGRemoveFolderMemberErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBSHARINGRemoveFolderMemberErrorTag tag;

/// (no description). @note Ensure the `isAccessError` method returns true
/// before accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBSHARINGSharedFolderAccessError *accessError;

/// (no description). @note Ensure the `isMemberError` method returns true
/// before accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBSHARINGSharedFolderMemberError *memberError;

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
/// Initializes union class with tag state of "member_error".
///
/// @param memberError (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithMemberError:(DBSHARINGSharedFolderMemberError *)memberError;

///
/// Initializes union class with tag state of "folder_owner".
///
/// Description of the "folder_owner" tag state: The target user is the owner of
/// the shared folder. You can't remove this user until ownership has been
/// transferred to another member.
///
/// @return An initialized instance.
///
- (instancetype)initWithFolderOwner;

///
/// Initializes union class with tag state of "group_access".
///
/// Description of the "group_access" tag state: The target user has access to
/// the shared folder via a group.
///
/// @return An initialized instance.
///
- (instancetype)initWithGroupAccess;

///
/// Initializes union class with tag state of "team_folder".
///
/// Description of the "team_folder" tag state: This action cannot be performed
/// on a team shared folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithTeamFolder;

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
/// Initializes union class with tag state of "too_many_files".
///
/// Description of the "too_many_files" tag state: This shared folder has too
/// many files for leaving a copy. You can still remove this user without
/// leaving a copy.
///
/// @return An initialized instance.
///
- (instancetype)initWithTooManyFiles;

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
/// Retrieves whether the union's current tag state has value "member_error".
///
/// @note Call this method and ensure it returns true before accessing the
/// `memberError` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "member_error".
///
- (BOOL)isMemberError;

///
/// Retrieves whether the union's current tag state has value "folder_owner".
///
/// @return Whether the union's current tag state has value "folder_owner".
///
- (BOOL)isFolderOwner;

///
/// Retrieves whether the union's current tag state has value "group_access".
///
/// @return Whether the union's current tag state has value "group_access".
///
- (BOOL)isGroupAccess;

///
/// Retrieves whether the union's current tag state has value "team_folder".
///
/// @return Whether the union's current tag state has value "team_folder".
///
- (BOOL)isTeamFolder;

///
/// Retrieves whether the union's current tag state has value "no_permission".
///
/// @return Whether the union's current tag state has value "no_permission".
///
- (BOOL)isNoPermission;

///
/// Retrieves whether the union's current tag state has value "too_many_files".
///
/// @return Whether the union's current tag state has value "too_many_files".
///
- (BOOL)isTooManyFiles;

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
/// The serialization class for the `DBSHARINGRemoveFolderMemberError` union.
///
@interface DBSHARINGRemoveFolderMemberErrorSerializer : NSObject

///
/// Serializes `DBSHARINGRemoveFolderMemberError` instances.
///
/// @param instance An instance of the `DBSHARINGRemoveFolderMemberError` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGRemoveFolderMemberError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBSHARINGRemoveFolderMemberError *)instance;

///
/// Deserializes `DBSHARINGRemoveFolderMemberError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGRemoveFolderMemberError` API object.
///
/// @return An instantiation of the `DBSHARINGRemoveFolderMemberError` object.
///
+ (DBSHARINGRemoveFolderMemberError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
