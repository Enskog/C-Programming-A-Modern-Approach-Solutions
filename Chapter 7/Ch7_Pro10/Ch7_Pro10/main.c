//
//  main.c
//  Ch7_Pro10
//
//  Created by Tom Massey on 21/06/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>

int main(void)

{
    char letter;
    int count = 0;
    
    printf("Enter a sentence: ");
    
    letter = getchar();
    while (letter != '\n')
    {
        if (toupper(letter) == 'A' || toupper(letter) == 'E' || toupper(letter) == 'I' ||
            toupper(letter) == 'O' || toupper(letter) == 'U' )
        {
            count++;
        }
        
        letter = getchar();
    }
    
    printf("Your sentence contains %d vowels\n", count);
    
    return 0;
}