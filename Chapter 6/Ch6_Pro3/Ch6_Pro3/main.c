//
//  main.c
//  Ch6_Pro3
//
//  Created by Tom Massey on 30/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    int m = 0, n = 0, temp_m = 0, temp_n = 0, GCD = 0, remainder = 0;
    
    printf("Enter a fraction: \n");
    scanf("%d/%d", &m, &n);
    
    temp_m = m;
    temp_n = n;
    
    while (n != 0)
    {
        remainder = m % n;
        m = n;
        n = remainder;
    }
    
    GCD = m;
    
    printf("In lowest terms: %d/%d\n", (temp_m/GCD), (temp_n/GCD));
    
    return 0;
    
    
}
