//
//  main.c
//  Ch3_Pro2
//
//  Created by Tom Massey on 19/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    int item_num = 0, day = 0, month = 0, year = 0;
    float unit_price = 0;
    
    printf("Enter item number: ");
    scanf("%d", &item_num);
    
    printf("Enter unit price: ");
    scanf("%f", &unit_price);
    
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    
    
    printf("Item\tUnit\t\tPurchase\n");
    printf("\tPrice\t\tDate\n");
    printf("%d\t$%7.2f\t%d/%d/%d\n", item_num, unit_price, month, day, year);
    
    return 0;
    
}
