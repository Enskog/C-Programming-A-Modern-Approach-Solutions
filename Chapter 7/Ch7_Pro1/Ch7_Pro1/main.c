//
//  main.c
//  Ch7_Pro1
//
//  Created by Tom Massey on 03/06/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    
    // max value of i is 46340 (means 64bit machine)
    int i, n;
    
    //long i, n;
    
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    
    scanf("%d", &n);
    
    for (i = 3037000000; i <= n; i++)
    {
        printf("%10d%10d\n", i, i * i);
    }
    
    return 0;
}