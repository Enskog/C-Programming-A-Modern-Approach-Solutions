//
//  main.c
//  Ch4_Pro1
//
//  Created by Tom Massey on 21/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    int number = 0;
    int digit1 = 0, digit2 = 0;
    
    printf("Enter a two-digit number: \n");
    scanf("%d", &number);
    
    digit1 = number / 10;
    digit2 = number % 10;
    
    printf("The reversal is: %d%d\n", digit2, digit1);
    
    return 0;
    
}