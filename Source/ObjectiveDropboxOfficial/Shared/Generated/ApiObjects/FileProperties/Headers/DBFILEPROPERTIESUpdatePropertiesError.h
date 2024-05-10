///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILEPROPERTIESLookUpPropertiesError;
@class DBFILEPROPERTIESLookupError;
@class DBFILEPROPERTIESUpdatePropertiesError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `UpdatePropertiesError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILEPROPERTIESUpdatePropertiesError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBFILEPROPERTIESUpdatePropertiesErrorTag` enum type represents the
/// possible tag states with which the `DBFILEPROPERTIESUpdatePropertiesError`
/// union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBFILEPROPERTIESUpdatePropertiesErrorTag) {
  /// Template does not exist for the given identifier.
  DBFILEPROPERTIESUpdatePropertiesErrorTemplateNotFound,

  /// You do not have permission to modify this template.
  DBFILEPROPERTIESUpdatePropertiesErrorRestrictedContent,

  /// (no description).
  DBFILEPROPERTIESUpdatePropertiesErrorOther,

  /// (no description).
  DBFILEPROPERTIESUpdatePropertiesErrorPath,

  /// This folder cannot be tagged. Tagging folders is not supported for
  /// team-owned templates.
  DBFILEPROPERTIESUpdatePropertiesErrorUnsupportedFolder,

  /// One or more of the supplied property field values is too large.
  DBFILEPROPERTIESUpdatePropertiesErrorPropertyFieldTooLarge,

  /// One or more of the supplied property fields does not conform to the
  /// template specifications.
  DBFILEPROPERTIESUpdatePropertiesErrorDoesNotFitTemplate,

  /// There are 2 or more property groups referring to the same templates in
  /// the input.
  DBFILEPROPERTIESUpdatePropertiesErrorDuplicatePropertyGroups,

  /// (no description).
  DBFILEPROPERTIESUpdatePropertiesErrorPropertyGroupLookup,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBFILEPROPERTIESUpdatePropertiesErrorTag tag;

/// Template does not exist for the given identifier. @note Ensure the
/// `isTemplateNotFound` method returns true before accessing, otherwise a
/// runtime exception will be raised.
@property (nonatomic, readonly, copy) NSString *templateNotFound;

/// (no description). @note Ensure the `isPath` method returns true before
/// accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBFILEPROPERTIESLookupError *path;

/// (no description). @note Ensure the `isPropertyGroupLookup` method returns
/// true before accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBFILEPROPERTIESLookUpPropertiesError *propertyGroupLookup;

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

///
/// Initializes union class with tag state of "property_field_too_large".
///
/// Description of the "property_field_too_large" tag state: One or more of the
/// supplied property field values is too large.
///
/// @return An initialized instance.
///
- (instancetype)initWithPropertyFieldTooLarge;

///
/// Initializes union class with tag state of "does_not_fit_template".
///
/// Description of the "does_not_fit_template" tag state: One or more of the
/// supplied property fields does not conform to the template specifications.
///
/// @return An initialized instance.
///
- (instancetype)initWithDoesNotFitTemplate;

///
/// Initializes union class with tag state of "duplicate_property_groups".
///
/// Description of the "duplicate_property_groups" tag state: There are 2 or
/// more property groups referring to the same templates in the input.
///
/// @return An initialized instance.
///
- (instancetype)initWithDuplicatePropertyGroups;

///
/// Initializes union class with tag state of "property_group_lookup".
///
/// @param propertyGroupLookup (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithPropertyGroupLookup:(DBFILEPROPERTIESLookUpPropertiesError *)propertyGroupLookup;

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
/// Retrieves whether the union's current tag state has value
/// "property_field_too_large".
///
/// @return Whether the union's current tag state has value
/// "property_field_too_large".
///
- (BOOL)isPropertyFieldTooLarge;

///
/// Retrieves whether the union's current tag state has value
/// "does_not_fit_template".
///
/// @return Whether the union's current tag state has value
/// "does_not_fit_template".
///
- (BOOL)isDoesNotFitTemplate;

///
/// Retrieves whether the union's current tag state has value
/// "duplicate_property_groups".
///
/// @return Whether the union's current tag state has value
/// "duplicate_property_groups".
///
- (BOOL)isDuplicatePropertyGroups;

///
/// Retrieves whether the union's current tag state has value
/// "property_group_lookup".
///
/// @note Call this method and ensure it returns true before accessing the
/// `propertyGroupLookup` property, otherwise a runtime exception will be
/// thrown.
///
/// @return Whether the union's current tag state has value
/// "property_group_lookup".
///
- (BOOL)isPropertyGroupLookup;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBFILEPROPERTIESUpdatePropertiesError`
/// union.
///
@interface DBFILEPROPERTIESUpdatePropertiesErrorSerializer : NSObject

///
/// Serializes `DBFILEPROPERTIESUpdatePropertiesError` instances.
///
/// @param instance An instance of the `DBFILEPROPERTIESUpdatePropertiesError`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILEPROPERTIESUpdatePropertiesError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILEPROPERTIESUpdatePropertiesError *)instance;

///
/// Deserializes `DBFILEPROPERTIESUpdatePropertiesError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILEPROPERTIESUpdatePropertiesError` API object.
///
/// @return An instantiation of the `DBFILEPROPERTIESUpdatePropertiesError`
/// object.
///
+ (DBFILEPROPERTIESUpdatePropertiesError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
