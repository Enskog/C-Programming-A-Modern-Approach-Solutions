//
//  main.c
//  Ch3_Pro3
//
//  Created by Tom Massey on 19/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    int GS1_prefix = 0, group_id = 0, publisher_code = 0, item_num = 0, check_digit = 0;
    
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &GS1_prefix, &group_id, &publisher_code, &item_num, &check_digit);
    
    printf("GS1 prefix: %d\n", GS1_prefix);
    printf("Group indentifier: %d\n", group_id);
    printf("Publisher code: %d\n", publisher_code);
    printf("Item number: %d\n", item_num);
    printf("Check digit: %d\n", check_digit);
    
    return 0;
    
}