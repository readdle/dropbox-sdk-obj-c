///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGShareFolderError;
@class DBSHARINGShareFolderJobStatus;
@class DBSHARINGSharedFolderMetadata;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ShareFolderJobStatus` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGShareFolderJobStatus : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBSHARINGShareFolderJobStatusTag` enum type represents the possible tag
/// states with which the `DBSHARINGShareFolderJobStatus` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBSHARINGShareFolderJobStatusTag) {
  /// The asynchronous job is still in progress.
  DBSHARINGShareFolderJobStatusInProgress,

  /// The share job has finished. The value is the metadata for the folder.
  DBSHARINGShareFolderJobStatusComplete,

  /// (no description).
  DBSHARINGShareFolderJobStatusFailed,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBSHARINGShareFolderJobStatusTag tag;

/// The share job has finished. The value is the metadata for the folder. @note
/// Ensure the `isComplete` method returns true before accessing, otherwise a
/// runtime exception will be raised.
@property (nonatomic, readonly) DBSHARINGSharedFolderMetadata *complete;

/// (no description). @note Ensure the `isFailed` method returns true before
/// accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBSHARINGShareFolderError *failed;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "in_progress".
///
/// Description of the "in_progress" tag state: The asynchronous job is still in
/// progress.
///
/// @return An initialized instance.
///
- (instancetype)initWithInProgress;

///
/// Initializes union class with tag state of "complete".
///
/// Description of the "complete" tag state: The share job has finished. The
/// value is the metadata for the folder.
///
/// @param complete The share job has finished. The value is the metadata for
/// the folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithComplete:(DBSHARINGSharedFolderMetadata *)complete;

///
/// Initializes union class with tag state of "failed".
///
/// @param failed (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithFailed:(DBSHARINGShareFolderError *)failed;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "in_progress".
///
/// @return Whether the union's current tag state has value "in_progress".
///
- (BOOL)isInProgress;

///
/// Retrieves whether the union's current tag state has value "complete".
///
/// @note Call this method and ensure it returns true before accessing the
/// `complete` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "complete".
///
- (BOOL)isComplete;

///
/// Retrieves whether the union's current tag state has value "failed".
///
/// @note Call this method and ensure it returns true before accessing the
/// `failed` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "failed".
///
- (BOOL)isFailed;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBSHARINGShareFolderJobStatus` union.
///
@interface DBSHARINGShareFolderJobStatusSerializer : NSObject

///
/// Serializes `DBSHARINGShareFolderJobStatus` instances.
///
/// @param instance An instance of the `DBSHARINGShareFolderJobStatus` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGShareFolderJobStatus` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBSHARINGShareFolderJobStatus *)instance;

///
/// Deserializes `DBSHARINGShareFolderJobStatus` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGShareFolderJobStatus` API object.
///
/// @return An instantiation of the `DBSHARINGShareFolderJobStatus` object.
///
+ (DBSHARINGShareFolderJobStatus *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
