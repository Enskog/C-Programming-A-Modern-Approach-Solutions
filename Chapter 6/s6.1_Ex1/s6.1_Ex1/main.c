//
//  main.c
//  s6.1_Ex1
//
//  Created by Tom Massey on 30/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    int i = 1;
    while (i <= 128)
    {
        printf("%d ", i);
        i *=2;
    }
    return 0;
}