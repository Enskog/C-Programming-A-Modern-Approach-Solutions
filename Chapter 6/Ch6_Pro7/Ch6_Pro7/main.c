//
//  main.c
//  Ch6_Pro7
//
//  Created by Tom Massey on 31/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    int n, odd;
    
    printf("This program prints a table of squares.\n");
    printf("Enter number of entires in table: ");
    scanf("%d", &n);
    
    // i = 1;
    odd = 3;
    
    for (int i = 1, square = 1; i <= n; ++i, odd +=2)
    {
        printf("%10d%10d\n", i, square);
        //++i;
        square += odd;
    }
    return 0;
}
