///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILEREQUESTSDeleteFileRequestError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `DeleteFileRequestError` union.
///
/// There was an error deleting these file requests.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILEREQUESTSDeleteFileRequestError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBFILEREQUESTSDeleteFileRequestErrorTag` enum type represents the
/// possible tag states with which the `DBFILEREQUESTSDeleteFileRequestError`
/// union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBFILEREQUESTSDeleteFileRequestErrorTag) {
  /// This user's Dropbox Business team doesn't allow file requests.
  DBFILEREQUESTSDeleteFileRequestErrorDisabledForTeam,

  /// (no description).
  DBFILEREQUESTSDeleteFileRequestErrorOther,

  /// This file request ID was not found.
  DBFILEREQUESTSDeleteFileRequestErrorNotFound,

  /// The specified path is not a folder.
  DBFILEREQUESTSDeleteFileRequestErrorNotAFolder,

  /// This file request is not accessible to this app. Apps with the app
  /// folder permission can only access file requests in their app folder.
  DBFILEREQUESTSDeleteFileRequestErrorAppLacksAccess,

  /// This user doesn't have permission to access or modify this file request.
  DBFILEREQUESTSDeleteFileRequestErrorNoPermission,

  /// This user's email address is not verified. File requests are only
  /// available on accounts with a verified email address. Users can verify
  /// their email address here https://www.dropbox.com/help/317.
  DBFILEREQUESTSDeleteFileRequestErrorEmailUnverified,

  /// There was an error validating the request. For example, the title was
  /// invalid, or there were disallowed characters in the destination path.
  DBFILEREQUESTSDeleteFileRequestErrorValidationError,

  /// One or more file requests currently open.
  DBFILEREQUESTSDeleteFileRequestErrorFileRequestOpen,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBFILEREQUESTSDeleteFileRequestErrorTag tag;

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
/// Initializes union class with tag state of "not_found".
///
/// Description of the "not_found" tag state: This file request ID was not
/// found.
///
/// @return An initialized instance.
///
- (instancetype)initWithNotFound;

///
/// Initializes union class with tag state of "not_a_folder".
///
/// Description of the "not_a_folder" tag state: The specified path is not a
/// folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithNotAFolder;

///
/// Initializes union class with tag state of "app_lacks_access".
///
/// Description of the "app_lacks_access" tag state: This file request is not
/// accessible to this app. Apps with the app folder permission can only access
/// file requests in their app folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithAppLacksAccess;

///
/// Initializes union class with tag state of "no_permission".
///
/// Description of the "no_permission" tag state: This user doesn't have
/// permission to access or modify this file request.
///
/// @return An initialized instance.
///
- (instancetype)initWithNoPermission;

///
/// Initializes union class with tag state of "email_unverified".
///
/// Description of the "email_unverified" tag state: This user's email address
/// is not verified. File requests are only available on accounts with a
/// verified email address. Users can verify their email address here
/// https://www.dropbox.com/help/317.
///
/// @return An initialized instance.
///
- (instancetype)initWithEmailUnverified;

///
/// Initializes union class with tag state of "validation_error".
///
/// Description of the "validation_error" tag state: There was an error
/// validating the request. For example, the title was invalid, or there were
/// disallowed characters in the destination path.
///
/// @return An initialized instance.
///
- (instancetype)initWithValidationError;

///
/// Initializes union class with tag state of "file_request_open".
///
/// Description of the "file_request_open" tag state: One or more file requests
/// currently open.
///
/// @return An initialized instance.
///
- (instancetype)initWithFileRequestOpen;

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
/// Retrieves whether the union's current tag state has value "not_found".
///
/// @return Whether the union's current tag state has value "not_found".
///
- (BOOL)isNotFound;

///
/// Retrieves whether the union's current tag state has value "not_a_folder".
///
/// @return Whether the union's current tag state has value "not_a_folder".
///
- (BOOL)isNotAFolder;

///
/// Retrieves whether the union's current tag state has value
/// "app_lacks_access".
///
/// @return Whether the union's current tag state has value "app_lacks_access".
///
- (BOOL)isAppLacksAccess;

///
/// Retrieves whether the union's current tag state has value "no_permission".
///
/// @return Whether the union's current tag state has value "no_permission".
///
- (BOOL)isNoPermission;

///
/// Retrieves whether the union's current tag state has value
/// "email_unverified".
///
/// @return Whether the union's current tag state has value "email_unverified".
///
- (BOOL)isEmailUnverified;

///
/// Retrieves whether the union's current tag state has value
/// "validation_error".
///
/// @return Whether the union's current tag state has value "validation_error".
///
- (BOOL)isValidationError;

///
/// Retrieves whether the union's current tag state has value
/// "file_request_open".
///
/// @return Whether the union's current tag state has value "file_request_open".
///
- (BOOL)isFileRequestOpen;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBFILEREQUESTSDeleteFileRequestError`
/// union.
///
@interface DBFILEREQUESTSDeleteFileRequestErrorSerializer : NSObject

///
/// Serializes `DBFILEREQUESTSDeleteFileRequestError` instances.
///
/// @param instance An instance of the `DBFILEREQUESTSDeleteFileRequestError`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILEREQUESTSDeleteFileRequestError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILEREQUESTSDeleteFileRequestError *)instance;

///
/// Deserializes `DBFILEREQUESTSDeleteFileRequestError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILEREQUESTSDeleteFileRequestError` API object.
///
/// @return An instantiation of the `DBFILEREQUESTSDeleteFileRequestError`
/// object.
///
+ (DBFILEREQUESTSDeleteFileRequestError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
