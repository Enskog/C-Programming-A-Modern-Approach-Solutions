//
//  main.c
//  Ch7_Pro13
//
//  Created by Tom Massey on 21/06/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int WordCount = 0;
    float AvgWordLen = 0.0f;
    char ch;
    int CurrentSentenceLen = 0;
    
    printf("Enter a sentence: ");
    
    ch = getchar();
 
    while (ch != '\n')
    {
        CurrentSentenceLen++;
        if (ch == ' ')
        {
            WordCount++;
            CurrentSentenceLen--; // Minus 1 from sentence length for space
        }
        ch = getchar();
    }
    
    AvgWordLen = (float)CurrentSentenceLen / (1 + WordCount); // 1 + Word Count as last word is not counted before break.
    printf("Average word length: %.1f\n", AvgWordLen);
    return 0;
    
}
