//
//  main.c
//  Ch7_Pro3
//
//  Created by Tom Massey on 03/06/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    double n, sum = 0;
    
    printf("This program sums a series of integers.\n");
    
    printf("Enter intergers (0 to terminate): ");
    
    scanf("%lf", &n);
    while (n != 0)
    {
        sum += n;
        scanf("%lf", &n);
    }
    printf("The sum is: %lf\n", sum);
    
    return 0;
}