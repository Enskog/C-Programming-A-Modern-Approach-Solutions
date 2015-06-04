//
//  main.c
//  Ch6_Pro8
//
//  Created by Tom Massey on 31/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    int month_num = 0;
    int day_num = 0;
    
    printf("Enter number of days in month: ");
    scanf("%d", &month_num);
    printf("Enter starting day of week (1=Sun, 7=Sat) : ");
    scanf("%d", &day_num);
    
    for (int i = 1; i < day_num; i++)
    {
        printf("    ");
    }
    
    // incorrect method as it changes value of day_num
    // would need to create a copy of day_num to iterate
    
    //printf(" ");
    
    //while (day_num > 0)
    //{
    //    printf("  ");
    //    day_num--;
    //}
    
    
    for (int i = 1; i <= month_num; i++)
    {
        
        printf("%3d ", i);
        
        if ((day_num + i - 1) % 7 == 0)
        {
            printf("\n");
        }
    }
    printf("\n");
    return 0;
}