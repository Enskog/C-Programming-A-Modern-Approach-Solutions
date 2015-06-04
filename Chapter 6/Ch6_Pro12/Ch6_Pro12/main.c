//
//  main.c
//  Ch6_Pro12
//
//  Created by Tom Massey on 31/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    int n = 0;
    float e = 1.0f;
    int denom = 0;
    float lim = 0.0f;
    
    printf("Enter an integer n to approximate e: ");
    scanf("%d", &n);
    
    printf("Enter nth term limit in arithmetic series: ");
    scanf("%f", &lim);
    
    for (int i = 1; i <= n; i++)
    {
        denom = 1;
        
        for (int j = i; j > 0; --j)
        {
            denom *= j;
        }
        if (1.0f/denom < lim)
        {
            break;
        }
        //printf("%d\n", denom);
        e += (1.0f/(denom));
        
    }
    
    printf("The approximate value of e is: %f\n", e);
}
