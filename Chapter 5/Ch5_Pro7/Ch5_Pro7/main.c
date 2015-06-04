//
//  main.c
//  Ch5_Pro7
//
//  Created by Tom Massey on 26/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    int a, b, c, d;
    int temp_big, temp_small;
    
    printf("Enter four integers: \n");
    scanf("%2d %2d %2d %2d", &a, &b, &c, &d);
    
    if (a > b)
    {
        temp_big = a;
        temp_small = b;
    }
    else
    {
        temp_big = b;
        temp_small = a;
    }
    
    //BREAK
    
    if (temp_big > c)
    {
        temp_big = temp_big;
        
        if (c > temp_small)
        {
            temp_small = temp_small;
        }
        else
        {
            temp_small = c;
        }
    }
    else
    {
        temp_big = c;
    }
    
    //BREAK
    
    
    if (temp_big > d)
    
    {
        temp_big = temp_big;
        
        if (d > temp_small)
        {
            temp_small = temp_small;
        }
        else
        {
            temp_small = d;
        }

    }
    
    else
    {
        temp_big = d;
    }
    
    
    printf("Largest: %d\n", temp_big);
    printf("Smallest: %d\n", temp_small);
    
   
    return 0;
    
    
}
