//
//  main.c
//  s6.3_Ex3
//
//  Created by Tom Massey on 30/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    int i, j;
    for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i -1)
    {
        printf("%d ", i);
    }
    return 0;
}