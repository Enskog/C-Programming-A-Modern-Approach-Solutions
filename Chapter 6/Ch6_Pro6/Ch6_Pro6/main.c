//
//  main.c
//  Ch6_Pro6
//
//  Created by Tom Massey on 31/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    int number = 0;
    
    printf("Enter a number: \n");
    scanf("%d", &number);
    
    for (int i = 2; i * i <= number; i += 2)
    {
        printf("%d\n", (i * i));
    }
    
    return 0;
}
