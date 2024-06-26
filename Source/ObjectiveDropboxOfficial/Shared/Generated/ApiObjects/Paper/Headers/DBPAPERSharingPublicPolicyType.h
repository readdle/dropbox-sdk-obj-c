///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBPAPERSharingPublicPolicyType;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SharingPublicPolicyType` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBPAPERSharingPublicPolicyType : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBPAPERSharingPublicPolicyTypeTag` enum type represents the possible
/// tag states with which the `DBPAPERSharingPublicPolicyType` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBPAPERSharingPublicPolicyTypeTag) {
  /// Users who have a link to this doc can edit it.
  DBPAPERSharingPublicPolicyTypePeopleWithLinkCanEdit,

  /// Users who have a link to this doc can view and comment on it.
  DBPAPERSharingPublicPolicyTypePeopleWithLinkCanViewAndComment,

  /// Users must be explicitly invited to this doc.
  DBPAPERSharingPublicPolicyTypeInviteOnly,

  /// Value used to indicate that doc sharing is enabled only within team.
  DBPAPERSharingPublicPolicyTypeDisabled,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBPAPERSharingPublicPolicyTypeTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "people_with_link_can_edit".
///
/// Description of the "people_with_link_can_edit" tag state: Users who have a
/// link to this doc can edit it.
///
/// @return An initialized instance.
///
- (instancetype)initWithPeopleWithLinkCanEdit;

///
/// Initializes union class with tag state of
/// "people_with_link_can_view_and_comment".
///
/// Description of the "people_with_link_can_view_and_comment" tag state: Users
/// who have a link to this doc can view and comment on it.
///
/// @return An initialized instance.
///
- (instancetype)initWithPeopleWithLinkCanViewAndComment;

///
/// Initializes union class with tag state of "invite_only".
///
/// Description of the "invite_only" tag state: Users must be explicitly invited
/// to this doc.
///
/// @return An initialized instance.
///
- (instancetype)initWithInviteOnly;

///
/// Initializes union class with tag state of "disabled".
///
/// Description of the "disabled" tag state: Value used to indicate that doc
/// sharing is enabled only within team.
///
/// @return An initialized instance.
///
- (instancetype)initWithDisabled;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value
/// "people_with_link_can_edit".
///
/// @return Whether the union's current tag state has value
/// "people_with_link_can_edit".
///
- (BOOL)isPeopleWithLinkCanEdit;

///
/// Retrieves whether the union's current tag state has value
/// "people_with_link_can_view_and_comment".
///
/// @return Whether the union's current tag state has value
/// "people_with_link_can_view_and_comment".
///
- (BOOL)isPeopleWithLinkCanViewAndComment;

///
/// Retrieves whether the union's current tag state has value "invite_only".
///
/// @return Whether the union's current tag state has value "invite_only".
///
- (BOOL)isInviteOnly;

///
/// Retrieves whether the union's current tag state has value "disabled".
///
/// @return Whether the union's current tag state has value "disabled".
///
- (BOOL)isDisabled;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBPAPERSharingPublicPolicyType` union.
///
@interface DBPAPERSharingPublicPolicyTypeSerializer : NSObject

///
/// Serializes `DBPAPERSharingPublicPolicyType` instances.
///
/// @param instance An instance of the `DBPAPERSharingPublicPolicyType` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBPAPERSharingPublicPolicyType` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBPAPERSharingPublicPolicyType *)instance;

///
/// Deserializes `DBPAPERSharingPublicPolicyType` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBPAPERSharingPublicPolicyType` API object.
///
/// @return An instantiation of the `DBPAPERSharingPublicPolicyType` object.
///
+ (DBPAPERSharingPublicPolicyType *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
