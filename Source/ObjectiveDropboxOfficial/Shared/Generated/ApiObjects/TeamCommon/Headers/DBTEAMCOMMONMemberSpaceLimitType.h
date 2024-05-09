///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMCOMMONMemberSpaceLimitType;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `MemberSpaceLimitType` union.
///
/// The type of the space limit imposed on a team member.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMCOMMONMemberSpaceLimitType : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMCOMMONMemberSpaceLimitTypeTag` enum type represents the possible
/// tag states with which the `DBTEAMCOMMONMemberSpaceLimitType` union can
/// exist.
typedef NS_CLOSED_ENUM(NSInteger, DBTEAMCOMMONMemberSpaceLimitTypeTag) {
  /// The team member does not have imposed space limit.
  DBTEAMCOMMONMemberSpaceLimitTypeOff,

  /// The team member has soft imposed space limit - the limit is used for
  /// display and for notifications.
  DBTEAMCOMMONMemberSpaceLimitTypeAlertOnly,

  /// The team member has hard imposed space limit - Dropbox file sync will
  /// stop after the limit is reached.
  DBTEAMCOMMONMemberSpaceLimitTypeStopSync,

  /// (no description).
  DBTEAMCOMMONMemberSpaceLimitTypeOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMCOMMONMemberSpaceLimitTypeTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "off".
///
/// Description of the "off" tag state: The team member does not have imposed
/// space limit.
///
/// @return An initialized instance.
///
- (instancetype)initWithOff;

///
/// Initializes union class with tag state of "alert_only".
///
/// Description of the "alert_only" tag state: The team member has soft imposed
/// space limit - the limit is used for display and for notifications.
///
/// @return An initialized instance.
///
- (instancetype)initWithAlertOnly;

///
/// Initializes union class with tag state of "stop_sync".
///
/// Description of the "stop_sync" tag state: The team member has hard imposed
/// space limit - Dropbox file sync will stop after the limit is reached.
///
/// @return An initialized instance.
///
- (instancetype)initWithStopSync;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "off".
///
/// @return Whether the union's current tag state has value "off".
///
- (BOOL)isOff;

///
/// Retrieves whether the union's current tag state has value "alert_only".
///
/// @return Whether the union's current tag state has value "alert_only".
///
- (BOOL)isAlertOnly;

///
/// Retrieves whether the union's current tag state has value "stop_sync".
///
/// @return Whether the union's current tag state has value "stop_sync".
///
- (BOOL)isStopSync;

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
/// The serialization class for the `DBTEAMCOMMONMemberSpaceLimitType` union.
///
@interface DBTEAMCOMMONMemberSpaceLimitTypeSerializer : NSObject

///
/// Serializes `DBTEAMCOMMONMemberSpaceLimitType` instances.
///
/// @param instance An instance of the `DBTEAMCOMMONMemberSpaceLimitType` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMCOMMONMemberSpaceLimitType` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMCOMMONMemberSpaceLimitType *)instance;

///
/// Deserializes `DBTEAMCOMMONMemberSpaceLimitType` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMCOMMONMemberSpaceLimitType` API object.
///
/// @return An instantiation of the `DBTEAMCOMMONMemberSpaceLimitType` object.
///
+ (DBTEAMCOMMONMemberSpaceLimitType *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
