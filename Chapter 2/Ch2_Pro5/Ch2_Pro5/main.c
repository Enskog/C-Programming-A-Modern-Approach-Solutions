//
//  main.c
//  Ch2_Pro5
//
//  Created by Tom Massey on 18/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int x = 0;
    float calc = 0;
    
    printf("Please enter the value for x: ");
    scanf("%d", &x);
    
    calc = ((3 * (x * x * x * x * x)) + (2 * (x * x * x * x)) - (5 * (x * x * x)) - (x * x) + (7 * x) - 6);
    
    printf("For x = %d, 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 = %.2f\n", x, calc);
    
    return 0;

}
