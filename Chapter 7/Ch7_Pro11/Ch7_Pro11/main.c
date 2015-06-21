//
//  main.c
//  Ch7_Pro11
//
//  Created by Tom Massey on 21/06/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    char ch, initial;
    
    printf("Enter a first and last name: ");
    while ((ch = getchar()) == ' ');
    initial = ch;
    while ((ch = getchar()) != ' ')
    {
        ;
    }
    while ((ch = getchar()) != '\n')
    {
        if (ch != ' ')
            putchar(ch);
    }
    printf(", %c.", initial);
    
    return 0;
}
