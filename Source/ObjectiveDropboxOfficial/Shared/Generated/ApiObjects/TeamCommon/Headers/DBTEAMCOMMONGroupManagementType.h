///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMCOMMONGroupManagementType;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `GroupManagementType` union.
///
/// The group type determines how a group is managed.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMCOMMONGroupManagementType : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMCOMMONGroupManagementTypeTag` enum type represents the possible
/// tag states with which the `DBTEAMCOMMONGroupManagementType` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBTEAMCOMMONGroupManagementTypeTag) {
  /// A group which is managed by selected users.
  DBTEAMCOMMONGroupManagementTypeUserManaged,

  /// A group which is managed by team admins only.
  DBTEAMCOMMONGroupManagementTypeCompanyManaged,

  /// A group which is managed automatically by Dropbox.
  DBTEAMCOMMONGroupManagementTypeSystemManaged,

  /// (no description).
  DBTEAMCOMMONGroupManagementTypeOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMCOMMONGroupManagementTypeTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "user_managed".
///
/// Description of the "user_managed" tag state: A group which is managed by
/// selected users.
///
/// @return An initialized instance.
///
- (instancetype)initWithUserManaged;

///
/// Initializes union class with tag state of "company_managed".
///
/// Description of the "company_managed" tag state: A group which is managed by
/// team admins only.
///
/// @return An initialized instance.
///
- (instancetype)initWithCompanyManaged;

///
/// Initializes union class with tag state of "system_managed".
///
/// Description of the "system_managed" tag state: A group which is managed
/// automatically by Dropbox.
///
/// @return An initialized instance.
///
- (instancetype)initWithSystemManaged;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "user_managed".
///
/// @return Whether the union's current tag state has value "user_managed".
///
- (BOOL)isUserManaged;

///
/// Retrieves whether the union's current tag state has value "company_managed".
///
/// @return Whether the union's current tag state has value "company_managed".
///
- (BOOL)isCompanyManaged;

///
/// Retrieves whether the union's current tag state has value "system_managed".
///
/// @return Whether the union's current tag state has value "system_managed".
///
- (BOOL)isSystemManaged;

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
/// The serialization class for the `DBTEAMCOMMONGroupManagementType` union.
///
@interface DBTEAMCOMMONGroupManagementTypeSerializer : NSObject

///
/// Serializes `DBTEAMCOMMONGroupManagementType` instances.
///
/// @param instance An instance of the `DBTEAMCOMMONGroupManagementType` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMCOMMONGroupManagementType` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMCOMMONGroupManagementType *)instance;

///
/// Deserializes `DBTEAMCOMMONGroupManagementType` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMCOMMONGroupManagementType` API object.
///
/// @return An instantiation of the `DBTEAMCOMMONGroupManagementType` object.
///
+ (DBTEAMCOMMONGroupManagementType *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
