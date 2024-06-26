///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILESUploadSessionFinishBatchJobStatus;
@class DBFILESUploadSessionFinishBatchResult;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `UploadSessionFinishBatchJobStatus` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESUploadSessionFinishBatchJobStatus : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBFILESUploadSessionFinishBatchJobStatusTag` enum type represents the
/// possible tag states with which the
/// `DBFILESUploadSessionFinishBatchJobStatus` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBFILESUploadSessionFinishBatchJobStatusTag) {
  /// The asynchronous job is still in progress.
  DBFILESUploadSessionFinishBatchJobStatusInProgress,

  /// The `uploadSessionFinishBatch` has finished.
  DBFILESUploadSessionFinishBatchJobStatusComplete,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBFILESUploadSessionFinishBatchJobStatusTag tag;

/// The `uploadSessionFinishBatch` has finished. @note Ensure the `isComplete`
/// method returns true before accessing, otherwise a runtime exception will be
/// raised.
@property (nonatomic, readonly) DBFILESUploadSessionFinishBatchResult *complete;

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
/// Description of the "complete" tag state: The `uploadSessionFinishBatch` has
/// finished.
///
/// @param complete The `uploadSessionFinishBatch` has finished.
///
/// @return An initialized instance.
///
- (instancetype)initWithComplete:(DBFILESUploadSessionFinishBatchResult *)complete;

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
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBFILESUploadSessionFinishBatchJobStatus`
/// union.
///
@interface DBFILESUploadSessionFinishBatchJobStatusSerializer : NSObject

///
/// Serializes `DBFILESUploadSessionFinishBatchJobStatus` instances.
///
/// @param instance An instance of the
/// `DBFILESUploadSessionFinishBatchJobStatus` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESUploadSessionFinishBatchJobStatus` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILESUploadSessionFinishBatchJobStatus *)instance;

///
/// Deserializes `DBFILESUploadSessionFinishBatchJobStatus` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESUploadSessionFinishBatchJobStatus` API object.
///
/// @return An instantiation of the `DBFILESUploadSessionFinishBatchJobStatus`
/// object.
///
+ (DBFILESUploadSessionFinishBatchJobStatus *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
