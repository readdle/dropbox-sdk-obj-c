///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGSetAccessInheritanceError;
@class DBSHARINGSharedFolderAccessError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SetAccessInheritanceError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGSetAccessInheritanceError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBSHARINGSetAccessInheritanceErrorTag` enum type represents the
/// possible tag states with which the `DBSHARINGSetAccessInheritanceError`
/// union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBSHARINGSetAccessInheritanceErrorTag) {
  /// Unable to access shared folder.
  DBSHARINGSetAccessInheritanceErrorAccessError,

  /// The current user does not have permission to perform this action.
  DBSHARINGSetAccessInheritanceErrorNoPermission,

  /// (no description).
  DBSHARINGSetAccessInheritanceErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBSHARINGSetAccessInheritanceErrorTag tag;

/// Unable to access shared folder. @note Ensure the `isAccessError` method
/// returns true before accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBSHARINGSharedFolderAccessError *accessError;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "access_error".
///
/// Description of the "access_error" tag state: Unable to access shared folder.
///
/// @param accessError Unable to access shared folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithAccessError:(DBSHARINGSharedFolderAccessError *)accessError;

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
/// Retrieves whether the union's current tag state has value "no_permission".
///
/// @return Whether the union's current tag state has value "no_permission".
///
- (BOOL)isNoPermission;

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
/// The serialization class for the `DBSHARINGSetAccessInheritanceError` union.
///
@interface DBSHARINGSetAccessInheritanceErrorSerializer : NSObject

///
/// Serializes `DBSHARINGSetAccessInheritanceError` instances.
///
/// @param instance An instance of the `DBSHARINGSetAccessInheritanceError` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGSetAccessInheritanceError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBSHARINGSetAccessInheritanceError *)instance;

///
/// Deserializes `DBSHARINGSetAccessInheritanceError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGSetAccessInheritanceError` API object.
///
/// @return An instantiation of the `DBSHARINGSetAccessInheritanceError` object.
///
+ (DBSHARINGSetAccessInheritanceError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
