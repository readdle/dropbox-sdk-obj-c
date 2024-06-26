///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGShareFolderError;
@class DBSHARINGSharePathError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ShareFolderError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGShareFolderError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBSHARINGShareFolderErrorTag` enum type represents the possible tag
/// states with which the `DBSHARINGShareFolderError` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBSHARINGShareFolderErrorTag) {
  /// This user's email address is not verified. This functionality is only
  /// available on accounts with a verified email address. Users can verify
  /// their email address here https://www.dropbox.com/help/317.
  DBSHARINGShareFolderErrorEmailUnverified,

  /// `path` in `DBSHARINGShareFolderArg` is invalid.
  DBSHARINGShareFolderErrorBadPath,

  /// Team policy is more restrictive than `memberPolicy` in
  /// `DBSHARINGShareFolderArg`.
  DBSHARINGShareFolderErrorTeamPolicyDisallowsMemberPolicy,

  /// The current user's account is not allowed to select the specified
  /// `sharedLinkPolicy` in `DBSHARINGShareFolderArg`.
  DBSHARINGShareFolderErrorDisallowedSharedLinkPolicy,

  /// (no description).
  DBSHARINGShareFolderErrorOther,

  /// The current user does not have permission to perform this action.
  DBSHARINGShareFolderErrorNoPermission,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBSHARINGShareFolderErrorTag tag;

/// `path` in `DBSHARINGShareFolderArg` is invalid. @note Ensure the `isBadPath`
/// method returns true before accessing, otherwise a runtime exception will be
/// raised.
@property (nonatomic, readonly) DBSHARINGSharePathError *badPath;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "email_unverified".
///
/// Description of the "email_unverified" tag state: This user's email address
/// is not verified. This functionality is only available on accounts with a
/// verified email address. Users can verify their email address here
/// https://www.dropbox.com/help/317.
///
/// @return An initialized instance.
///
- (instancetype)initWithEmailUnverified;

///
/// Initializes union class with tag state of "bad_path".
///
/// Description of the "bad_path" tag state: `path` in `DBSHARINGShareFolderArg`
/// is invalid.
///
/// @param badPath `path` in `DBSHARINGShareFolderArg` is invalid.
///
/// @return An initialized instance.
///
- (instancetype)initWithBadPath:(DBSHARINGSharePathError *)badPath;

///
/// Initializes union class with tag state of
/// "team_policy_disallows_member_policy".
///
/// Description of the "team_policy_disallows_member_policy" tag state: Team
/// policy is more restrictive than `memberPolicy` in `DBSHARINGShareFolderArg`.
///
/// @return An initialized instance.
///
- (instancetype)initWithTeamPolicyDisallowsMemberPolicy;

///
/// Initializes union class with tag state of "disallowed_shared_link_policy".
///
/// Description of the "disallowed_shared_link_policy" tag state: The current
/// user's account is not allowed to select the specified `sharedLinkPolicy` in
/// `DBSHARINGShareFolderArg`.
///
/// @return An initialized instance.
///
- (instancetype)initWithDisallowedSharedLinkPolicy;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

///
/// Initializes union class with tag state of "no_permission".
///
/// Description of the "no_permission" tag state: The current user does not have
/// permission to perform this action.
///
/// @return An initialized instance.
///
- (instancetype)initWithNoPermission;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value
/// "email_unverified".
///
/// @return Whether the union's current tag state has value "email_unverified".
///
- (BOOL)isEmailUnverified;

///
/// Retrieves whether the union's current tag state has value "bad_path".
///
/// @note Call this method and ensure it returns true before accessing the
/// `badPath` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "bad_path".
///
- (BOOL)isBadPath;

///
/// Retrieves whether the union's current tag state has value
/// "team_policy_disallows_member_policy".
///
/// @return Whether the union's current tag state has value
/// "team_policy_disallows_member_policy".
///
- (BOOL)isTeamPolicyDisallowsMemberPolicy;

///
/// Retrieves whether the union's current tag state has value
/// "disallowed_shared_link_policy".
///
/// @return Whether the union's current tag state has value
/// "disallowed_shared_link_policy".
///
- (BOOL)isDisallowedSharedLinkPolicy;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves whether the union's current tag state has value "no_permission".
///
/// @return Whether the union's current tag state has value "no_permission".
///
- (BOOL)isNoPermission;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBSHARINGShareFolderError` union.
///
@interface DBSHARINGShareFolderErrorSerializer : NSObject

///
/// Serializes `DBSHARINGShareFolderError` instances.
///
/// @param instance An instance of the `DBSHARINGShareFolderError` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGShareFolderError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBSHARINGShareFolderError *)instance;

///
/// Deserializes `DBSHARINGShareFolderError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGShareFolderError` API object.
///
/// @return An instantiation of the `DBSHARINGShareFolderError` object.
///
+ (DBSHARINGShareFolderError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
