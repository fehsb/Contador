//
//  Contador.h
//  ContaPessoas
//
//  Created by Vinicius Miana on 2/18/15.
//  Copyright (c) 2015 Vinicius Miana. All rights reserved.
//
#import <Foundation/Foundation.h>


@protocol Mostrador <NSObject>

-(void) atualiza;

@end

@interface Contador : NSObject 

+ (Contador *) contador;
- (void)maisUmCueca;
- (void)maisUmaGata;

@property (nonatomic,weak) id <Mostrador> delegate;

-(int)getBoys;
-(int)getGirls;
-(int)getTotal;
@end

