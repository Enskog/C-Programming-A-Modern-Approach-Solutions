//
//  main.c
//  Ch3_Pro1
//
//  Created by Tom Massey on 19/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    int day = 0, month = 0, year = 0;
    
    printf("Enter a date (mm/dd/yyyy):" );
    scanf("%d/%d/%d", &month, &day, &year);
    
    printf("You entered the data %d%.2d%d\n", year, month, day);
    
    return 0;
    
}