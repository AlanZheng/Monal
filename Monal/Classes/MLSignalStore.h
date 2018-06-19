//
//  MLSignalStore.h
//  Monal
//
//  Created by Anurodh Pokharel on 5/3/18.
//  Copyright © 2018 Monal.im. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <SignalProtocolObjC/SignalProtocolObjC.h>

@interface MLSignalStore : NSObject <SignalStore>
@property (nonatomic, assign, readonly) uint32 deviceid;
@end
