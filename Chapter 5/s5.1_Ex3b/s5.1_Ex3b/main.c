//
//  main.c
//  s5.1_Ex3b
//
//  Created by Tom Massey on 25/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    int i = 7, j = 8, k = 9;
    
    printf("%d \n", i - 7 && ++j < k);
    printf("%d %d %d\n", i, j, k);
    
    return 0;
    
}