///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBStoneSerializers.h"
#import "DBStoneValidators.h"
#import "DBTEAMTeamFolderIdArg.h"
#import "DBTEAMTeamFolderRenameArg.h"

#pragma mark - API Object

@implementation DBTEAMTeamFolderRenameArg

#pragma mark - Constructors

- (instancetype)initWithTeamFolderId:(NSString *)teamFolderId name:(NSString *)name {
  [DBStoneValidators stringValidator:nil maxLength:nil pattern:@"[-_0-9a-zA-Z:]+"](teamFolderId);

  self = [super initWithTeamFolderId:teamFolderId];
  if (self) {
    _name = name;
  }
  return self;
}

#pragma mark - Serialization methods

+ (NSDictionary *)serialize:(id)instance {
  return [DBTEAMTeamFolderRenameArgSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
  return [DBTEAMTeamFolderRenameArgSerializer deserialize:dict];
}

#pragma mark - Description method

- (NSString *)description {
  return [[DBTEAMTeamFolderRenameArgSerializer serialize:self] description];
}

@end

#pragma mark - Serializer Object

@implementation DBTEAMTeamFolderRenameArgSerializer

+ (NSDictionary *)serialize:(DBTEAMTeamFolderRenameArg *)valueObj {
  NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

  jsonDict[@"team_folder_id"] = valueObj.teamFolderId;
  jsonDict[@"name"] = valueObj.name;

  return jsonDict;
}

+ (DBTEAMTeamFolderRenameArg *)deserialize:(NSDictionary *)valueDict {
  NSString *teamFolderId = valueDict[@"team_folder_id"];
  NSString *name = valueDict[@"name"];

  return [[DBTEAMTeamFolderRenameArg alloc] initWithTeamFolderId:teamFolderId name:name];
}

@end