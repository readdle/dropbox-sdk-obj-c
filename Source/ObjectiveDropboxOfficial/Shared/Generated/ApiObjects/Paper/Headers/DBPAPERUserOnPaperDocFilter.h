///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBPAPERUserOnPaperDocFilter;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `UserOnPaperDocFilter` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBPAPERUserOnPaperDocFilter : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBPAPERUserOnPaperDocFilterTag` enum type represents the possible tag
/// states with which the `DBPAPERUserOnPaperDocFilter` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBPAPERUserOnPaperDocFilterTag) {
  /// all users who have visited the Paper doc.
  DBPAPERUserOnPaperDocFilterVisited,

  /// All uses who are shared on the Paper doc. This includes all users who
  /// have visited the Paper doc as well as those who have not.
  DBPAPERUserOnPaperDocFilterShared,

  /// (no description).
  DBPAPERUserOnPaperDocFilterOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBPAPERUserOnPaperDocFilterTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "visited".
///
/// Description of the "visited" tag state: all users who have visited the Paper
/// doc.
///
/// @return An initialized instance.
///
- (instancetype)initWithVisited;

///
/// Initializes union class with tag state of "shared".
///
/// Description of the "shared" tag state: All uses who are shared on the Paper
/// doc. This includes all users who have visited the Paper doc as well as those
/// who have not.
///
/// @return An initialized instance.
///
- (instancetype)initWithShared;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "visited".
///
/// @return Whether the union's current tag state has value "visited".
///
- (BOOL)isVisited;

///
/// Retrieves whether the union's current tag state has value "shared".
///
/// @return Whether the union's current tag state has value "shared".
///
- (BOOL)isShared;

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
/// The serialization class for the `DBPAPERUserOnPaperDocFilter` union.
///
@interface DBPAPERUserOnPaperDocFilterSerializer : NSObject

///
/// Serializes `DBPAPERUserOnPaperDocFilter` instances.
///
/// @param instance An instance of the `DBPAPERUserOnPaperDocFilter` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBPAPERUserOnPaperDocFilter` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBPAPERUserOnPaperDocFilter *)instance;

///
/// Deserializes `DBPAPERUserOnPaperDocFilter` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBPAPERUserOnPaperDocFilter` API object.
///
/// @return An instantiation of the `DBPAPERUserOnPaperDocFilter` object.
///
+ (DBPAPERUserOnPaperDocFilter *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
