//
//  main.c
//  s6.3_Ex7
//
//  Created by Tom Massey on 30/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    for (int i = 9384; i > 0; i /= 10)
    {
        printf("%d ", i);
    }
    return 0;
}
