//
//  main.c
//  Ch5_Pro5
//
//  Created by Tom Massey on 26/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    float TaxableIncome = 0;
    float Tax = 0;
    
    printf("Enter your taxable income: \n");
    scanf("%f", &TaxableIncome);
    
    if (TaxableIncome < 750)
    {
        printf("1%% of income\n");
        
        Tax = TaxableIncome * 0.01;
        
        printf("$%.2f\n", Tax);
    }
    
    else if (TaxableIncome <= 2250)
    {
        printf("$7.50 plus 2%% of amount over $750\n");
        
        Tax = 7.50f + ((TaxableIncome - 750) * 0.02);
        
        printf("$%.2f\n", Tax);
    }
    
    else if (TaxableIncome <= 3750)
    {
        printf("$37.50 plus 3%% of amount over $2250\n");
        
        Tax = 37.50f + ((TaxableIncome - 2250) * 0.03);
        
        printf("$%.2f\n", Tax);
    }
    
    else if (TaxableIncome <= 5250)
    {
        printf("$82.50 plus 4%% of amount over $3750\n");
        
        Tax = 82.50f + ((TaxableIncome - 3750) * 0.04);
        
        printf("$%.2f\n", Tax);
    }
    
    else if (TaxableIncome <= 7000)
    {
        printf("$142.50 plus 5%% of amount over $5250\n");
        
        Tax = 142.50f + ((TaxableIncome - 5250) * 0.05);
        
        printf("$%.2f\n", Tax);
    }
    
    else if (TaxableIncome < 7000)
    {
        printf("$230.00 plus 6%% of amount over $7000\n");
        
        Tax = 230.00f + ((TaxableIncome - 7000) * 0.06);
        
        printf("$%.2f\n", Tax);
    }
    
    else
    {
        printf("Invalid Value\n");
    }
    
    return 0;
    
}