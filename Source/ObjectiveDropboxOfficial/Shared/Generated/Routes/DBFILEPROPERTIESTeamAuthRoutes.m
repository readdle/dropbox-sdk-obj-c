///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBFILEPROPERTIESTeamAuthRoutes.h"
#import "DBFILEPROPERTIESAddPropertiesArg.h"
#import "DBFILEPROPERTIESAddPropertiesError.h"
#import "DBFILEPROPERTIESAddTemplateArg.h"
#import "DBFILEPROPERTIESAddTemplateResult.h"
#import "DBFILEPROPERTIESGetTemplateArg.h"
#import "DBFILEPROPERTIESGetTemplateResult.h"
#import "DBFILEPROPERTIESInvalidPropertyGroupError.h"
#import "DBFILEPROPERTIESListTemplateResult.h"
#import "DBFILEPROPERTIESLookUpPropertiesError.h"
#import "DBFILEPROPERTIESLookupError.h"
#import "DBFILEPROPERTIESModifyTemplateError.h"
#import "DBFILEPROPERTIESOverwritePropertyGroupArg.h"
#import "DBFILEPROPERTIESPropertiesError.h"
#import "DBFILEPROPERTIESPropertiesSearchArg.h"
#import "DBFILEPROPERTIESPropertiesSearchContinueArg.h"
#import "DBFILEPROPERTIESPropertiesSearchContinueError.h"
#import "DBFILEPROPERTIESPropertiesSearchError.h"
#import "DBFILEPROPERTIESPropertiesSearchMatch.h"
#import "DBFILEPROPERTIESPropertiesSearchQuery.h"
#import "DBFILEPROPERTIESPropertiesSearchResult.h"
#import "DBFILEPROPERTIESPropertyFieldTemplate.h"
#import "DBFILEPROPERTIESPropertyGroup.h"
#import "DBFILEPROPERTIESPropertyGroupTemplate.h"
#import "DBFILEPROPERTIESPropertyGroupUpdate.h"
#import "DBFILEPROPERTIESRemovePropertiesArg.h"
#import "DBFILEPROPERTIESRemovePropertiesError.h"
#import "DBFILEPROPERTIESRemoveTemplateArg.h"
#import "DBFILEPROPERTIESRouteObjects.h"
#import "DBFILEPROPERTIESTemplateError.h"
#import "DBFILEPROPERTIESTemplateFilter.h"
#import "DBFILEPROPERTIESUpdatePropertiesArg.h"
#import "DBFILEPROPERTIESUpdatePropertiesError.h"
#import "DBFILEPROPERTIESUpdateTemplateArg.h"
#import "DBFILEPROPERTIESUpdateTemplateResult.h"
#import "DBRequestErrors.h"
#import "DBStoneBase.h"
#import "DBTransportClientProtocol.h"

@implementation DBFILEPROPERTIESTeamAuthRoutes

- (instancetype)init:(id<DBTransportClient>)client {
  self = [super init];
  if (self) {
    _client = client;
  }
  return self;
}

- (DBRpcTask *)templatesAddForTeam:(NSString *)name
                      description_:(NSString *)description_
                            fields:(NSArray<DBFILEPROPERTIESPropertyFieldTemplate *> *)fields {
  DBRoute *route = DBFILEPROPERTIESRouteObjects.DBFILEPROPERTIESTemplatesAddForTeam;
  DBFILEPROPERTIESAddTemplateArg *arg = [[DBFILEPROPERTIESAddTemplateArg alloc] initWithName:name
                                                                                description_:description_
                                                                                      fields:fields];
  return [self.client requestRpc:route arg:arg];
}

- (DBRpcTask *)templatesGetForTeam:(NSString *)templateId {
  DBRoute *route = DBFILEPROPERTIESRouteObjects.DBFILEPROPERTIESTemplatesGetForTeam;
  DBFILEPROPERTIESGetTemplateArg *arg = [[DBFILEPROPERTIESGetTemplateArg alloc] initWithTemplateId:templateId];
  return [self.client requestRpc:route arg:arg];
}

- (DBRpcTask *)templatesListForTeam {
  DBRoute *route = DBFILEPROPERTIESRouteObjects.DBFILEPROPERTIESTemplatesListForTeam;
  return [self.client requestRpc:route arg:nil];
}

- (DBRpcTask *)templatesRemoveForTeam:(NSString *)templateId {
  DBRoute *route = DBFILEPROPERTIESRouteObjects.DBFILEPROPERTIESTemplatesRemoveForTeam;
  DBFILEPROPERTIESRemoveTemplateArg *arg = [[DBFILEPROPERTIESRemoveTemplateArg alloc] initWithTemplateId:templateId];
  return [self.client requestRpc:route arg:arg];
}

- (DBRpcTask *)templatesUpdateForTeam:(NSString *)templateId {
  DBRoute *route = DBFILEPROPERTIESRouteObjects.DBFILEPROPERTIESTemplatesUpdateForTeam;
  DBFILEPROPERTIESUpdateTemplateArg *arg = [[DBFILEPROPERTIESUpdateTemplateArg alloc] initWithTemplateId:templateId];
  return [self.client requestRpc:route arg:arg];
}

- (DBRpcTask *)templatesUpdateForTeam:(NSString *)templateId
                                 name:(NSString *)name
                         description_:(NSString *)description_
                            addFields:(NSArray<DBFILEPROPERTIESPropertyFieldTemplate *> *)addFields {
  DBRoute *route = DBFILEPROPERTIESRouteObjects.DBFILEPROPERTIESTemplatesUpdateForTeam;
  DBFILEPROPERTIESUpdateTemplateArg *arg = [[DBFILEPROPERTIESUpdateTemplateArg alloc] initWithTemplateId:templateId
                                                                                                    name:name
                                                                                            description_:description_
                                                                                               addFields:addFields];
  return [self.client requestRpc:route arg:arg];
}

@end
