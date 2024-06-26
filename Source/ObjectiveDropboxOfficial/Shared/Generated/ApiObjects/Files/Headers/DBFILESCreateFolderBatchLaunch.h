///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILESCreateFolderBatchLaunch;
@class DBFILESCreateFolderBatchResult;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `CreateFolderBatchLaunch` union.
///
/// Result returned by `createFolderBatch` that may either launch an
/// asynchronous job or complete synchronously.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESCreateFolderBatchLaunch : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBFILESCreateFolderBatchLaunchTag` enum type represents the possible
/// tag states with which the `DBFILESCreateFolderBatchLaunch` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBFILESCreateFolderBatchLaunchTag) {
  /// This response indicates that the processing is asynchronous. The string
  /// is an id that can be used to obtain the status of the asynchronous job.
  DBFILESCreateFolderBatchLaunchAsyncJobId,

  /// (no description).
  DBFILESCreateFolderBatchLaunchComplete,

  /// (no description).
  DBFILESCreateFolderBatchLaunchOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBFILESCreateFolderBatchLaunchTag tag;

/// This response indicates that the processing is asynchronous. The string is
/// an id that can be used to obtain the status of the asynchronous job. @note
/// Ensure the `isAsyncJobId` method returns true before accessing, otherwise a
/// runtime exception will be raised.
@property (nonatomic, readonly, copy) NSString *asyncJobId;

/// (no description). @note Ensure the `isComplete` method returns true before
/// accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBFILESCreateFolderBatchResult *complete;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "async_job_id".
///
/// Description of the "async_job_id" tag state: This response indicates that
/// the processing is asynchronous. The string is an id that can be used to
/// obtain the status of the asynchronous job.
///
/// @param asyncJobId This response indicates that the processing is
/// asynchronous. The string is an id that can be used to obtain the status of
/// the asynchronous job.
///
/// @return An initialized instance.
///
- (instancetype)initWithAsyncJobId:(NSString *)asyncJobId;

///
/// Initializes union class with tag state of "complete".
///
/// @param complete (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithComplete:(DBFILESCreateFolderBatchResult *)complete;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "async_job_id".
///
/// @note Call this method and ensure it returns true before accessing the
/// `asyncJobId` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "async_job_id".
///
- (BOOL)isAsyncJobId;

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
/// The serialization class for the `DBFILESCreateFolderBatchLaunch` union.
///
@interface DBFILESCreateFolderBatchLaunchSerializer : NSObject

///
/// Serializes `DBFILESCreateFolderBatchLaunch` instances.
///
/// @param instance An instance of the `DBFILESCreateFolderBatchLaunch` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESCreateFolderBatchLaunch` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILESCreateFolderBatchLaunch *)instance;

///
/// Deserializes `DBFILESCreateFolderBatchLaunch` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESCreateFolderBatchLaunch` API object.
///
/// @return An instantiation of the `DBFILESCreateFolderBatchLaunch` object.
///
+ (DBFILESCreateFolderBatchLaunch *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
