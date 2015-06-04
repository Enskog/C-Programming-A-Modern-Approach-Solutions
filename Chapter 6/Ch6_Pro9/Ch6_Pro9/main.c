//
//  main.c
//  Ch6_Pro9
//
//  Created by Tom Massey on 31/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    float LoanAmount = 0;
    float InterestRatePerAnnum = 0;
    float MonthyPayment = 0;
    // float MonthOneTotal = 0;
    // float MonthTwoTotal = 0;
    // float MonthThreeTotal = 0;
    float InterestRatePerMonth = 0;
    int pay_num = 0;
    float RunTotal = 0;
    
    
    printf("Enter the loan amount: ");
    scanf("%f", &LoanAmount);
    
    printf("Enter the interest rate: ");
    scanf("%f", &InterestRatePerAnnum);
    
    printf("Enter the monthly payment: ");
    scanf("%f", &MonthyPayment);
    
    printf("Enter the number of payments: ");
    scanf("%d", &pay_num);
    
    InterestRatePerMonth = (InterestRatePerAnnum / 12) * 0.01f;
    
    RunTotal = LoanAmount;
    
    for (int i = 1; i <= pay_num; i++)
    {
        
        RunTotal = (RunTotal - MonthyPayment) + (RunTotal * InterestRatePerMonth);
        
        printf("Balance remaining after payment %d: %.2f\n", i, RunTotal);
        
    }
    
    
    //InterestRatePerMonth = (InterestRatePerAnnum / 100.0f) / 12;
    
    /*
    
    printf("%f\n", InterestRatePerMonth);
    
    MonthOneTotal = (LoanAmount - MonthyPayment) + (LoanAmount * InterestRatePerMonth);
    MonthTwoTotal = (MonthOneTotal - MonthyPayment) + (MonthOneTotal * InterestRatePerMonth);
    MonthThreeTotal = (MonthTwoTotal - MonthyPayment) + (MonthTwoTotal * InterestRatePerMonth);
    
    printf("Balance remaining after first payment: %.2f\n", MonthOneTotal);
    printf("Balance remaining after second payment: %.2f\n", MonthTwoTotal);
    printf("Balance remaining after third payment: %.2f\n", MonthThreeTotal);
     
    */
    
    return 0;
    
    
    
}