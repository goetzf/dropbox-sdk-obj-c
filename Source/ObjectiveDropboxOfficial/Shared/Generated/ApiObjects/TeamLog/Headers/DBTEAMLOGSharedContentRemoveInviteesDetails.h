///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGSharedContentRemoveInviteesDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SharedContentRemoveInviteesDetails` struct.
///
/// Removed invitee from shared file/folder before invite was accepted.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGSharedContentRemoveInviteesDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// A list of invitees.
@property (nonatomic, readonly) NSArray<NSString *> *invitees;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param invitees A list of invitees.
///
/// @return An initialized instance.
///
- (instancetype)initWithInvitees:(NSArray<NSString *> *)invitees;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SharedContentRemoveInviteesDetails` struct.
///
@interface DBTEAMLOGSharedContentRemoveInviteesDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGSharedContentRemoveInviteesDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGSharedContentRemoveInviteesDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedContentRemoveInviteesDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGSharedContentRemoveInviteesDetails *)instance;

///
/// Deserializes `DBTEAMLOGSharedContentRemoveInviteesDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedContentRemoveInviteesDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGSharedContentRemoveInviteesDetails` object.
///
+ (DBTEAMLOGSharedContentRemoveInviteesDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
