//
//  Constants.m
//  
//
//  Created by SamSol on 29/08/15.
//  Copyright (c) 2015 SamSol. All rights reserved.
//

#import "Constants.h"

NSString *const KGoogleAppAPIKey = @"";

NSString *const KGoogleSignInClientID = @"";
NSString *const KTwitterConsumerKey = @"";

NSString *const KTwitterConsumerSecret = @"";
NSString *const KLayerAppIDKey = @"";

/*  Server Request URL String    */

NSString *const KGPlusFriendListVisibleURL = @"https://www.googleapis.com/plus/v1/people/me/people/visible";
NSString *const KGPlusFriendListConnectedURL = @"https://www.googleapis.com/plus/v1/people/me/people/connected";

NSString *const KTwitterShowUserAPIURL = @"https://api.twitter.com/1.1/users/show.json";


NSString *const KMainDomainURLString = @"http://abc.net/image_upload/";
NSString *const KSpeakerListURLString = @"http://abc.net/index.php/api/speaker_list";

/*  Layer API   */

NSString *const KLayerIdentityTokenURLString = @"layer/layerIdentityTokenProvider.php";

/*  NEAction User API   */

NSString *const KImageUploadURLString = @"image_data.php";

NSString *const KUserForgetPasswordURLString = @"forgot_password.php";

NSString *const KUserLoginURLString = @"login.php";
NSString *const KUserRegisterURLString = @"register.php";
NSString *const KUserLogoutURLString = @"logout.php";

NSString *const KControlRequestKey = @"ControlRequestKey";
NSString *const KJDStatusBarStyleName = @"NEaction-Theme";

NSString *const  KNoChatServiceMessage = @"No chat server connection available.";

@implementation Constants


@end
