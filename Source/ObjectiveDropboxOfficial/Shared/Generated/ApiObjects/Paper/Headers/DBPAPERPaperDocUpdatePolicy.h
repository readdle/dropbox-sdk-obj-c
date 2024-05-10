///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBPAPERPaperDocUpdatePolicy;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `PaperDocUpdatePolicy` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBPAPERPaperDocUpdatePolicy : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBPAPERPaperDocUpdatePolicyTag` enum type represents the possible tag
/// states with which the `DBPAPERPaperDocUpdatePolicy` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBPAPERPaperDocUpdatePolicyTag) {
  /// The content will be appended to the doc.
  DBPAPERPaperDocUpdatePolicyAppend,

  /// The content will be prepended to the doc. The doc title will not be
  /// affected.
  DBPAPERPaperDocUpdatePolicyPrepend,

  /// The document will be overwitten at the head with the provided content.
  DBPAPERPaperDocUpdatePolicyOverwriteAll,

  /// (no description).
  DBPAPERPaperDocUpdatePolicyOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBPAPERPaperDocUpdatePolicyTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "append".
///
/// Description of the "append" tag state: The content will be appended to the
/// doc.
///
/// @return An initialized instance.
///
- (instancetype)initWithAppend;

///
/// Initializes union class with tag state of "prepend".
///
/// Description of the "prepend" tag state: The content will be prepended to the
/// doc. The doc title will not be affected.
///
/// @return An initialized instance.
///
- (instancetype)initWithPrepend;

///
/// Initializes union class with tag state of "overwrite_all".
///
/// Description of the "overwrite_all" tag state: The document will be
/// overwitten at the head with the provided content.
///
/// @return An initialized instance.
///
- (instancetype)initWithOverwriteAll;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "append".
///
/// @return Whether the union's current tag state has value "append".
///
- (BOOL)isAppend;

///
/// Retrieves whether the union's current tag state has value "prepend".
///
/// @return Whether the union's current tag state has value "prepend".
///
- (BOOL)isPrepend;

///
/// Retrieves whether the union's current tag state has value "overwrite_all".
///
/// @return Whether the union's current tag state has value "overwrite_all".
///
- (BOOL)isOverwriteAll;

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
/// The serialization class for the `DBPAPERPaperDocUpdatePolicy` union.
///
@interface DBPAPERPaperDocUpdatePolicySerializer : NSObject

///
/// Serializes `DBPAPERPaperDocUpdatePolicy` instances.
///
/// @param instance An instance of the `DBPAPERPaperDocUpdatePolicy` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBPAPERPaperDocUpdatePolicy` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBPAPERPaperDocUpdatePolicy *)instance;

///
/// Deserializes `DBPAPERPaperDocUpdatePolicy` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBPAPERPaperDocUpdatePolicy` API object.
///
/// @return An instantiation of the `DBPAPERPaperDocUpdatePolicy` object.
///
+ (DBPAPERPaperDocUpdatePolicy *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
