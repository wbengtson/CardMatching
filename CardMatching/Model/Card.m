//
//  Card.m
//  CardMatching
//
//  Created by Wellington Bengtson on 16/07/14.
//  Copyright (c) 2014 wbengtson. All rights reserved.
//

#import "Card.h"

@implementation Card
- (int)match:(NSArray *)otherCards
{
    int score = 0;
    
    for (Card *card in otherCards) {
        if ([card.contents isEqualToString:self.contents]) {
            score = 1;
        }
    }
    return score;
}
@end
