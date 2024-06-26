///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILESCreateFolderEntryError;
@class DBFILESWriteError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `CreateFolderEntryError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESCreateFolderEntryError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBFILESCreateFolderEntryErrorTag` enum type represents the possible tag
/// states with which the `DBFILESCreateFolderEntryError` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBFILESCreateFolderEntryErrorTag) {
  /// (no description).
  DBFILESCreateFolderEntryErrorPath,

  /// (no description).
  DBFILESCreateFolderEntryErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBFILESCreateFolderEntryErrorTag tag;

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
/// The serialization class for the `DBFILESCreateFolderEntryError` union.
///
@interface DBFILESCreateFolderEntryErrorSerializer : NSObject

///
/// Serializes `DBFILESCreateFolderEntryError` instances.
///
/// @param instance An instance of the `DBFILESCreateFolderEntryError` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESCreateFolderEntryError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILESCreateFolderEntryError *)instance;

///
/// Deserializes `DBFILESCreateFolderEntryError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESCreateFolderEntryError` API object.
///
/// @return An instantiation of the `DBFILESCreateFolderEntryError` object.
///
+ (DBFILESCreateFolderEntryError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
