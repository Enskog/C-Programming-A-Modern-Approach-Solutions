//
//  main.c
//  s4.1_Ex1
//
//  Created by Tom Massey on 21/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    int i = 5, j = 3;
    
    printf("%d %d\n", i / j, i % j);
    
    int x = 2, y = 3;
    
    printf("%d\n", (x + 10) % y);
    
    int l = 7, m = 8, k = 9;
    
    printf("%d\n", (l + 10) % k / m);
    
    int a = 1, b = 2, c = 3;
    
    printf("%d\n", (a + 5) % (b + 2) / c);
    
    return 0;
    
}
