///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILEPROPERTIESTemplateError;
@class DBFILESListFolderError;
@class DBFILESLookupError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ListFolderError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESListFolderError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBFILESListFolderErrorTag` enum type represents the possible tag states
/// with which the `DBFILESListFolderError` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBFILESListFolderErrorTag) {
  /// (no description).
  DBFILESListFolderErrorPath,

  /// (no description).
  DBFILESListFolderErrorTemplateError,

  /// (no description).
  DBFILESListFolderErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBFILESListFolderErrorTag tag;

/// (no description). @note Ensure the `isPath` method returns true before
/// accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBFILESLookupError *path;

/// (no description). @note Ensure the `isTemplateError` method returns true
/// before accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBFILEPROPERTIESTemplateError *templateError;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "path".
///
/// @param path (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithPath:(DBFILESLookupError *)path;

///
/// Initializes union class with tag state of "template_error".
///
/// @param templateError (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithTemplateError:(DBFILEPROPERTIESTemplateError *)templateError;

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
/// Retrieves whether the union's current tag state has value "template_error".
///
/// @note Call this method and ensure it returns true before accessing the
/// `templateError` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "template_error".
///
- (BOOL)isTemplateError;

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
/// The serialization class for the `DBFILESListFolderError` union.
///
@interface DBFILESListFolderErrorSerializer : NSObject

///
/// Serializes `DBFILESListFolderError` instances.
///
/// @param instance An instance of the `DBFILESListFolderError` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESListFolderError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILESListFolderError *)instance;

///
/// Deserializes `DBFILESListFolderError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESListFolderError` API object.
///
/// @return An instantiation of the `DBFILESListFolderError` object.
///
+ (DBFILESListFolderError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
