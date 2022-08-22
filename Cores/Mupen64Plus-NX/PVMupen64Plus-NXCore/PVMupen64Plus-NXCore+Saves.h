//
//  MupenGameNXCore+Controls.h
//  MupenGameNXCore
//
//  Created by Joseph Mattiello on 1/26/22.
//  Copyright © 2022 Provenance. All rights reserved.
//

#import <PVMupen64Plus-NX/MupenGameNXCore.h>

NS_ASSUME_NONNULL_BEGIN

@interface MupenGameNXCore (Saves)
- (BOOL)saveStateToFileAtPath:(NSString *)fileName error:(NSError**)error;
- (void)saveStateToFileAtPath:(NSString *)fileName completionHandler:(void (^)(BOOL, NSError *))block;
- (BOOL)loadStateFromFileAtPath:(NSString *)fileName error:(NSError**)error;
- (void)loadStateFromFileAtPath:(NSString *)fileName completionHandler:(void (^)(BOOL, NSError *))block;

@end

NS_ASSUME_NONNULL_END