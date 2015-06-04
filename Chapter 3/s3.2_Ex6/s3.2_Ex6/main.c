//
//  main.c
//  s3.2_Ex6
//
//  Created by Tom Massey on 19/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

/* Adds two fractions */

int main(void)

{
    int num1, denom1, num2, denom2, result_num, result_denom;
    
    printf("Enter first fraction: ");
    scanf("%d / %d", &num1, &denom1);
    
    printf("Enter second fraction: ");
    scanf("%d / %d", &num2, & denom2);
    
    result_num = num1 * denom2 + num2 * denom1;
    
    result_denom = denom1 * denom2;
    
    printf("The sum is %d/%d\n", result_num, result_denom);
    
    return 0;

}
