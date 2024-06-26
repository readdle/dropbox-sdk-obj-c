///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILESSaveUrlError;
@class DBFILESWriteError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SaveUrlError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESSaveUrlError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBFILESSaveUrlErrorTag` enum type represents the possible tag states
/// with which the `DBFILESSaveUrlError` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBFILESSaveUrlErrorTag) {
  /// (no description).
  DBFILESSaveUrlErrorPath,

  /// Failed downloading the given URL. The URL may be  password-protected and
  /// the password provided was incorrect,  or the link may be disabled.
  DBFILESSaveUrlErrorDownloadFailed,

  /// The given URL is invalid.
  DBFILESSaveUrlErrorInvalidUrl,

  /// The file where the URL is saved to no longer exists.
  DBFILESSaveUrlErrorNotFound,

  /// (no description).
  DBFILESSaveUrlErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBFILESSaveUrlErrorTag tag;

/// (no description). @note Ensure the `isPath` method returns true before
/// accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBFILESWriteError *path;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "path".
///
/// @param path (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithPath:(DBFILESWriteError *)path;

///
/// Initializes union class with tag state of "download_failed".
///
/// Description of the "download_failed" tag state: Failed downloading the given
/// URL. The URL may be  password-protected and the password provided was
/// incorrect,  or the link may be disabled.
///
/// @return An initialized instance.
///
- (instancetype)initWithDownloadFailed;

///
/// Initializes union class with tag state of "invalid_url".
///
/// Description of the "invalid_url" tag state: The given URL is invalid.
///
/// @return An initialized instance.
///
- (instancetype)initWithInvalidUrl;

///
/// Initializes union class with tag state of "not_found".
///
/// Description of the "not_found" tag state: The file where the URL is saved to
/// no longer exists.
///
/// @return An initialized instance.
///
- (instancetype)initWithNotFound;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "path".
///
/// @note Call this method and ensure it returns true before accessing the
/// `path` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "path".
///
- (BOOL)isPath;

///
/// Retrieves whether the union's current tag state has value "download_failed".
///
/// @return Whether the union's current tag state has value "download_failed".
///
- (BOOL)isDownloadFailed;

///
/// Retrieves whether the union's current tag state has value "invalid_url".
///
/// @return Whether the union's current tag state has value "invalid_url".
///
- (BOOL)isInvalidUrl;

///
/// Retrieves whether the union's current tag state has value "not_found".
///
/// @return Whether the union's current tag state has value "not_found".
///
- (BOOL)isNotFound;

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
/// The serialization class for the `DBFILESSaveUrlError` union.
///
@interface DBFILESSaveUrlErrorSerializer : NSObject

///
/// Serializes `DBFILESSaveUrlError` instances.
///
/// @param instance An instance of the `DBFILESSaveUrlError` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESSaveUrlError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILESSaveUrlError *)instance;

///
/// Deserializes `DBFILESSaveUrlError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESSaveUrlError` API object.
///
/// @return An instantiation of the `DBFILESSaveUrlError` object.
///
+ (DBFILESSaveUrlError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
