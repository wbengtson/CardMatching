//
//  PlayingCard.h
//  CardMatching
//
//  Created by Wellington Bengtson on 16/07/14.
//  Copyright (c) 2014 wbengtson. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card
@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;
@end
