///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILESSearchMode;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SearchMode` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESSearchMode : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBFILESSearchModeTag` enum type represents the possible tag states with
/// which the `DBFILESSearchMode` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBFILESSearchModeTag) {
  /// Search file and folder names.
  DBFILESSearchModeFilename,

  /// Search file and folder names as well as file contents.
  DBFILESSearchModeFilenameAndContent,

  /// Search for deleted file and folder names.
  DBFILESSearchModeDeletedFilename,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBFILESSearchModeTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "filename".
///
/// Description of the "filename" tag state: Search file and folder names.
///
/// @return An initialized instance.
///
- (instancetype)initWithFilename;

///
/// Initializes union class with tag state of "filename_and_content".
///
/// Description of the "filename_and_content" tag state: Search file and folder
/// names as well as file contents.
///
/// @return An initialized instance.
///
- (instancetype)initWithFilenameAndContent;

///
/// Initializes union class with tag state of "deleted_filename".
///
/// Description of the "deleted_filename" tag state: Search for deleted file and
/// folder names.
///
/// @return An initialized instance.
///
- (instancetype)initWithDeletedFilename;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "filename".
///
/// @return Whether the union's current tag state has value "filename".
///
- (BOOL)isFilename;

///
/// Retrieves whether the union's current tag state has value
/// "filename_and_content".
///
/// @return Whether the union's current tag state has value
/// "filename_and_content".
///
- (BOOL)isFilenameAndContent;

///
/// Retrieves whether the union's current tag state has value
/// "deleted_filename".
///
/// @return Whether the union's current tag state has value "deleted_filename".
///
- (BOOL)isDeletedFilename;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBFILESSearchMode` union.
///
@interface DBFILESSearchModeSerializer : NSObject

///
/// Serializes `DBFILESSearchMode` instances.
///
/// @param instance An instance of the `DBFILESSearchMode` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESSearchMode` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILESSearchMode *)instance;

///
/// Deserializes `DBFILESSearchMode` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESSearchMode` API object.
///
/// @return An instantiation of the `DBFILESSearchMode` object.
///
+ (DBFILESSearchMode *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
