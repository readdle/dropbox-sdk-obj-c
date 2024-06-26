///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILEPROPERTIESLookupError;
@class DBFILEPROPERTIESPropertiesError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `PropertiesError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILEPROPERTIESPropertiesError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBFILEPROPERTIESPropertiesErrorTag` enum type represents the possible
/// tag states with which the `DBFILEPROPERTIESPropertiesError` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBFILEPROPERTIESPropertiesErrorTag) {
  /// Template does not exist for the given identifier.
  DBFILEPROPERTIESPropertiesErrorTemplateNotFound,

  /// You do not have permission to modify this template.
  DBFILEPROPERTIESPropertiesErrorRestrictedContent,

  /// (no description).
  DBFILEPROPERTIESPropertiesErrorOther,

  /// (no description).
  DBFILEPROPERTIESPropertiesErrorPath,

  /// This folder cannot be tagged. Tagging folders is not supported for
  /// team-owned templates.
  DBFILEPROPERTIESPropertiesErrorUnsupportedFolder,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBFILEPROPERTIESPropertiesErrorTag tag;

/// Template does not exist for the given identifier. @note Ensure the
/// `isTemplateNotFound` method returns true before accessing, otherwise a
/// runtime exception will be raised.
@property (nonatomic, readonly, copy) NSString *templateNotFound;

/// (no description). @note Ensure the `isPath` method returns true before
/// accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBFILEPROPERTIESLookupError *path;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "template_not_found".
///
/// Description of the "template_not_found" tag state: Template does not exist
/// for the given identifier.
///
/// @param templateNotFound Template does not exist for the given identifier.
///
/// @return An initialized instance.
///
- (instancetype)initWithTemplateNotFound:(NSString *)templateNotFound;

///
/// Initializes union class with tag state of "restricted_content".
///
/// Description of the "restricted_content" tag state: You do not have
/// permission to modify this template.
///
/// @return An initialized instance.
///
- (instancetype)initWithRestrictedContent;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

///
/// Initializes union class with tag state of "path".
///
/// @param path (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithPath:(DBFILEPROPERTIESLookupError *)path;

///
/// Initializes union class with tag state of "unsupported_folder".
///
/// Description of the "unsupported_folder" tag state: This folder cannot be
/// tagged. Tagging folders is not supported for team-owned templates.
///
/// @return An initialized instance.
///
- (instancetype)initWithUnsupportedFolder;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value
/// "template_not_found".
///
/// @note Call this method and ensure it returns true before accessing the
/// `templateNotFound` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value
/// "template_not_found".
///
- (BOOL)isTemplateNotFound;

///
/// Retrieves whether the union's current tag state has value
/// "restricted_content".
///
/// @return Whether the union's current tag state has value
/// "restricted_content".
///
- (BOOL)isRestrictedContent;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves whether the union's current tag state has value "path".
///
/// @note Call this method and ensure it returns true before accessing the
/// `path` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "path".
///
- (BOOL)isPath;

///
/// Retrieves whether the union's current tag state has value
/// "unsupported_folder".
///
/// @return Whether the union's current tag state has value
/// "unsupported_folder".
///
- (BOOL)isUnsupportedFolder;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBFILEPROPERTIESPropertiesError` union.
///
@interface DBFILEPROPERTIESPropertiesErrorSerializer : NSObject

///
/// Serializes `DBFILEPROPERTIESPropertiesError` instances.
///
/// @param instance An instance of the `DBFILEPROPERTIESPropertiesError` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILEPROPERTIESPropertiesError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILEPROPERTIESPropertiesError *)instance;

///
/// Deserializes `DBFILEPROPERTIESPropertiesError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILEPROPERTIESPropertiesError` API object.
///
/// @return An instantiation of the `DBFILEPROPERTIESPropertiesError` object.
///
+ (DBFILEPROPERTIESPropertiesError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
