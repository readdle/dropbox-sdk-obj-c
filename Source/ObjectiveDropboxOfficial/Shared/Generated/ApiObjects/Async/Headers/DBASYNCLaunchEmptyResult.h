///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBASYNCLaunchEmptyResult;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `LaunchEmptyResult` union.
///
/// Result returned by methods that may either launch an asynchronous job or
/// complete synchronously. Upon synchronous completion of the job, no
/// additional information is returned.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBASYNCLaunchEmptyResult : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBASYNCLaunchEmptyResultTag` enum type represents the possible tag
/// states with which the `DBASYNCLaunchEmptyResult` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBASYNCLaunchEmptyResultTag) {
  /// This response indicates that the processing is asynchronous. The string
  /// is an id that can be used to obtain the status of the asynchronous job.
  DBASYNCLaunchEmptyResultAsyncJobId,

  /// The job finished synchronously and successfully.
  DBASYNCLaunchEmptyResultComplete,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBASYNCLaunchEmptyResultTag tag;

/// This response indicates that the processing is asynchronous. The string is
/// an id that can be used to obtain the status of the asynchronous job. @note
/// Ensure the `isAsyncJobId` method returns true before accessing, otherwise a
/// runtime exception will be raised.
@property (nonatomic, readonly, copy) NSString *asyncJobId;

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
/// Description of the "complete" tag state: The job finished synchronously and
/// successfully.
///
/// @return An initialized instance.
///
- (instancetype)initWithComplete;

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
/// The serialization class for the `DBASYNCLaunchEmptyResult` union.
///
@interface DBASYNCLaunchEmptyResultSerializer : NSObject

///
/// Serializes `DBASYNCLaunchEmptyResult` instances.
///
/// @param instance An instance of the `DBASYNCLaunchEmptyResult` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBASYNCLaunchEmptyResult` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBASYNCLaunchEmptyResult *)instance;

///
/// Deserializes `DBASYNCLaunchEmptyResult` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBASYNCLaunchEmptyResult` API object.
///
/// @return An instantiation of the `DBASYNCLaunchEmptyResult` object.
///
+ (DBASYNCLaunchEmptyResult *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
