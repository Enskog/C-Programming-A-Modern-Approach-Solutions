//
//  main.c
//  s6.4_Ex12
//
//  Created by Tom Massey on 30/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    int d, n;
    
    printf("Enter a number: \n");
    scanf("%d", &n);
    
    for (d = 2; d * d <= n; d++)
    {
        if (n % d == 0)
            break;
    }
    
    
    if (d * d <= n)
    {
        printf("%d is divisible by %d\n", n, d);
    }
    else
        printf("%d is a prime number\n", n);
    
    return 0;
}
