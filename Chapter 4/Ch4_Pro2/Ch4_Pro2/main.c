//
//  main.c
//  Ch4_Pro2
//
//  Created by Tom Massey on 21/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    int number = 0;
    int digit1 = 0, digit2 = 0, digit3 = 0;
    
    printf("Enter a three-digit number: \n");
    scanf("%d", &number);
    
    digit1 = number / 100;
    digit2 = (number % 100) / 10;
    digit3 = (number % 100) % 10;
    
    printf("The reversal is: %d%d%d\n", digit3, digit2, digit1);
    
    return 0;
    
}