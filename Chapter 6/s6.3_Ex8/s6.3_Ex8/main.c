//
//  main.c
//  s6.3_Ex8
//
//  Created by Tom Massey on 30/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    for (int i = 10; i >= 1; i /= 2)
    {
        printf("%d ", i++);
    }
    return 0;
}
