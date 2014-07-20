//
//  Deck.h
//  CardMatching
//
//  Created by Wellington Bengtson on 20/07/14.
//  Copyright (c) 2014 wbengtson. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"
@interface Deck : NSObject
- (void)addCard:(Card *)card atTop:(BOOL)atTop;

- (Card *)drawRandomCard;
@end
