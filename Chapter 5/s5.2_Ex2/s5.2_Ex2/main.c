//
//  main.c
//  s5.2_Ex2
//
//  Created by Tom Massey on 25/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    int i = 10, j = 5;
    int a = 2, b = 1;
    int x = 5, y = 0, z = -5;
    int l = 1, m = 2, p = 3;
    
    printf("%d\n", !i < j);
    
    printf("%d\n", !!a + !b);
    
    printf("%d\n", (x && y) || z);
    
    printf("%d\n", l < m || p);
    
    return 0;
    
}
