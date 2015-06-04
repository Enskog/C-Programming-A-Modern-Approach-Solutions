//
//  main.c
//  Ch3_Pro4
//
//  Created by Tom Massey on 19/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    int area_code = 0, tel_block1 = 0, tel_block2 = 0;

    printf("Enter phone number [(xxx) xxx-xxxx] : ");
    scanf("(%d) %d-%d", &area_code, &tel_block1, &tel_block2);
    
    printf("You entered %d.%d.%d\n", area_code, tel_block1, tel_block2);
    
    return 0;
    
}