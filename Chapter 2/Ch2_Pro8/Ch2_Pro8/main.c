//
//  main.c
//  Ch2_Pro8
//
//  Created by Tom Massey on 18/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    float LoanAmount = 0;
    float InterestRatePerAnnum = 0;
    float MonthyPayment = 0;
    float MonthOneTotal = 0;
    float MonthTwoTotal = 0;
    float MonthThreeTotal = 0;
    float InterestRatePerMonth = 0;
    
    
    
    printf("Enter the loan amount: ");
    scanf("%f", &LoanAmount);
    
    printf("Enter the interest rate: ");
    scanf("%f", &InterestRatePerAnnum);
    
    printf("Enter the monthly payment: ");
    scanf("%f", &MonthyPayment);
    
    
    //InterestRatePerMonth = (InterestRatePerAnnum / 100.0f) / 12;
    
    InterestRatePerMonth = (InterestRatePerAnnum / 12) * 0.01f;
    
    printf("%f\n", InterestRatePerMonth);
    
    MonthOneTotal = (LoanAmount - MonthyPayment) + (LoanAmount * InterestRatePerMonth);
    MonthTwoTotal = (MonthOneTotal - MonthyPayment) + (MonthOneTotal * InterestRatePerMonth);
    MonthThreeTotal = (MonthTwoTotal - MonthyPayment) + (MonthTwoTotal * InterestRatePerMonth);
    
    printf("Balance remaining after first payment: %.2f\n", MonthOneTotal);
    printf("Balance remaining after second payment: %.2f\n", MonthTwoTotal);
    printf("Balance remaining after third payment: %.2f\n", MonthThreeTotal);
    
    return 0;
    
    
    
}
