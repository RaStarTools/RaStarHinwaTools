//
//  RaStarHinwaTools.h
//  RaStarModules
//
//  Created by Hinwa on 2018/12/21.
//  Copyright © 2018 Hinwa. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface RaStarHinwaTools : NSObject

#pragma mark - 通用
/**存储token*/
+(void)saveLoginAccessToken:(NSString *)accesstoken;
/**读取token*/
+(NSString * _Nullable)getLoginAccesstoken;
/**移除AccessToken*/
+(void)deleteLoginAccessToken;
/**存储uinfo*/
+(void)saveLoginUserInfo:(NSString *)uInfo;
/**移除uinfo*/
+(void)deleteUserInfo;
/**获取实名认证信息*/
+(NSDictionary *)getUserIDConfirm:(NSString *)uinfo;
/**存储账号密码*/
+(void)saveAccount:(NSString *_Nonnull)account Password:(NSString *_Nonnull)password;

#pragma mark - 工具
/**Json转字典*/
+(NSDictionary *)createDictWithJson:(NSString *)string;
/**字典转Json*/
+(NSString *)createJsonWithDict:(NSDictionary *)dictionary;
/**Sign签名*/
+(NSDictionary *)getSign:(NSDictionary *)decodeDic;
/**转md5*/
+(NSString *)getMD5:(NSString *)string;
/**显示加载中的HUD*/
+(void)showLoadingHUD;
/**显示一个1.5S自动隐藏的HUD*/
+(void)showAutoHUD:(NSString *)hudString;
/** 隐藏所有HUD */
+(void)hiddenHUD;
@end

NS_ASSUME_NONNULL_END
