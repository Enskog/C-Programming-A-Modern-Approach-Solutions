//
//  main.c
//  Ch2_Pro7
//
//  Created by Tom Massey on 18/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int num_dollars_20 = 0, num_dollars_10 = 0, num_dollars_5 = 0, num_dollars_1 = 0;
    int amount = 0;
    
    printf("Please enter the ammount in dollars: ");
    scanf("%d", &amount);
    
    num_dollars_20 = amount / 20;
    num_dollars_10 = (amount - (num_dollars_20 * 20)) / 10;
    num_dollars_5 = (amount - (num_dollars_20 * 20) - (num_dollars_10 * 10)) / 5;
    num_dollars_1 = (amount - (num_dollars_20 * 20) - (num_dollars_10 * 10) - (num_dollars_5 * 5)) / 1;
    
    printf("20 dollar bills: %d\n", num_dollars_20);
    printf("10 dollar bills: %d\n", num_dollars_10);
    printf("5 dollar bills: %d\n", num_dollars_5);
    printf("1 dollar bills: %d\n", num_dollars_1);
    
    
    return 0;

}
