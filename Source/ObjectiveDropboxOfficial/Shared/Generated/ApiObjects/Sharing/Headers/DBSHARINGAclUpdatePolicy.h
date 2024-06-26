///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGAclUpdatePolicy;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `AclUpdatePolicy` union.
///
/// Who can change a shared folder's access control list (ACL). In other words,
/// who can add, remove, or change the privileges of members.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGAclUpdatePolicy : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBSHARINGAclUpdatePolicyTag` enum type represents the possible tag
/// states with which the `DBSHARINGAclUpdatePolicy` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBSHARINGAclUpdatePolicyTag) {
  /// Only the owner can update the ACL.
  DBSHARINGAclUpdatePolicyOwner,

  /// Any editor can update the ACL. This may be further restricted to editors
  /// on the same team.
  DBSHARINGAclUpdatePolicyEditors,

  /// (no description).
  DBSHARINGAclUpdatePolicyOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBSHARINGAclUpdatePolicyTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "owner".
///
/// Description of the "owner" tag state: Only the owner can update the ACL.
///
/// @return An initialized instance.
///
- (instancetype)initWithOwner;

///
/// Initializes union class with tag state of "editors".
///
/// Description of the "editors" tag state: Any editor can update the ACL. This
/// may be further restricted to editors on the same team.
///
/// @return An initialized instance.
///
- (instancetype)initWithEditors;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "owner".
///
/// @return Whether the union's current tag state has value "owner".
///
- (BOOL)isOwner;

///
/// Retrieves whether the union's current tag state has value "editors".
///
/// @return Whether the union's current tag state has value "editors".
///
- (BOOL)isEditors;

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
/// The serialization class for the `DBSHARINGAclUpdatePolicy` union.
///
@interface DBSHARINGAclUpdatePolicySerializer : NSObject

///
/// Serializes `DBSHARINGAclUpdatePolicy` instances.
///
/// @param instance An instance of the `DBSHARINGAclUpdatePolicy` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGAclUpdatePolicy` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBSHARINGAclUpdatePolicy *)instance;

///
/// Deserializes `DBSHARINGAclUpdatePolicy` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGAclUpdatePolicy` API object.
///
/// @return An instantiation of the `DBSHARINGAclUpdatePolicy` object.
///
+ (DBSHARINGAclUpdatePolicy *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
