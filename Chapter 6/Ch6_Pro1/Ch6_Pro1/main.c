//
//  main.c
//  Ch6_Pro1
//
//  Created by Tom Massey on 30/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    float number = 0;
    float temp = 0;
    
    for (;;)
    {
        printf("Enter a number: ");
        scanf("%f", &number);
        if (number >= temp)
        {
            temp = number;
        }
        
        if (number <= 0)
        {
            printf("The largest number entered was %.2f\n", temp);
            return 0;
        }
    }
}