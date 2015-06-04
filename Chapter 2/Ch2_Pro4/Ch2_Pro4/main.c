//
//  main.c
//  Ch2_Pro4
//
//  Created by Tom Massey on 18/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>
#define TAX_RATE 1.05


int main(void)

{
    
    float value = 0, value_and_tax = 0;
    
    printf("Enter an amount: ");
    scanf("%f", &value);
    
    value_and_tax = value * TAX_RATE;
    
    printf("With tax added: £%.2f\n", value_and_tax);
    
    return 0;
    
    
}