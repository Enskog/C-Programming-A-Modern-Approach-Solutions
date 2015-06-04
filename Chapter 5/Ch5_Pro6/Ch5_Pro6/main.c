//
//  main.c
//  Ch5_Pro6
//
//  Created by Tom Massey on 26/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, CheckDigit;
    int first_sum, second_sum, total;
    int CalcCheckDigit = 0;
    
    printf("Enter the UPC: \n");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5, &CheckDigit);
    
    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;
    CalcCheckDigit =  9 - ((total -1) % 10);
    
    printf("Check digit: %d\n", CalcCheckDigit);
    
    if (CalcCheckDigit == CheckDigit)
        printf("VALID\n");
    else
        printf("NOT VALID\n");
    
    return 0;
    
}