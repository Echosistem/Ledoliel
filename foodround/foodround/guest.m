//
//  UIViewController+guest.m
//  foodround
//
//  Created by Devine Lu Linvega on 2014-06-05.
//  Copyright (c) 2014 XXIIVV. All rights reserved.
//

#import "guest.h"

@implementation UIViewController (guest)

-(NSMutableDictionary*)guestStart
{
	NSMutableDictionary* newGuest = [[NSMutableDictionary alloc]initWithCapacity:10];
	newGuest[@"attributes"] = @[@"rich",@"tribal",@"deviant"];
	newGuest[@"attributes_potential"] = [[NSMutableArray alloc] init];
	newGuest[@"name"] = @"Woeful";
	return newGuest;
}

-(NSArray*)guestAttributes
{
	NSArray* attributes = @[@"deviant",@"lustful",@"childish",@"greedy",@"polite",@"tribal",@"rich"];
	
	return attributes;
}

-(NSString*)guestNameFromAttributes :(NSString*)attr1 :(NSString*)attr2 :(NSString*)attr3
{
	return [NSString stringWithFormat:@"%@%@%@",[self syllableFromAttribute:attr1:1],[self syllableFromAttribute:attr2:2],[self syllableFromAttribute:attr3:3]];
}

-(NSString*)customFromAttributes :(NSString*)attr1 :(NSString*)attr2 :(NSString*)attr3
{
	NSString* guestName = [NSString stringWithFormat:@"%@%@%@",[self syllableFromAttribute:attr1:1],[self syllableFromAttribute:attr2:2],[self syllableFromAttribute:attr3:3]];
	NSString* guestAction = [self syllableFromAttribute:attr1:4];
	NSString* guesttarget = [self syllableFromAttribute:attr2:5];
	NSString* guestBody   = [self syllableFromAttribute:attr3:6];
	
	return [NSString stringWithFormat:@"As it is custom, %@ %@ your %@ with its %@",guestName,guestAction,guesttarget,guestBody];
}

-(NSString*)syllableFromAttribute :(NSString*)attribute :(int)order
{
	if([attribute isEqualToString:@"deviant"] && order == 1){ return @"Eln"; }
	if([attribute isEqualToString:@"deviant"] && order == 2){ return @"iobl"; }
	if([attribute isEqualToString:@"deviant"] && order == 3){ return @"esse"; }
	if([attribute isEqualToString:@"deviant"] && order == 4){ return @"slaps"; }
	if([attribute isEqualToString:@"deviant"] && order == 5){ return @"genitals"; }
	if([attribute isEqualToString:@"deviant"] && order == 6){ return @"face"; }
	
	if([attribute isEqualToString:@"lustful"] && order == 1){ return @"Ishm"; }
	if([attribute isEqualToString:@"lustful"] && order == 2){ return @"anev"; }
	if([attribute isEqualToString:@"lustful"] && order == 3){ return @"iel"; }
	if([attribute isEqualToString:@"lustful"] && order == 4){ return @"rubs"; }
	if([attribute isEqualToString:@"lustful"] && order == 5){ return @"thongue"; }
	if([attribute isEqualToString:@"lustful"] && order == 6){ return @"index"; }
	
	if([attribute isEqualToString:@"childish"] && order == 1){ return @"Bian"; }
	if([attribute isEqualToString:@"childish"] && order == 2){ return @"ub"; }
	if([attribute isEqualToString:@"childish"] && order == 3){ return @"eflo"; }
	if([attribute isEqualToString:@"childish"] && order == 4){ return @"poke"; }
	if([attribute isEqualToString:@"childish"] && order == 5){ return @"nose"; }
	if([attribute isEqualToString:@"childish"] && order == 6){ return @"thumb"; }
	
	if([attribute isEqualToString:@"greedy"] && order == 1){ return @"Arc"; }
	if([attribute isEqualToString:@"greedy"] && order == 2){ return @"onim"; }
	if([attribute isEqualToString:@"greedy"] && order == 3){ return @"eq"; }
	if([attribute isEqualToString:@"greedy"] && order == 4){ return @"scratches"; }
	if([attribute isEqualToString:@"greedy"] && order == 5){ return @"fingers"; }
	if([attribute isEqualToString:@"greedy"] && order == 6){ return @"wand"; }
	
	if([attribute isEqualToString:@"polite"] && order == 1){ return @"Led"; }
	if([attribute isEqualToString:@"polite"] && order == 2){ return @"erl"; }
	if([attribute isEqualToString:@"polite"] && order == 3){ return @"der"; }
	if([attribute isEqualToString:@"polite"] && order == 4){ return @"holds"; }
	if([attribute isEqualToString:@"polite"] && order == 5){ return @"mouth"; }
	if([attribute isEqualToString:@"polite"] && order == 6){ return @"cane"; }
	
	if([attribute isEqualToString:@"tribal"] && order == 1){ return @"Bras"; }
	if([attribute isEqualToString:@"tribal"] && order == 2){ return @"arg"; }
	if([attribute isEqualToString:@"tribal"] && order == 3){ return @"ulb"; }
	if([attribute isEqualToString:@"tribal"] && order == 4){ return @"stabs"; }
	if([attribute isEqualToString:@"tribal"] && order == 5){ return @"breasts"; }
	if([attribute isEqualToString:@"tribal"] && order == 6){ return @"staff"; }
	
	if([attribute isEqualToString:@"rich"] && order == 1){ return @"Den"; }
	if([attribute isEqualToString:@"rich"] && order == 2){ return @"aml"; }
	if([attribute isEqualToString:@"rich"] && order == 3){ return @"ivec"; }
	if([attribute isEqualToString:@"rich"] && order == 4){ return @"pats"; }
	if([attribute isEqualToString:@"rich"] && order == 5){ return @"hand"; }
	if([attribute isEqualToString:@"rich"] && order == 6){ return @"gloved hand"; }
	
	return @"wip";
}



@end
