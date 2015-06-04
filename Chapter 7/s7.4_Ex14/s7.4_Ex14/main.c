//
//  main.c
//  s7.4_Ex14
//
//  Created by Tom Massey on 02/06/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    float frac_part;
    float f;
    
    f = 1.9f;
    
    // This will fail if f value is larger than value that can be stored in an int.
    
    frac_part = f - (int)f;
    
    printf("%f\n", frac_part);
    
    
}
