#ifdef __cplusplus
#import "react-native-bls-signatures.h"
#endif

#ifdef RCT_NEW_ARCH_ENABLED
#import "RNBlsSignaturesSpec.h"

@interface BlsSignatures : NSObject <NativeBlsSignaturesSpec>
#else
#import <React/RCTBridgeModule.h>

@interface BlsSignatures : NSObject <RCTBridgeModule>
#endif

@end
