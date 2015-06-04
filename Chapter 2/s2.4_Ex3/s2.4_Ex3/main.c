//
//  main.c
//  s2.4_Ex3
//
//  Created by Tom Massey on 18/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int height = 8, length = 12, width = 10;
    printf("Dimensional weight (pounds) %d\n", (((length * width * height) + 165 )/ 166 ));
    return 0;
}