//
//  main.c
//  s6.2_Ex2
//
//  Created by Tom Massey on 30/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    int i = 9384;
    do
    {
        printf("%d ", i);
        i /= 10;
        
    } while (i > 0);
    return 0;
}
