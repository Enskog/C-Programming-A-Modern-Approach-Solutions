//
//  main.c
//  Ch6_Pro5
//
//  Created by Tom Massey on 31/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    int number = 0;
   // int digit1 = 0, digit2 = 0;
    
    printf("Enter a number: \n");
    scanf("%d", &number);
    
    do
    {
        printf("%d", number % 10);
        number /= 10;
        
        
    } while (number > 0);
    
    printf("\n");
    return 0;
}
    

    // Silly method below attempting to work out the number of digits and then
    // control how often number is dividing by 10 based on number of digits

    /*
    
    int count = 1;
    int number_copy;
    
    number_copy = number;
    
    do
    {
        number /= 10;
        count ++;
        
    } while (number > 10);
    
    
    for (int i = count; i > 0; i--)
    {
        printf("%d", (number_copy / (10 ^ i-1)));
    }
    
    // printf("%d\n", number);
    // printf("%d\n", count);
    
    
    
    // digit1 = number / 10;
    // digit2 = number % 10;
     
    
    
    // printf("The reversal is: %d%d\n", digit2, digit1);
    
    return 0;
    
} */