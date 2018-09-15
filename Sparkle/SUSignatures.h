//
//  SUSignatures.h
//  Sparkle
//
//  Created by Kornel on 15/09/2018.
//  Copyright © 2018 Sparkle Project. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SUSignatures : NSObject {
    unsigned char ed25519_signature[64];
}
@property (nullable) NSData *dsaSignature;

- (instancetype)initWithDsa:(NSString * _Nullable)dsa ed:(NSString * _Nullable)ed;
@end

NS_ASSUME_NONNULL_END