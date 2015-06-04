//
//  main.c
//  s6.3_Ex9
//
//  Created by Tom Massey on 30/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    int i = 10;
    while (i >= 1)
    {
        printf("%d ", i++);
        i /= 2;
    }
    return 0;
}

