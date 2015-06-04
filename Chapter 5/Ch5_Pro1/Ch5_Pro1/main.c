//
//  main.c
//  Ch5_Pro1
//
//  Created by Tom Massey on 25/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    int number = 0;
    
    printf("Enter a number: \n");
    scanf("%d", &number);
    
    if (number >= 0 && number <= 9)
    {
        printf("The number %d has 1 digit\n", number);
    }
    else if (number >= 10 && number <= 99)
    {
        printf("The number %d has 2 digits\n", number);
    }
    else if (number >= 100 && number <= 999)
    {
        printf("The number %d has 3 digits\n", number);
    }
    else
        printf("The number %d has 4 or more digits\n", number);
    
    return 0;

}