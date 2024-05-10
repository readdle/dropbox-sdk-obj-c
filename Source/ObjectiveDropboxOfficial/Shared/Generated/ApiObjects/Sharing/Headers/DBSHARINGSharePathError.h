///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGSharePathError;
@class DBSHARINGSharedFolderMetadata;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SharePathError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGSharePathError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBSHARINGSharePathErrorTag` enum type represents the possible tag
/// states with which the `DBSHARINGSharePathError` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBSHARINGSharePathErrorTag) {
  /// A file is at the specified path.
  DBSHARINGSharePathErrorIsFile,

  /// We do not support sharing a folder inside a shared folder.
  DBSHARINGSharePathErrorInsideSharedFolder,

  /// We do not support shared folders that contain shared folders.
  DBSHARINGSharePathErrorContainsSharedFolder,

  /// We do not support shared folders that contain app folders.
  DBSHARINGSharePathErrorContainsAppFolder,

  /// We do not support shared folders that contain team folders.
  DBSHARINGSharePathErrorContainsTeamFolder,

  /// We do not support sharing an app folder.
  DBSHARINGSharePathErrorIsAppFolder,

  /// We do not support sharing a folder inside an app folder.
  DBSHARINGSharePathErrorInsideAppFolder,

  /// A public folder can't be shared this way. Use a public link instead.
  DBSHARINGSharePathErrorIsPublicFolder,

  /// A folder inside a public folder can't be shared this way. Use a public
  /// link instead.
  DBSHARINGSharePathErrorInsidePublicFolder,

  /// Folder is already shared. Contains metadata about the existing shared
  /// folder.
  DBSHARINGSharePathErrorAlreadyShared,

  /// Path is not valid.
  DBSHARINGSharePathErrorInvalidPath,

  /// We do not support sharing a Mac OS X package.
  DBSHARINGSharePathErrorIsOsxPackage,

  /// We do not support sharing a folder inside a Mac OS X package.
  DBSHARINGSharePathErrorInsideOsxPackage,

  /// We do not support sharing the Vault folder.
  DBSHARINGSharePathErrorIsVault,

  /// We do not support sharing a folder inside a locked Vault.
  DBSHARINGSharePathErrorIsVaultLocked,

  /// We do not support sharing the Family folder.
  DBSHARINGSharePathErrorIsFamily,

  /// (no description).
  DBSHARINGSharePathErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBSHARINGSharePathErrorTag tag;

/// Folder is already shared. Contains metadata about the existing shared
/// folder. @note Ensure the `isAlreadyShared` method returns true before
/// accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBSHARINGSharedFolderMetadata *alreadyShared;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "is_file".
///
/// Description of the "is_file" tag state: A file is at the specified path.
///
/// @return An initialized instance.
///
- (instancetype)initWithIsFile;

///
/// Initializes union class with tag state of "inside_shared_folder".
///
/// Description of the "inside_shared_folder" tag state: We do not support
/// sharing a folder inside a shared folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithInsideSharedFolder;

///
/// Initializes union class with tag state of "contains_shared_folder".
///
/// Description of the "contains_shared_folder" tag state: We do not support
/// shared folders that contain shared folders.
///
/// @return An initialized instance.
///
- (instancetype)initWithContainsSharedFolder;

///
/// Initializes union class with tag state of "contains_app_folder".
///
/// Description of the "contains_app_folder" tag state: We do not support shared
/// folders that contain app folders.
///
/// @return An initialized instance.
///
- (instancetype)initWithContainsAppFolder;

///
/// Initializes union class with tag state of "contains_team_folder".
///
/// Description of the "contains_team_folder" tag state: We do not support
/// shared folders that contain team folders.
///
/// @return An initialized instance.
///
- (instancetype)initWithContainsTeamFolder;

///
/// Initializes union class with tag state of "is_app_folder".
///
/// Description of the "is_app_folder" tag state: We do not support sharing an
/// app folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithIsAppFolder;

///
/// Initializes union class with tag state of "inside_app_folder".
///
/// Description of the "inside_app_folder" tag state: We do not support sharing
/// a folder inside an app folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithInsideAppFolder;

///
/// Initializes union class with tag state of "is_public_folder".
///
/// Description of the "is_public_folder" tag state: A public folder can't be
/// shared this way. Use a public link instead.
///
/// @return An initialized instance.
///
- (instancetype)initWithIsPublicFolder;

///
/// Initializes union class with tag state of "inside_public_folder".
///
/// Description of the "inside_public_folder" tag state: A folder inside a
/// public folder can't be shared this way. Use a public link instead.
///
/// @return An initialized instance.
///
- (instancetype)initWithInsidePublicFolder;

///
/// Initializes union class with tag state of "already_shared".
///
/// Description of the "already_shared" tag state: Folder is already shared.
/// Contains metadata about the existing shared folder.
///
/// @param alreadyShared Folder is already shared. Contains metadata about the
/// existing shared folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithAlreadyShared:(DBSHARINGSharedFolderMetadata *)alreadyShared;

///
/// Initializes union class with tag state of "invalid_path".
///
/// Description of the "invalid_path" tag state: Path is not valid.
///
/// @return An initialized instance.
///
- (instancetype)initWithInvalidPath;

///
/// Initializes union class with tag state of "is_osx_package".
///
/// Description of the "is_osx_package" tag state: We do not support sharing a
/// Mac OS X package.
///
/// @return An initialized instance.
///
- (instancetype)initWithIsOsxPackage;

///
/// Initializes union class with tag state of "inside_osx_package".
///
/// Description of the "inside_osx_package" tag state: We do not support sharing
/// a folder inside a Mac OS X package.
///
/// @return An initialized instance.
///
- (instancetype)initWithInsideOsxPackage;

///
/// Initializes union class with tag state of "is_vault".
///
/// Description of the "is_vault" tag state: We do not support sharing the Vault
/// folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithIsVault;

///
/// Initializes union class with tag state of "is_vault_locked".
///
/// Description of the "is_vault_locked" tag state: We do not support sharing a
/// folder inside a locked Vault.
///
/// @return An initialized instance.
///
- (instancetype)initWithIsVaultLocked;

///
/// Initializes union class with tag state of "is_family".
///
/// Description of the "is_family" tag state: We do not support sharing the
/// Family folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithIsFamily;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "is_file".
///
/// @return Whether the union's current tag state has value "is_file".
///
- (BOOL)isIsFile;

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
/// "contains_shared_folder".
///
/// @return Whether the union's current tag state has value
/// "contains_shared_folder".
///
- (BOOL)isContainsSharedFolder;

///
/// Retrieves whether the union's current tag state has value
/// "contains_app_folder".
///
/// @return Whether the union's current tag state has value
/// "contains_app_folder".
///
- (BOOL)isContainsAppFolder;

///
/// Retrieves whether the union's current tag state has value
/// "contains_team_folder".
///
/// @return Whether the union's current tag state has value
/// "contains_team_folder".
///
- (BOOL)isContainsTeamFolder;

///
/// Retrieves whether the union's current tag state has value "is_app_folder".
///
/// @return Whether the union's current tag state has value "is_app_folder".
///
- (BOOL)isIsAppFolder;

///
/// Retrieves whether the union's current tag state has value
/// "inside_app_folder".
///
/// @return Whether the union's current tag state has value "inside_app_folder".
///
- (BOOL)isInsideAppFolder;

///
/// Retrieves whether the union's current tag state has value
/// "is_public_folder".
///
/// @return Whether the union's current tag state has value "is_public_folder".
///
- (BOOL)isIsPublicFolder;

///
/// Retrieves whether the union's current tag state has value
/// "inside_public_folder".
///
/// @return Whether the union's current tag state has value
/// "inside_public_folder".
///
- (BOOL)isInsidePublicFolder;

///
/// Retrieves whether the union's current tag state has value "already_shared".
///
/// @note Call this method and ensure it returns true before accessing the
/// `alreadyShared` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "already_shared".
///
- (BOOL)isAlreadyShared;

///
/// Retrieves whether the union's current tag state has value "invalid_path".
///
/// @return Whether the union's current tag state has value "invalid_path".
///
- (BOOL)isInvalidPath;

///
/// Retrieves whether the union's current tag state has value "is_osx_package".
///
/// @return Whether the union's current tag state has value "is_osx_package".
///
- (BOOL)isIsOsxPackage;

///
/// Retrieves whether the union's current tag state has value
/// "inside_osx_package".
///
/// @return Whether the union's current tag state has value
/// "inside_osx_package".
///
- (BOOL)isInsideOsxPackage;

///
/// Retrieves whether the union's current tag state has value "is_vault".
///
/// @return Whether the union's current tag state has value "is_vault".
///
- (BOOL)isIsVault;

///
/// Retrieves whether the union's current tag state has value "is_vault_locked".
///
/// @return Whether the union's current tag state has value "is_vault_locked".
///
- (BOOL)isIsVaultLocked;

///
/// Retrieves whether the union's current tag state has value "is_family".
///
/// @return Whether the union's current tag state has value "is_family".
///
- (BOOL)isIsFamily;

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
/// The serialization class for the `DBSHARINGSharePathError` union.
///
@interface DBSHARINGSharePathErrorSerializer : NSObject

///
/// Serializes `DBSHARINGSharePathError` instances.
///
/// @param instance An instance of the `DBSHARINGSharePathError` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGSharePathError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBSHARINGSharePathError *)instance;

///
/// Deserializes `DBSHARINGSharePathError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGSharePathError` API object.
///
/// @return An instantiation of the `DBSHARINGSharePathError` object.
///
+ (DBSHARINGSharePathError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
