///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGDesktopDeviceSessionLogInfo;
@class DBTEAMLOGLegacyDeviceSessionLogInfo;
@class DBTEAMLOGLinkedDeviceLogInfo;
@class DBTEAMLOGMobileDeviceSessionLogInfo;
@class DBTEAMLOGWebDeviceSessionLogInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `LinkedDeviceLogInfo` union.
///
/// The device sessions that user is linked to.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGLinkedDeviceLogInfo : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMLOGLinkedDeviceLogInfoTag` enum type represents the possible tag
/// states with which the `DBTEAMLOGLinkedDeviceLogInfo` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBTEAMLOGLinkedDeviceLogInfoTag){
    /// mobile device session's details.
    DBTEAMLOGLinkedDeviceLogInfoMobileDeviceSession,

    /// desktop device session's details.
    DBTEAMLOGLinkedDeviceLogInfoDesktopDeviceSession,

    /// web device session's details.
    DBTEAMLOGLinkedDeviceLogInfoWebDeviceSession,

    /// legacy device session's details.
    DBTEAMLOGLinkedDeviceLogInfoLegacyDeviceSession,

    /// (no description).
    DBTEAMLOGLinkedDeviceLogInfoOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMLOGLinkedDeviceLogInfoTag tag;

/// mobile device session's details. @note Ensure the `isMobileDeviceSession`
/// method returns true before accessing, otherwise a runtime exception will be
/// raised.
@property (nonatomic, readonly) DBTEAMLOGMobileDeviceSessionLogInfo *mobileDeviceSession;

/// desktop device session's details. @note Ensure the `isDesktopDeviceSession`
/// method returns true before accessing, otherwise a runtime exception will be
/// raised.
@property (nonatomic, readonly) DBTEAMLOGDesktopDeviceSessionLogInfo *desktopDeviceSession;

/// web device session's details. @note Ensure the `isWebDeviceSession` method
/// returns true before accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBTEAMLOGWebDeviceSessionLogInfo *webDeviceSession;

/// legacy device session's details. @note Ensure the `isLegacyDeviceSession`
/// method returns true before accessing, otherwise a runtime exception will be
/// raised.
@property (nonatomic, readonly) DBTEAMLOGLegacyDeviceSessionLogInfo *legacyDeviceSession;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "mobile_device_session".
///
/// Description of the "mobile_device_session" tag state: mobile device
/// session's details.
///
/// @param mobileDeviceSession mobile device session's details.
///
/// @return An initialized instance.
///
- (instancetype)initWithMobileDeviceSession:(DBTEAMLOGMobileDeviceSessionLogInfo *)mobileDeviceSession;

///
/// Initializes union class with tag state of "desktop_device_session".
///
/// Description of the "desktop_device_session" tag state: desktop device
/// session's details.
///
/// @param desktopDeviceSession desktop device session's details.
///
/// @return An initialized instance.
///
- (instancetype)initWithDesktopDeviceSession:(DBTEAMLOGDesktopDeviceSessionLogInfo *)desktopDeviceSession;

///
/// Initializes union class with tag state of "web_device_session".
///
/// Description of the "web_device_session" tag state: web device session's
/// details.
///
/// @param webDeviceSession web device session's details.
///
/// @return An initialized instance.
///
- (instancetype)initWithWebDeviceSession:(DBTEAMLOGWebDeviceSessionLogInfo *)webDeviceSession;

///
/// Initializes union class with tag state of "legacy_device_session".
///
/// Description of the "legacy_device_session" tag state: legacy device
/// session's details.
///
/// @param legacyDeviceSession legacy device session's details.
///
/// @return An initialized instance.
///
- (instancetype)initWithLegacyDeviceSession:(DBTEAMLOGLegacyDeviceSessionLogInfo *)legacyDeviceSession;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value
/// "mobile_device_session".
///
/// @note Call this method and ensure it returns true before accessing the
/// `mobileDeviceSession` property, otherwise a runtime exception will be
/// thrown.
///
/// @return Whether the union's current tag state has value
/// "mobile_device_session".
///
- (BOOL)isMobileDeviceSession;

///
/// Retrieves whether the union's current tag state has value
/// "desktop_device_session".
///
/// @note Call this method and ensure it returns true before accessing the
/// `desktopDeviceSession` property, otherwise a runtime exception will be
/// thrown.
///
/// @return Whether the union's current tag state has value
/// "desktop_device_session".
///
- (BOOL)isDesktopDeviceSession;

///
/// Retrieves whether the union's current tag state has value
/// "web_device_session".
///
/// @note Call this method and ensure it returns true before accessing the
/// `webDeviceSession` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value
/// "web_device_session".
///
- (BOOL)isWebDeviceSession;

///
/// Retrieves whether the union's current tag state has value
/// "legacy_device_session".
///
/// @note Call this method and ensure it returns true before accessing the
/// `legacyDeviceSession` property, otherwise a runtime exception will be
/// thrown.
///
/// @return Whether the union's current tag state has value
/// "legacy_device_session".
///
- (BOOL)isLegacyDeviceSession;

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
/// The serialization class for the `DBTEAMLOGLinkedDeviceLogInfo` union.
///
@interface DBTEAMLOGLinkedDeviceLogInfoSerializer : NSObject

///
/// Serializes `DBTEAMLOGLinkedDeviceLogInfo` instances.
///
/// @param instance An instance of the `DBTEAMLOGLinkedDeviceLogInfo` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGLinkedDeviceLogInfo` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGLinkedDeviceLogInfo *)instance;

///
/// Deserializes `DBTEAMLOGLinkedDeviceLogInfo` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGLinkedDeviceLogInfo` API object.
///
/// @return An instantiation of the `DBTEAMLOGLinkedDeviceLogInfo` object.
///
+ (DBTEAMLOGLinkedDeviceLogInfo *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END