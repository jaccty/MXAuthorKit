//
//  Target_Author.m
//  AFNetworking
//
//  Created by Micheal Xiao on 2017/9/27.
//

#import "Target_Author.h"
#import "MXAuthorDetailController.h"
#import "FFAuthorListReformer.h"
#import "AuthorAPIRequest.h"
@implementation Target_Author
- (UIViewController*)Action_authorDetailViewController:(NSDictionary *)params{
    return [[MXAuthorDetailController alloc] init];
}
- (NSDictionary *)Action_authorReformerWithOriginData:(NSDictionary *)params{
    FFAuthorListReformer *reformer = [[FFAuthorListReformer alloc] init];
    
    return params?[reformer reformData:params]:nil;
}
- (NSDictionary *)Action_authorReformer:(NSDictionary *)params{
    return [[FFAuthorListReformer alloc] init];
}

- (APIRequest *)Action_authorAPIRequest:(NSDictionary *)params{
    return  [[AuthorAPIRequest alloc] init];
}
@end
