///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILEPROPERTIESTemplateFilterBase;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `TemplateFilterBase` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILEPROPERTIESTemplateFilterBase : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBFILEPROPERTIESTemplateFilterBaseTag` enum type represents the
/// possible tag states with which the `DBFILEPROPERTIESTemplateFilterBase`
/// union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBFILEPROPERTIESTemplateFilterBaseTag) {
  /// Only templates with an ID in the supplied list will be returned (a
  /// subset of templates will be returned).
  DBFILEPROPERTIESTemplateFilterBaseFilterSome,

  /// (no description).
  DBFILEPROPERTIESTemplateFilterBaseOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBFILEPROPERTIESTemplateFilterBaseTag tag;

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
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBFILEPROPERTIESTemplateFilterBase` union.
///
@interface DBFILEPROPERTIESTemplateFilterBaseSerializer : NSObject

///
/// Serializes `DBFILEPROPERTIESTemplateFilterBase` instances.
///
/// @param instance An instance of the `DBFILEPROPERTIESTemplateFilterBase` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILEPROPERTIESTemplateFilterBase` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILEPROPERTIESTemplateFilterBase *)instance;

///
/// Deserializes `DBFILEPROPERTIESTemplateFilterBase` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILEPROPERTIESTemplateFilterBase` API object.
///
/// @return An instantiation of the `DBFILEPROPERTIESTemplateFilterBase` object.
///
+ (DBFILEPROPERTIESTemplateFilterBase *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
