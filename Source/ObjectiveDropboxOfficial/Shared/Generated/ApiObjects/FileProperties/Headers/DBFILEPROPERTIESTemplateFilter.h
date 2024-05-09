///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILEPROPERTIESTemplateFilter;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `TemplateFilter` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILEPROPERTIESTemplateFilter : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBFILEPROPERTIESTemplateFilterTag` enum type represents the possible
/// tag states with which the `DBFILEPROPERTIESTemplateFilter` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBFILEPROPERTIESTemplateFilterTag) {
  /// Only templates with an ID in the supplied list will be returned (a
  /// subset of templates will be returned).
  DBFILEPROPERTIESTemplateFilterFilterSome,

  /// (no description).
  DBFILEPROPERTIESTemplateFilterOther,

  /// No templates will be filtered from the result (all templates will be
  /// returned).
  DBFILEPROPERTIESTemplateFilterFilterNone,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBFILEPROPERTIESTemplateFilterTag tag;

/// Only templates with an ID in the supplied list will be returned (a subset of
/// templates will be returned). @note Ensure the `isFilterSome` method returns
/// true before accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) NSArray<NSString *> *filterSome;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "filter_some".
///
/// Description of the "filter_some" tag state: Only templates with an ID in the
/// supplied list will be returned (a subset of templates will be returned).
///
/// @param filterSome Only templates with an ID in the supplied list will be
/// returned (a subset of templates will be returned).
///
/// @return An initialized instance.
///
- (instancetype)initWithFilterSome:(NSArray<NSString *> *)filterSome;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

///
/// Initializes union class with tag state of "filter_none".
///
/// Description of the "filter_none" tag state: No templates will be filtered
/// from the result (all templates will be returned).
///
/// @return An initialized instance.
///
- (instancetype)initWithFilterNone;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "filter_some".
///
/// @note Call this method and ensure it returns true before accessing the
/// `filterSome` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "filter_some".
///
- (BOOL)isFilterSome;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves whether the union's current tag state has value "filter_none".
///
/// @return Whether the union's current tag state has value "filter_none".
///
- (BOOL)isFilterNone;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBFILEPROPERTIESTemplateFilter` union.
///
@interface DBFILEPROPERTIESTemplateFilterSerializer : NSObject

///
/// Serializes `DBFILEPROPERTIESTemplateFilter` instances.
///
/// @param instance An instance of the `DBFILEPROPERTIESTemplateFilter` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILEPROPERTIESTemplateFilter` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILEPROPERTIESTemplateFilter *)instance;

///
/// Deserializes `DBFILEPROPERTIESTemplateFilter` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILEPROPERTIESTemplateFilter` API object.
///
/// @return An instantiation of the `DBFILEPROPERTIESTemplateFilter` object.
///
+ (DBFILEPROPERTIESTemplateFilter *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
