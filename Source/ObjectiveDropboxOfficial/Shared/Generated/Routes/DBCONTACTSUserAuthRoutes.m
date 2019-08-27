///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBCONTACTSUserAuthRoutes.h"
#import "DBCONTACTSDeleteManualContactsArg.h"
#import "DBCONTACTSDeleteManualContactsError.h"
#import "DBCONTACTSRouteObjects.h"
#import "DBRequestErrors.h"
#import "DBStoneBase.h"
#import "DBTransportClientProtocol.h"

@implementation DBCONTACTSUserAuthRoutes

- (instancetype)init:(id<DBTransportClient>)client {
  self = [super init];
  if (self) {
    _client = client;
  }
  return self;
}

- (DBRpcTask *)deleteManualContacts {
  DBRoute *route = DBCONTACTSRouteObjects.DBCONTACTSDeleteManualContacts;
  return [self.client requestRpc:route arg:nil];
}

- (DBRpcTask *)deleteManualContactsBatch:(NSArray<NSString *> *)emailAddresses {
  DBRoute *route = DBCONTACTSRouteObjects.DBCONTACTSDeleteManualContactsBatch;
  DBCONTACTSDeleteManualContactsArg *arg =
      [[DBCONTACTSDeleteManualContactsArg alloc] initWithEmailAddresses:emailAddresses];
  return [self.client requestRpc:route arg:arg];
}

@end
