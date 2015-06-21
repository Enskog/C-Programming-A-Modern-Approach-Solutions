//
//  main.c
//  Ch7_Pro12
//
//  Created by Tom Massey on 21/06/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    float temptotal = 0.0f;
    float operand = 0.0f;
    
    char operator;
    
    printf("Enter an expression: ");
    
    scanf("%f", &temptotal);
    
    
    while ((operator = getchar()) != '\n')
        
    {
        
        if (operator == '+')
        {
            scanf("%f", &operand);
            temptotal += operand;
        }
        else if (operator == '-')
        {
            scanf("%f", &operand);
            temptotal -= operand;
        }
        else if (operator == '*')
        {
            scanf("%f", &operand);
            temptotal *= operand;
        }
        else if (operator == '/')
        {
            scanf("%f", &operand);
            temptotal /= operand;
        }
        else
            printf("Invalid operator\n");
        
    }
    
    printf("Value of expression: %.2f\n", temptotal);
    return 0;
}
