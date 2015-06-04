//
//  main.c
//  s4.2_Ex9
//
//  Created by Tom Massey on 21/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    int i = 7, j = 8;
    
    i *= j + 1;
    
    printf("%d %d\n", i, j);
    
    int ii = 1, jj = 1, k = 1;
    
    ii += jj += k;
    
    printf("%d %d %d\n", ii, jj, k);
    
    int a = 1, b = 2, c = 3;
    
    a -= b -= c;
    
    printf("%d %d %d\n", a, b, c);
    
    int x = 2, y = 1, z = 0;
    
    x *= y *= z;
    
    printf("%d %d %d\n", x, y, z);
    
    return 0;
    
}