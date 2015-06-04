//
//  main.c
//  s4.3_Ex12
//
//  Created by Tom Massey on 21/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    int i = 5;
    int j = 0;
    
    j = ++i * 3 - 2;
    printf("%d %d\n", i, j);
    
    int a = 5;
    int b = 0;
    
    b = 3 - 2 * a++;
    printf("%d %d\n", a, b);
    
    int l = 7;
    int m = 0;
    
    m = 3 * l-- + 2;
    printf("%d %d\n", l, m);
    
    int x = 7;
    int y = 0;
    
    y = 3 + --x * 2;
    printf("%d %d\n", x, y);
    
    return 0;
    
}