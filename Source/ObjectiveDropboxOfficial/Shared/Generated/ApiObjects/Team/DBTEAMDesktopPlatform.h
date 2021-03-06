///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMDesktopPlatform;

#pragma mark - API Object

///
/// The `DesktopPlatform` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMDesktopPlatform : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The `DBTEAMDesktopPlatformTag` enum type represents the possible tag states
/// with which the `DBTEAMDesktopPlatform` union can exist.
typedef NS_ENUM(NSInteger, DBTEAMDesktopPlatformTag) {
  /// Official Windows Dropbox desktop client
  DBTEAMDesktopPlatformWindows,

  /// Official Mac Dropbox desktop client
  DBTEAMDesktopPlatformMac,

  /// Official Linux Dropbox desktop client
  DBTEAMDesktopPlatformLinux,

  /// (no description).
  DBTEAMDesktopPlatformOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMDesktopPlatformTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "windows".
///
/// Description of the "windows" tag state: Official Windows Dropbox desktop
/// client
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithWindows;

///
/// Initializes union class with tag state of "mac".
///
/// Description of the "mac" tag state: Official Mac Dropbox desktop client
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithMac;

///
/// Initializes union class with tag state of "linux".
///
/// Description of the "linux" tag state: Official Linux Dropbox desktop client
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithLinux;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithOther;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "windows".
///
/// @return Whether the union's current tag state has value "windows".
///
- (BOOL)isWindows;

///
/// Retrieves whether the union's current tag state has value "mac".
///
/// @return Whether the union's current tag state has value "mac".
///
- (BOOL)isMac;

///
/// Retrieves whether the union's current tag state has value "linux".
///
/// @return Whether the union's current tag state has value "linux".
///
- (BOOL)isLinux;

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
/// The serialization class for the `DBTEAMDesktopPlatform` union.
///
@interface DBTEAMDesktopPlatformSerializer : NSObject

///
/// Serializes `DBTEAMDesktopPlatform` instances.
///
/// @param instance An instance of the `DBTEAMDesktopPlatform` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMDesktopPlatform` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBTEAMDesktopPlatform * _Nonnull)instance;

///
/// Deserializes `DBTEAMDesktopPlatform` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMDesktopPlatform` API object.
///
/// @return An instantiation of the `DBTEAMDesktopPlatform` object.
///
+ (DBTEAMDesktopPlatform * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
