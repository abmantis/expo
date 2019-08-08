//  Copyright © 2018 650 Industries. All rights reserved.

#import <UMCore/UMExportedModule.h>
#import <UMCore/UMModuleRegistryConsumer.h>

NS_ASSUME_NONNULL_BEGIN

// Keep this enum in sync with JavaScript
// Based on the EffectiveConnectionType enum described in the W3C Network Information API spec
// (https://wicg.github.io/netinfo/).
typedef NS_ENUM(NSInteger, EXCellularGeneration) {
  EXCellularGenerationUnknown = 0,
  EXCellularGeneration2G,
  EXCellularGeneration3G,
  EXCellularGeneration4G,
};

@interface EXCellularModule : UMExportedModule <UMModuleRegistryConsumer>

@end

NS_ASSUME_NONNULL_END
