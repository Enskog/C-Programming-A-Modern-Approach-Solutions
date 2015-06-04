//
//  main.c
//  s6.4_Ex11
//
//  Created by Tom Massey on 30/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    int sum = 0;
    
    for (int i = 0; i < 10; i++)
    {
        if (i % 2)
            continue;
        sum += i;
        printf("%d ", i);
    }
    printf("%d\n", sum);
    return 0;
}