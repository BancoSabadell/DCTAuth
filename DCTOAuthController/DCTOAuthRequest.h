//
//  DCTOAuthRequest.h
//  DCTOAuthController
//
//  Created by Daniel Tull on 24.08.2012.
//  Copyright (c) 2012 Daniel Tull. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DCTOAuthSignature.h"

@interface DCTOAuthRequest : NSObject

- (id)initWithURL:(NSURL *)URL
		   method:(DCTOAuthRequestMethod)method
		signature:(DCTOAuthSignature *)signature;

- (NSURLRequest *)signedRequest;
- (void)performRequestWithHandler:(void(^)(NSData *responseData, NSHTTPURLResponse *urlResponse, NSError *error))handler;

@end