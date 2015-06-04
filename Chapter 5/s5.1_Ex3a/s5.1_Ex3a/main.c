//
//  main.c
//  s5.1_Ex3a
//
//  Created by Tom Massey on 25/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    int i = 3, j = 4, k = 5;
    
    printf("%d \n", i < j || ++j < k);
    printf("%d %d %d\n", i, j, k);
    
    return 0;
    
}