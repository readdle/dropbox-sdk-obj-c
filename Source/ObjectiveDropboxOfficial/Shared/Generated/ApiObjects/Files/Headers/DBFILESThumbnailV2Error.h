///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILESLookupError;
@class DBFILESThumbnailV2Error;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ThumbnailV2Error` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESThumbnailV2Error : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBFILESThumbnailV2ErrorTag` enum type represents the possible tag
/// states with which the `DBFILESThumbnailV2Error` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBFILESThumbnailV2ErrorTag) {
  /// An error occurred when downloading metadata for the image.
  DBFILESThumbnailV2ErrorPath,

  /// The file extension doesn't allow conversion to a thumbnail.
  DBFILESThumbnailV2ErrorUnsupportedExtension,

  /// The image cannot be converted to a thumbnail.
  DBFILESThumbnailV2ErrorUnsupportedImage,

  /// An error occurred during thumbnail conversion.
  DBFILESThumbnailV2ErrorConversionError,

  /// Access to this shared link is forbidden.
  DBFILESThumbnailV2ErrorAccessDenied,

  /// The shared link does not exist.
  DBFILESThumbnailV2ErrorNotFound,

  /// (no description).
  DBFILESThumbnailV2ErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBFILESThumbnailV2ErrorTag tag;

/// An error occurred when downloading metadata for the image. @note Ensure the
/// `isPath` method returns true before accessing, otherwise a runtime exception
/// will be raised.
@property (nonatomic, readonly) DBFILESLookupError *path;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "path".
///
/// Description of the "path" tag state: An error occurred when downloading
/// metadata for the image.
///
/// @param path An error occurred when downloading metadata for the image.
///
/// @return An initialized instance.
///
- (instancetype)initWithPath:(DBFILESLookupError *)path;

///
/// Initializes union class with tag state of "unsupported_extension".
///
/// Description of the "unsupported_extension" tag state: The file extension
/// doesn't allow conversion to a thumbnail.
///
/// @return An initialized instance.
///
- (instancetype)initWithUnsupportedExtension;

///
/// Initializes union class with tag state of "unsupported_image".
///
/// Description of the "unsupported_image" tag state: The image cannot be
/// converted to a thumbnail.
///
/// @return An initialized instance.
///
- (instancetype)initWithUnsupportedImage;

///
/// Initializes union class with tag state of "conversion_error".
///
/// Description of the "conversion_error" tag state: An error occurred during
/// thumbnail conversion.
///
/// @return An initialized instance.
///
- (instancetype)initWithConversionError;

///
/// Initializes union class with tag state of "access_denied".
///
/// Description of the "access_denied" tag state: Access to this shared link is
/// forbidden.
///
/// @return An initialized instance.
///
- (instancetype)initWithAccessDenied;

///
/// Initializes union class with tag state of "not_found".
///
/// Description of the "not_found" tag state: The shared link does not exist.
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
/// Retrieves whether the union's current tag state has value
/// "unsupported_extension".
///
/// @return Whether the union's current tag state has value
/// "unsupported_extension".
///
- (BOOL)isUnsupportedExtension;

///
/// Retrieves whether the union's current tag state has value
/// "unsupported_image".
///
/// @return Whether the union's current tag state has value "unsupported_image".
///
- (BOOL)isUnsupportedImage;

///
/// Retrieves whether the union's current tag state has value
/// "conversion_error".
///
/// @return Whether the union's current tag state has value "conversion_error".
///
- (BOOL)isConversionError;

///
/// Retrieves whether the union's current tag state has value "access_denied".
///
/// @return Whether the union's current tag state has value "access_denied".
///
- (BOOL)isAccessDenied;

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
/// The serialization class for the `DBFILESThumbnailV2Error` union.
///
@interface DBFILESThumbnailV2ErrorSerializer : NSObject

///
/// Serializes `DBFILESThumbnailV2Error` instances.
///
/// @param instance An instance of the `DBFILESThumbnailV2Error` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESThumbnailV2Error` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILESThumbnailV2Error *)instance;

///
/// Deserializes `DBFILESThumbnailV2Error` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESThumbnailV2Error` API object.
///
/// @return An instantiation of the `DBFILESThumbnailV2Error` object.
///
+ (DBFILESThumbnailV2Error *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
