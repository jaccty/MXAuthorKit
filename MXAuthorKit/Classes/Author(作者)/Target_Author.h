//
//  Target_Author.h
//  AFNetworking
//
//  Created by Micheal Xiao on 2017/9/27.
//

#import <Foundation/Foundation.h>
#import "MXAuthorKit.h"
@interface Target_Author : NSObject
/**
 返回MXAuthorDetailViewController控制器
 */
- (UIViewController*)Action_authorDetailViewController:(NSDictionary *)params;

/**
 返回转化好的Reformer对象
 */
- (NSDictionary *)Action_authorReformerWithOriginData:(NSDictionary*)params;
/**
 返回Reformer对象
 */
- (NSDictionary *)Action_authorReformer:(NSDictionary *)params;
/**
 返回Request对象
 */
- (APIRequest*)Action_authorAPIRequest:(NSDictionary *)params;
@end
