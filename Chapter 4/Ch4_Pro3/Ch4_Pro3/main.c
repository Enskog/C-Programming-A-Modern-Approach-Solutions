//
//  main.c
//  Ch4_Pro3
//
//  Created by Tom Massey on 21/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    int digit1 = 0, digit2 = 0, digit3 = 0;
    
    printf("Enter a three-digit number in the format x,y,z \n");
    scanf("%d,%d,%d", &digit1, &digit2, &digit3);
    
    
    printf("The reversal is: %d%d%d\n", digit3, digit2, digit1);
    
    return 0;
    
}