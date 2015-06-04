//
//  main.c
//  s4.3_Ex11
//
//  Created by Tom Massey on 21/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    int i = 1;
    printf("%d\n", i++ - 1);
    printf("%d\n", i);
    
    int a = 10;
    int b = 5;
    printf("%d \n", a++ - ++b);
    printf("%d %d\n", a, b);
    
    int l = 7;
    int m = 8;
    printf("%d \n", l++ - --m);
    printf("%d %d\n", l, m);
    
    int x = 3;
    int y = 4;
    int z = 5;
    printf("%d \n", x++ - y++ + --z);
    printf("%d %d %d\n", x, y, z);
    
    return 0;
    
}
