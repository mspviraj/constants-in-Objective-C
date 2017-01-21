//
//  Constants.h
//  
//
//  Created by SamSol on 29/08/15.
//  Copyright (c) 2015 SamSol. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Constants : NSObject

/*  System Oriented Constants   */

#define KShowLayOutArea 1
#define KHideLayOutArea 0
#define KShowVersionNumber 1

/*****************************/
/*   Useful Macro Function   */
/*****************************/

/*  Disable Log Message in Release version but not in Debug version  */

#ifdef DEBUG
#   define NSLog(...) NSLog(__VA_ARGS__)
#else
#   define NSLog(...)
#endif

/*  Check that device is iPad or not  */

#define IS_IPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)

/*  Check that System Version is v version or later  */

#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)

/*  Strings Functions  */

#define AppendString(string1, string2) [NSString stringWithFormat:@"%@%@", string1, string2]

#define ConvertCStringToString(const_char) [NSString stringWithCString:const_char encoding:NSASCIIStringEncoding]

/*  Convert HTML Color Code to UIColor Ex. :0xCECECE    */

#define UIColorFromRGB(rgbValue) [UIColor \
colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
green:((float)((rgbValue & 0xFF00) >> 8))/255.0 \
blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

/*  Convert HTML Color Code with Alpha Value to UIColor Ex. :0xCECECE and Alpha Value Ex.:0.4   */

#define UIColorFromRGBWithAlpha(rgbValue, a) [UIColor \
colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
green:((float)((rgbValue & 0xFF00) >> 8))/255.0 \
blue:((float)(rgbValue & 0xFF))/255.0 alpha:a]

/*  Get UIFont object from Font name and size   */

#define UIFontFromNameAndSize(_name_, _size_) ((UIFont *)[UIFont fontWithName:(NSString *)(_name_) size:(CGFloat)(_size_)])

/*  Get UIFont object from Font name and size seperated by ';'  Ex. : UIFontFromString(@"Arial;10.0f")  */

#define UIFontFromString(fontString) ((UIFont *)[UIFont fontWithName:[fontString componentsSeparatedByString:@";"][0] size:[[fontString componentsSeparatedByString:@";"][1] floatValue]])



/**************************/
/*    Comman Constants    */
/**************************/

/*  App Color Codes  */

#define KAppBackgroundColor 0x202020
#define KSecondaryBackgroundColor 0x333333

#define KAppFontColor 0xffffff
#define KAppFontColorAlpha 0.8

/*  Button Color Codes  */

#define KClearButtonColor 0xCCCCCC
#define KTextFieldToolbarBorderAlpha 0.5f

#define KHostingStatusFeedColor 0xff6262

#define KPrimaryButtonColor 0xECAE47
#define KPrimaryButtonFontColor 0x000000

#define KSecondaryButtonColor 0x4C4C4C
#define KSecondaryButtonFontColor 0xffffff

#define KTertiaryButtonColor 0xFF0017
#define KTertiaryButtonFontColor 0xffffff

#define KQuaternaryButtonColor 0x00BA3A

#define KSearchFriendColor 0xBFC0C0
#define KSearchFriendFontColor 0x15181D

#define KFacebookAppColor 0x3A5B95
#define KFacebookFontColor 0xffffff

#define KTwitterAppColor 0x4EAEEA
#define KTwitterFontColor 0xffffff

#define KGoogleAppColor 0xE62B34
#define KGoogleFontColor 0xffffff

#define KEmailShareColor 0xE47453

#define KNewsFeedCellBackgroundColor 0x000000
#define KNewsFeedCellBackgroundAlpha 0.5f

#define KNewsFeedCellBorderColor 0xffffff
#define KNewsFeedCellBorderAlpha 0.25f

#define KNewsFeedCellBorderRadius 6.0f

#define KTransparentButtonFontColor 0xffffff
#define KShareActivityButtonBackgroundColor 0x333539

/*  Label Color Codes  */

#define KPrimaryLargeLabelFontColor 0xffffff
#define KNewsFeedTextLabelLinkColor 0xf9dfb9

/*  TextInput Color Codes  */

#define KPrimaryTextInputColor 0xffffff
#define KPrimaryTextInputFontColor 0x000000
#define KPrimaryTextPlaceholderColor 0x555555

/*  Control Constants   */

#define KControlBorderRadius 3.0f
#define KSecondaryBorderRadius 12.0f

#define KControlLeftRightPadding 40.0f
#define KControlTopBottomPadding 7.0f

#define KPopUpControlTopBottomPadding 5.0f

#define KNewsFeedCellTopPadding 2.2*KControlTopBottomPadding
#define KTextLeftPaddingFromControl 10.0f

#define KControlLeftRightSecondaryPadding 15.0f

#define KTextControlBorderColor 0xff0000
#define KTextControlBorderWidth 1.5f
#define KTextControlBorderRadius 2.5f

#define KNewsFeedControlContainerHeight 50.0f
#define KCellProfileImageViewWidth 40.0f

#define KShowHideViewDuration 0.35f

#define KFBFriendSearchLimit 10
#define KJDStatusBarDismissDelay 4.0f
#define KTWMessageBarDismissDelay 4.0f

//#define KMapRadiusInMeters 9977.93f
#define KMapRadiusInMeters 100.0f * 1609.34f

#define KMapZoomValue 6.98f

/*  String Constants    */

extern NSString *const KGoogleAppAPIKey;
extern NSString *const KGoogleSignInClientID;

extern NSString *const KTwitterConsumerKey;
extern NSString *const KTwitterConsumerSecret;

extern NSString *const KParseApplicationID;
extern NSString *const KParseClientID;

extern NSString *const KLayerAppIDKey;

extern NSString *const KBatchLiveAPIKey;
extern NSString *const KBatchDevAPIKey;

extern NSString *const KBatchURLSchemeID;
extern NSString *const KBatchRestAPIKey;

/*  Server Request URL String    */

extern NSString *const KGPlusFriendListVisibleURL;
extern NSString *const KGPlusFriendListConnectedURL;

extern NSString *const KTwitterShowUserAPIURL;
extern NSString *const KMainDomainURLString;

extern NSString *const KSpeakerListURLString;

/*  Layer API   */

extern NSString *const KLayerIdentityTokenURLString;

/*  NEAction User API   */

extern NSString *const KImageUploadURLString;

extern NSString *const KUserForgetPasswordURLString;

extern NSString *const KUserLoginURLString;
extern NSString *const KUserRegisterURLString;
extern NSString *const KUserLogoutURLString;

extern NSString *const KControlRequestKey;
extern NSString *const KJDStatusBarStyleName;

/*  Alert Messages  */

extern NSString *const KNoChatServiceMessage;

@end
