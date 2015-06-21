//
//  main.c
//  Ch7_Pro15
//
//  Created by Tom Massey on 21/06/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    
    
    // COMPILED ON 64-BIT OS x86 ARCHITECTURE CPU
    // Largest value of num! which short can store is 7! (num! > short max value).
    // Largest value of num! which int can store is 12! (num! > short max value).
    // Largest value of num! which long can store is 20! (num! > short max value).
    // Largest value of num! which long long can store is 20! (num! > short max value).
    // Largest value of num! which float can store is 34! (num! > short max value).
    // Largest value of num! which double can store is 170! (num! > short max value).
    // Largest value of num! which long double can store is 1754! (num! > short max value).
    
    long double factorial = 1.0f;
    int num = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    for (int i = num; i > 0; i--)
    {
        factorial *= i;
        
    }
    
    printf("Factorial of %d: %.0Lf\n", num, factorial);
    
}