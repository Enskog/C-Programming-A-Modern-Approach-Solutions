//
//  main.c
//  Ch7_Pro14
//
//  Created by Tom Massey on 21/06/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(void)

{
 
    double x = 0.0;
    double y = 1.0;
    double ratio = 0.0;
    double average = 0.0;
    
    printf("Enter a positive number: ");
    
    scanf("%lf", &x);
    
    for(;;)
    {
     
        ratio = x/y;
        
        average = (ratio + y)/2;
        
        if (fabs(y-average) < (average*0.00001))
        {
            break;
        }
        
        y = average;
        //printf("%lf\n", y);
        
    }
    
    printf("%lf\n", y);
    return 0;
    
}