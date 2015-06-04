//
//  main.c
//  s4.4_Ex14
//
//  Created by Tom Massey on 21/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    int a = 1, b = 2, c = 3, d = 4, e = 5;
    int answer = 0;
    
    answer = (a * b) - (c * d) + e;
    printf("%d\n", answer);
    
    answer = (a / b) % (c / d);
    printf("%d\n", answer);
    
    answer = - ((a - b) + (c - + d));
    printf("%d\n", answer);
    
    answer = (a * - b) / (c - d);
    printf("%d\n", answer);
    
    return 0;
}