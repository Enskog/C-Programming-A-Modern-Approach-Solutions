//
//  main.c
//  Ch5_Pro9
//
//  Created by Tom Massey on 26/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    int MonthOne, DayOne, YearOne, MonthTwo, DayTwo, YearTwo;
    
    printf("Enter first date (mm/dd/yy): \n");
    scanf("%d/%d/%d", &MonthOne, &DayOne, &YearOne);
    
    printf("Enter second date (mm/dd/yy): \n");
    scanf("%d/%d/%d", &MonthTwo, &DayTwo, &YearTwo);
    
    if (YearTwo > YearOne)
    {
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", MonthOne, DayOne, YearOne, MonthTwo, DayTwo, YearTwo);
    }
    else if (YearTwo < YearOne)
    {
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", MonthTwo, DayTwo, YearTwo, MonthOne, DayOne, YearOne);
    }
    else if (YearOne == YearTwo)
        
    {
        
        if (MonthTwo > MonthOne)
        {
            printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", MonthOne, DayOne, YearOne, MonthTwo, DayTwo, YearTwo);
        }
    
        else if (MonthTwo < MonthOne)
        {
            printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", MonthTwo, DayTwo, YearTwo, MonthOne, DayOne, YearOne);
        }
    
        else if (MonthOne == MonthTwo)
        
        {
        
            if (DayTwo > DayOne)
            {
                printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", MonthOne, DayOne, YearOne, MonthTwo, DayTwo, YearTwo);
            }
    
            else if (DayTwo < DayOne)
            {
                printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", MonthTwo, DayTwo, YearTwo, MonthOne, DayOne, YearOne);
            }
    
            else
                printf("Both dates are the same!\n");
        
    }
    
    }
    
    return 0;
}
