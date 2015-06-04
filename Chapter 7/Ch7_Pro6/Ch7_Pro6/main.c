//
//  main.c
//  Ch7_Pro6
//
//  Created by Tom Massey on 04/06/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    printf("Size of int in bytes: %d\n", (int) sizeof(int));
    printf("Size of short in bytes: %d\n", (int) sizeof(short));
    printf("Size of long in bytes: %d\n", (int) sizeof(long));
    printf("Size of float in bytes: %d\n", (int) sizeof(float));
    printf("Size of double in bytes: %d\n", (int) sizeof(double));
    printf("Size of long double in bytes: %d\n", (int) sizeof(long double));
    
    return 0;
    
}