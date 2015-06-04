//
//  main.c
//  Ch4_Pro6
//
//  Created by Tom Massey on 23/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, j6;
    int first_sum, second_sum, total, total_adj, temp, check_digit;
    
    printf("Enter the first 12 digits of an EAN: \n");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5, &j6);
    
    first_sum = i1 + i3 + i5 + j2 + j4 + j6;
    second_sum = d + i2 + i4 + j1 + j3 + j5;
    total = second_sum + (3 * first_sum);
    total_adj = total - 1;
    temp = total_adj % 10;
    check_digit = 9 - temp;
    
    
    printf("Check digit: %d\n", check_digit);
    
    return 0;
    
}
