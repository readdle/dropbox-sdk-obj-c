///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBPAPERPaperDocPermissionLevel;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `PaperDocPermissionLevel` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBPAPERPaperDocPermissionLevel : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBPAPERPaperDocPermissionLevelTag` enum type represents the possible
/// tag states with which the `DBPAPERPaperDocPermissionLevel` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBPAPERPaperDocPermissionLevelTag) {
  /// User will be granted edit permissions.
  DBPAPERPaperDocPermissionLevelEdit,

  /// User will be granted view and comment permissions.
  DBPAPERPaperDocPermissionLevelViewAndComment,

  /// (no description).
  DBPAPERPaperDocPermissionLevelOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBPAPERPaperDocPermissionLevelTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "edit".
///
/// Description of the "edit" tag state: User will be granted edit permissions.
///
/// @return An initialized instance.
///
- (instancetype)initWithEdit;

///
/// Initializes union class with tag state of "view_and_comment".
///
/// Description of the "view_and_comment" tag state: User will be granted view
/// and comment permissions.
///
/// @return An initialized instance.
///
- (instancetype)initWithViewAndComment;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "edit".
///
/// @return Whether the union's current tag state has value "edit".
///
- (BOOL)isEdit;

///
/// Retrieves whether the union's current tag state has value
/// "view_and_comment".
///
/// @return Whether the union's current tag state has value "view_and_comment".
///
- (BOOL)isViewAndComment;

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
/// The serialization class for the `DBPAPERPaperDocPermissionLevel` union.
///
@interface DBPAPERPaperDocPermissionLevelSerializer : NSObject

///
/// Serializes `DBPAPERPaperDocPermissionLevel` instances.
///
/// @param instance An instance of the `DBPAPERPaperDocPermissionLevel` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBPAPERPaperDocPermissionLevel` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBPAPERPaperDocPermissionLevel *)instance;

///
/// Deserializes `DBPAPERPaperDocPermissionLevel` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBPAPERPaperDocPermissionLevel` API object.
///
/// @return An instantiation of the `DBPAPERPaperDocPermissionLevel` object.
///
+ (DBPAPERPaperDocPermissionLevel *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
