//
//  main.c
//  s7.5_Ex15
//
//  Created by Tom Massey on 03/06/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    
    typedef int8_t Int8;
    typedef int16_t Int16;
    typedef int32_t Int32;
    
    Int8 i = 1;
    Int16 j = 2;
    Int32 k = 3;
    
    
    printf("%lu\n", sizeof(i));
    printf("%lu\n", sizeof(j));
    printf("%lu\n", sizeof(k));
    
    return 0;
    
}