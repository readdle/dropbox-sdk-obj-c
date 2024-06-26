///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGJobError;
@class DBSHARINGRelinquishFolderMembershipError;
@class DBSHARINGRemoveFolderMemberError;
@class DBSHARINGUnshareFolderError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `JobError` union.
///
/// Error occurred while performing an asynchronous job from `unshareFolder` or
/// `removeFolderMember`.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGJobError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBSHARINGJobErrorTag` enum type represents the possible tag states with
/// which the `DBSHARINGJobError` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBSHARINGJobErrorTag) {
  /// Error occurred while performing `unshareFolder` action.
  DBSHARINGJobErrorUnshareFolderError,

  /// Error occurred while performing `removeFolderMember` action.
  DBSHARINGJobErrorRemoveFolderMemberError,

  /// Error occurred while performing `relinquishFolderMembership` action.
  DBSHARINGJobErrorRelinquishFolderMembershipError,

  /// (no description).
  DBSHARINGJobErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBSHARINGJobErrorTag tag;

/// Error occurred while performing `unshareFolder` action. @note Ensure the
/// `isUnshareFolderError` method returns true before accessing, otherwise a
/// runtime exception will be raised.
@property (nonatomic, readonly) DBSHARINGUnshareFolderError *unshareFolderError;

/// Error occurred while performing `removeFolderMember` action. @note Ensure
/// the `isRemoveFolderMemberError` method returns true before accessing,
/// otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBSHARINGRemoveFolderMemberError *removeFolderMemberError;

/// Error occurred while performing `relinquishFolderMembership` action. @note
/// Ensure the `isRelinquishFolderMembershipError` method returns true before
/// accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBSHARINGRelinquishFolderMembershipError *relinquishFolderMembershipError;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "unshare_folder_error".
///
/// Description of the "unshare_folder_error" tag state: Error occurred while
/// performing `unshareFolder` action.
///
/// @param unshareFolderError Error occurred while performing `unshareFolder`
/// action.
///
/// @return An initialized instance.
///
- (instancetype)initWithUnshareFolderError:(DBSHARINGUnshareFolderError *)unshareFolderError;

///
/// Initializes union class with tag state of "remove_folder_member_error".
///
/// Description of the "remove_folder_member_error" tag state: Error occurred
/// while performing `removeFolderMember` action.
///
/// @param removeFolderMemberError Error occurred while performing
/// `removeFolderMember` action.
///
/// @return An initialized instance.
///
- (instancetype)initWithRemoveFolderMemberError:(DBSHARINGRemoveFolderMemberError *)removeFolderMemberError;

///
/// Initializes union class with tag state of
/// "relinquish_folder_membership_error".
///
/// Description of the "relinquish_folder_membership_error" tag state: Error
/// occurred while performing `relinquishFolderMembership` action.
///
/// @param relinquishFolderMembershipError Error occurred while performing
/// `relinquishFolderMembership` action.
///
/// @return An initialized instance.
///
- (instancetype)initWithRelinquishFolderMembershipError:
    (DBSHARINGRelinquishFolderMembershipError *)relinquishFolderMembershipError;

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
/// "unshare_folder_error".
///
/// @note Call this method and ensure it returns true before accessing the
/// `unshareFolderError` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value
/// "unshare_folder_error".
///
- (BOOL)isUnshareFolderError;

///
/// Retrieves whether the union's current tag state has value
/// "remove_folder_member_error".
///
/// @note Call this method and ensure it returns true before accessing the
/// `removeFolderMemberError` property, otherwise a runtime exception will be
/// thrown.
///
/// @return Whether the union's current tag state has value
/// "remove_folder_member_error".
///
- (BOOL)isRemoveFolderMemberError;

///
/// Retrieves whether the union's current tag state has value
/// "relinquish_folder_membership_error".
///
/// @note Call this method and ensure it returns true before accessing the
/// `relinquishFolderMembershipError` property, otherwise a runtime exception
/// will be thrown.
///
/// @return Whether the union's current tag state has value
/// "relinquish_folder_membership_error".
///
- (BOOL)isRelinquishFolderMembershipError;

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
/// The serialization class for the `DBSHARINGJobError` union.
///
@interface DBSHARINGJobErrorSerializer : NSObject

///
/// Serializes `DBSHARINGJobError` instances.
///
/// @param instance An instance of the `DBSHARINGJobError` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGJobError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBSHARINGJobError *)instance;

///
/// Deserializes `DBSHARINGJobError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGJobError` API object.
///
/// @return An instantiation of the `DBSHARINGJobError` object.
///
+ (DBSHARINGJobError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
