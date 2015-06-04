//
//  main.c
//  s6.4_Ex10
//
//  Created by Tom Massey on 30/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    int i = 4;
    while (i > 0)
    {
        i--;
        if (i == 2)
            continue;
        printf("%d ", i);
        
    }
    
    int j = 4;
    printf("\n");
    while (j > 0)
    {
        j--;
        if (j == 2)
            goto endofst;
        printf("%d ", j);
        endofst: ;
    }
    
    return 0;
}

