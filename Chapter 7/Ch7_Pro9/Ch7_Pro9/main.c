//
//  main.c
//  Ch7_Pro9
//
//  Created by Tom Massey on 18/06/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>

#define TWELVEHOURS 12

int main(void)

{
    int Hour = 0, Min = 0;
    char ampm;
    
    printf("Enter a 12-hour time: \n");
    scanf("%d:%d %c", &Hour, &Min, &ampm);
    
    if (toupper(ampm) == 'P')
    {
        printf("Equivalent 24-hour time: %d:%d\n", (TWELVEHOURS+Hour), Min);
    }
    
    else
    {
        printf("Equivalent 24-hour time: %d:%d\n", Hour, Min);
    }

    return 0;
    
}