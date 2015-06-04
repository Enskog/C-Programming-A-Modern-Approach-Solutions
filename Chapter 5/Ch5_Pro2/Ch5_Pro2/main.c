//
//  main.c
//  Ch5_Pro2
//
//  Created by Tom Massey on 25/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    int time_24_hour = 0, time_24_min;
    
    printf("Enter a 24-hour time: \n");
    scanf("%d:%d", &time_24_hour, &time_24_min);
    
    if (time_24_hour >= 13)
    
    {
        printf("Equivalent 12-hour time: %d:%.2d PM\n", time_24_hour - 12, time_24_min);
    }
    
    else printf("Equivalent 12-hour time: %d:%.2d AM\n", time_24_hour, time_24_min);
    
    return 0;
}
