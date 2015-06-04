//
//  main.c
//  Ch5_Pro4
//
//  Created by Tom Massey on 26/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    int WindSpeed = 0;
    
    printf("Enter the wind speed in knots\n");
    scanf("%d", &WindSpeed);
    
    if (WindSpeed < 1)
    {
        printf("Calm\n");
    }
    // Note that && lower limit check is not needed for all following else if expressions!
    else if (WindSpeed <= 3 && WindSpeed >= 1)
    {
        printf("Light air\n");
    }
    else if (WindSpeed <= 27 && WindSpeed >= 4)
    {
        printf("Breeze\n");
    }
    else if (WindSpeed <= 47 && WindSpeed >= 28)
    {
        printf("Gale\n");
    }
    else if (WindSpeed <=63 && WindSpeed >= 48)
    {
        printf("Storm\n");
    }
    else if (WindSpeed > 63)
    {
        printf("Hurricane\n");
    }
    else
    {
        printf("Invalid windspeed\n");
    }
    
    return 0;
}
