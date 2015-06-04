//
//  main.c
//  s4.2_Ex10
//
//  Created by Tom Massey on 21/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    int i = 6;
    int j = 0;
    
    j = i += i;
    
    printf("%d %d\n", i, j);
    
    int a = 5;
    int b = 0;
    
    b = (a -= 2) + 1;
    
    printf("%d %d\n", a, b);
    
    
    int x = 7;
    int y = 0;
    
    y = 6 + (x = 2.5);
    
    printf("%d %d\n", x, y);
    
    int l = 2;
    int m = 8;
    
    m = (l = 6) + (m = 3);
    
    printf("%d %d\n", l, m);

}
