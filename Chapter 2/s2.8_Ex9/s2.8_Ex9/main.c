//
//  main.c
//  s2.8_Ex9
//
//  Created by Tom Massey on 18/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int q, p;
    float answer = 0;
    
    q = 1;
    p = 5;
    
    answer = (3 * q - p * p) / 3;
    printf ("%f\n", answer);
    return 0;
}