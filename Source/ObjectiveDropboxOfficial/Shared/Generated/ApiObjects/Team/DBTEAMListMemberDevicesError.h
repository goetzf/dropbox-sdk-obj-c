///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMListMemberDevicesError;

#pragma mark - API Object

///
/// The `ListMemberDevicesError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMListMemberDevicesError : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The `DBTEAMListMemberDevicesErrorTag` enum type represents the possible tag
/// states with which the `DBTEAMListMemberDevicesError` union can exist.
typedef NS_ENUM(NSInteger, DBTEAMListMemberDevicesErrorTag) {
  /// Member not found.
  DBTEAMListMemberDevicesErrorMemberNotFound,

  /// (no description).
  DBTEAMListMemberDevicesErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMListMemberDevicesErrorTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "member_not_found".
///
/// Description of the "member_not_found" tag state: Member not found.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithMemberNotFound;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithOther;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value
/// "member_not_found".
///
/// @return Whether the union's current tag state has value "member_not_found".
///
- (BOOL)isMemberNotFound;

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
- (NSString * _Nonnull)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBTEAMListMemberDevicesError` union.
///
@interface DBTEAMListMemberDevicesErrorSerializer : NSObject

///
/// Serializes `DBTEAMListMemberDevicesError` instances.
///
/// @param instance An instance of the `DBTEAMListMemberDevicesError` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMListMemberDevicesError` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBTEAMListMemberDevicesError * _Nonnull)instance;

///
/// Deserializes `DBTEAMListMemberDevicesError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMListMemberDevicesError` API object.
///
/// @return An instantiation of the `DBTEAMListMemberDevicesError` object.
///
+ (DBTEAMListMemberDevicesError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
