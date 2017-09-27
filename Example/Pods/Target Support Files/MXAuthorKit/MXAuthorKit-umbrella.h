#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "MXAuthorDetailController.h"
#import "AuthorAPIRequest.h"
#import "FFAuthorCell.h"
#import "FFAuthorController.h"
#import "FFAuthorListReformer.h"
#import "MXAuthorKit.h"
#import "Target_Author.h"

FOUNDATION_EXPORT double MXAuthorKitVersionNumber;
FOUNDATION_EXPORT const unsigned char MXAuthorKitVersionString[];

