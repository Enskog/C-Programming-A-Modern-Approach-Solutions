//
//  main.c
//  Ch6_Pro10
//
//  Created by Tom Massey on 31/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)


{
    
    int MonthOne, DayOne, YearOne, MonthTemp, DayTemp, YearTemp;
    
    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &MonthOne, &DayOne, &YearOne);
    
    MonthTemp = MonthOne;
    DayTemp = DayOne;
    YearTemp = YearOne;
    
    for (;;)
    {
    
    // Exit point when user enter 00/00/00 as date
    // Prints the earliest of all previous dates entered
        
    if (MonthOne == 0 && DayOne == 0 && YearOne == 0)
        
    {
        printf("%d/%d/%.2d is the earliest date.\n", MonthTemp, DayTemp, YearTemp);
        return 0;
    }
        
        if (YearTemp > YearOne)
        {
            MonthTemp = MonthOne;
            DayTemp = DayOne;
            YearTemp = YearOne;
        }
        else if (YearTemp < YearOne)
        {
            ;
        }
        else if (YearOne == YearTemp)
            
        {
            
            if (MonthTemp > MonthOne)
            {
                MonthTemp = MonthOne;
                DayTemp = DayOne;
                YearTemp = YearOne;
            }
            
            else if (MonthTemp < MonthOne)
            {
                ;
            }
            
            else if (MonthOne == MonthTemp)
                
            {
                
                if (DayTemp > DayOne)
                {
                    MonthTemp = MonthOne;
                    DayTemp = DayOne;
                    YearTemp = YearOne;
                }
                
                else if (DayTemp < DayOne)
                {
                    ;
                }
                
                else
                    MonthTemp = MonthOne;
                    DayTemp = DayOne;
                    YearTemp = YearOne;;
                
            }
            
        }

        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &MonthOne, &DayOne, &YearOne);
        
    }
    return 0;
}




/*



{
    int MonthOne, DayOne, YearOne, MonthTwo, DayTwo, YearTwo;
    
    //while ((MonthOne != 0 && DayOne != 0 && YearOne != 0) || (MonthTwo != 0 && DayTwo != 0 && YearTwo != 0))
    // {
    
    for (;;)
    {
        
    printf("Enter first date (mm/dd/yy): \n");
    scanf("%d/%d/%d", &MonthOne, &DayOne, &YearOne);
    
    printf("Enter second date (mm/dd/yy): \n");
    scanf("%d/%d/%d", &MonthTwo, &DayTwo, &YearTwo);
    
    if ((MonthOne != 0 && DayOne != 0 && YearOne != 0) || (MonthTwo != 0 && DayTwo != 0 && YearTwo != 0))
    {
        
        return 0;;
    
    }
    
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
    //}
    return 0;
}
 
*/

