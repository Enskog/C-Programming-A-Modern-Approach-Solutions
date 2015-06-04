//
//  main.c
//  Ch6_Pro2
//
//  Created by Tom Massey on 30/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    int m = 0, n = 0, temp = 0;
    
    printf("Enter two integers: \n");
    scanf("%d %d", &m, &n);
    
    while (n != 0)
    {
        temp = m % n;
        m = n;
        n = temp;
    }
    
    printf("Greatest common divisor: %d\n", m);
    
    
    
    return 0;
    
    
}