//
//  main.c
//  Ch7_Pro5
//
//  Created by Tom Massey on 04/06/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int sum = 0;
    
    printf("Enter a word: ");
    
    ch = toupper(getchar());
    //ch = toupper(ch);
    
    printf("%c\n", ch);
    
    // could also set up a switch statement wrapped in a while statement which is true while ch != \n
    
    for(;;)
    {
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'L' || ch == 'N' ||
            ch == 'O' || ch == 'R' || ch == 'S' || ch == 'T' || ch == 'U')
            sum +=1;
        else if (ch == 'D' || ch == 'G')
            sum +=2;
        else if (ch == 'B' || ch == 'C' || ch == 'M' || ch == 'P')
            sum +=3;
        else if (ch == 'F' || ch == 'H' || ch == 'V' || ch == 'W' || ch == 'Y')
            sum +=4;
        else if (ch == 'K')
            sum +=5;
        else if (ch == 'J' || ch == 'X')
            sum +=8;
        else if (ch == 'Q' || ch == 'Z')
            sum +=10;
        else if (ch == '\n')
            break;
        else
            printf("Invalid character\n");
        
        ch = toupper(getchar());
        
    }
    printf("Scrabble value: %d\n", sum);
    
    return 0;
    
}