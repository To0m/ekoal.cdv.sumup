//
//  SMPMerchant.h
//  Cashier
//
//  Created by Felix Lamouroux on 04.03.14.
//  Copyright (c) 2014 iosphere GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

/// Describes a SumUp merchant.
@interface SMPMerchant : NSObject

/// The currency code used by the merchant for all payments.
@property (readonly, copy, nullable) NSString *currencyCode;

/// The merchant's identifier within the SumUp system.
@property (readonly, copy, nullable) NSString *merchantCode;

@end
