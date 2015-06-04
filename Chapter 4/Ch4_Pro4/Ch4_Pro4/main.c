//
//  main.c
//  Ch4_Pro4
//
//  Created by Tom Massey on 21/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    int base10_num = 0;
    int base8_num1 = 0, base8_num2 = 0, base8_num3 = 0, base8_num4 = 0, base8_num5 = 0;
    
    printf("Enter a number between 0 and 32767: \n");
    scanf("%d", &base10_num);
    
    base8_num1 = base10_num % 8;
    base8_num2 = (base10_num / 8) % 8;
    base8_num3 = ((base10_num / 8) / 8) % 8;
    base8_num4 = (((base10_num / 8) / 8) /8) % 8;
    base8_num5 = ((((base10_num / 8) / 8) /8) /8) % 8;
    
    printf("In octal your number is: %d%d%d%d%d\n", base8_num5, base8_num4, base8_num3, base8_num2, base8_num1);
    
    return 0;
    
}
