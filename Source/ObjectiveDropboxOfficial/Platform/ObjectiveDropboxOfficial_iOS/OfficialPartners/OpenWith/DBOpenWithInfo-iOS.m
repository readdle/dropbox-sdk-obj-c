///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///

#import "DBOpenWithInfo-iOS.h"

///
/// @note This logic is for official Dropbox partners only, and should not need
/// to be used by other third-party apps.
///
@implementation DBOpenWithInfo

static NSString *kStorageKeyPrefix = @"dbxOpenWith";

- (id)initWithUserId:(NSString *)userId
                 rev:(NSString *)rev
                path:(NSString *)path
        modifiedTime:(NSDate *)modifiedTime
            readOnly:(BOOL)readOnly
                verb:(NSString *)verb
           sessionId:(NSString *)sessionId
              fileId:(NSString *)fileId
            fileData:(NSData *)fileData
           sourceApp:(NSString *)sourceApp {
  NSAssert(userId && rev && path && verb, @"Not enough data supplied.");
  if ((self = [super init])) {
    _userId = userId;
    _rev = rev;
    _path = path;
    _modifiedTime = modifiedTime;
    _readOnly = readOnly;
    _verb = verb;
    _sessionId = sessionId;
    _fileId = fileId;
    _fileData = fileData;
    _sourceApp = sourceApp;
  }
  return self;
}

+ (DBOpenWithInfo *)popFromStorageForSession:(NSString *)sessionId {
  NSString *fullKey = [DBOpenWithInfo getStorageKeyFromSession:sessionId];
  NSData *data = [[NSUserDefaults standardUserDefaults] objectForKey:fullKey];
  // nil check because NSUserDefaults can get reset when the device is locked
  if (data == nil) {
    return nil;
  }
  [[NSUserDefaults standardUserDefaults] removeObjectForKey:fullKey];
  [[NSUserDefaults standardUserDefaults] synchronize];
  return [NSKeyedUnarchiver unarchivedObjectOfClass:DBOpenWithInfo.class fromData:data error:nil];
}

- (void)writeToStorageForSession:(NSString *)sessionId {
  NSData *data = [NSKeyedArchiver archivedDataWithRootObject:self requiringSecureCoding:NO error:nil];
  [[NSUserDefaults standardUserDefaults] setObject:data forKey:[DBOpenWithInfo getStorageKeyFromSession:sessionId]];
  [[NSUserDefaults standardUserDefaults] synchronize];
}

#pragma mark - conforming to NSCoding protocol

- (id)initWithCoder:(NSCoder *)decoder {
  if (self = [super init]) {
    _userId = [decoder decodeObjectOfClass:NSString.class forKey:@"userId"];
    _rev = [decoder decodeObjectOfClass:NSString.class forKey:@"rev"];
    _path = [decoder decodeObjectOfClass:NSString.class forKey:@"path"];
    _modifiedTime = [decoder decodeObjectOfClass:NSDate.class forKey:@"modifiedTime"];
    _readOnly = [decoder decodeBoolForKey:@"readOnly"];
    _verb = [decoder decodeObjectOfClass:NSString.class forKey:@"verb"];
    _sessionId = [decoder decodeObjectOfClass:NSString.class forKey:@"sessionId"];
    _fileId = [decoder decodeObjectOfClass:NSString.class forKey:@"fileId"];
    // fileData is excluded
    _sourceApp = [decoder decodeObjectOfClass:NSString.class forKey:@"sourceApp"];
  }
  return self;
}

- (void)encodeWithCoder:(NSCoder *)encoder {
  [encoder encodeObject:_userId forKey:@"userId"];
  [encoder encodeObject:_rev forKey:@"rev"];
  [encoder encodeObject:_path forKey:@"path"];
  [encoder encodeObject:_modifiedTime forKey:@"modifiedTime"];
  [encoder encodeBool:_readOnly forKey:@"readOnly"];
  [encoder encodeObject:_verb forKey:@"verb"];
  [encoder encodeObject:_sessionId forKey:@"sessionId"];
  [encoder encodeObject:_fileId forKey:@"fileId"];
  // fileData is excluded
  [encoder encodeObject:_sourceApp forKey:@"sourceApp"];
}

#pragma mark - private methods

+ (NSString *)getStorageKeyFromSession:(NSString *)sessionId {
  return [NSString stringWithFormat:@"%@.%@", kStorageKeyPrefix, sessionId];
}

@end
