//
//  main.c
//  Ch5_Pro8
//
//  Created by Tom Massey on 26/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//
// Not exactly what is asked for in the problem
// I have worked on the basis that user is always given next available time after their time
// Book example works on one closest to their time entered

// Could use a load of separate if else statements to check each nearest time range urgh!

#include <stdio.h>

int main(void)

{
    int Hour = 0, Min = 0, ConvertTime = 0;
    
    printf("Enter a 24-hour time: \n");
    scanf("%d:%d", &Hour, &Min);
    
    ConvertTime = (Hour * 60) + Min;
    
    if (ConvertTime < (8 * 60) || ConvertTime > ((21 * 60) + 45))
    {
        printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
    }
    else if (ConvertTime < ((9 * 60) + 43))
    {
        printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
    }
    else if (ConvertTime < ((11 * 60) + 19))
    {
        printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
    }
    else if (ConvertTime < ((12 * 60) + 47))
    {
        printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
    }
    else if (ConvertTime < (14 * 60))
    {
        printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
    }
    else if (ConvertTime < ((15 * 60) + 45))
    {
        printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
    }
    else if (ConvertTime < (19 * 60))
    {
        printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
    }
    else if (ConvertTime < ((21 * 60) + 45))
    {
        printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");
    }
    else
        printf("Enter a valid time\n");
    
    return 0;
}
