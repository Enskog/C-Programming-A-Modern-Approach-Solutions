//
//  main.c
//  Ch5_Pro3
//
//  Created by Tom Massey on 25/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    float commission, value, share_price, commission_two;
    int share_num;
    
    printf("Enter price of shares: \n");
    scanf("%f", &share_price);
    
    printf("Enter number of shares: \n");
    scanf("%d", &share_num);
    
    value = share_num * share_price;
    
    if (value < 2500.00f)
        commission = 30.00f + 0.17f * value;
    else if (value < 6250.00f)
        commission = 56.00f + 0.0066f * value;
    else if (value < 20000.00f)
        commission = 76.00f + 0.0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + 0.0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + 0.0011f * value;
    else
        commission = 255.00f + 0.0009f * value;
    
    if (commission < 39.00f)
    {
        commission = 39.00f;
    }
    
    if (share_num < 2000)
    {
        commission_two = 33 + (0.03 * share_num);
    }
    else if (share_num >= 2000)
    {
        commission_two = 33 + (0.02 * share_num);
    }
    

    printf("Commission: $%.2f\n", commission);
    printf("Alternative broker commission: $%.2f\n", commission_two);
    
    return 0;
}
