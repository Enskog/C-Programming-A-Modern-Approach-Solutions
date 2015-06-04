//
//  main.c
//  s7.4_Ex13
//
//  Created by Tom Massey on 02/06/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    char c = '\1';
    short s = 2;
    int i = -3;
    long m = 5;
    float f = 6.5f;
    double d = 7.5;
    
    printf("%d\n", c*i);
    printf("%ld\n", s+m);
    printf("%f\n", f/c);
    printf("%lf\n", d/s);
    printf("%lf\n", f-d);
    printf("%d\n", (int)f);
    
    
    return 0;
    
}
