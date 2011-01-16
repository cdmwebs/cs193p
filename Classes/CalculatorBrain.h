//
//  CalculatorBrain.h
//  Calculator
//
//  Created by Chris Moore on 1/16/11.
//  Copyright 2011 26Webs LLC. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface CalculatorBrain : NSObject {
	double operand;
	NSString *waitingOperation;
	double waitingOperand;
}

- (void)setOperand:(double)aDouble;
- (double)performOperation:(NSString *)operation;

@end
