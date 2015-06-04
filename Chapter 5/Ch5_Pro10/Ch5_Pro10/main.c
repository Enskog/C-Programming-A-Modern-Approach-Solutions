//
//  main.c
//  Ch5_Pro10
//
//  Created by Tom Massey on 29/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    int grade = 0;
    
    printf("Enter numerical grade: \n");
    scanf("%d", &grade);
    
    if (grade < 0 || grade > 100)
    {
        printf("Invalid grade\n");
        return 0;
    }
    
    switch (grade / 10)
    
    {
        case 10:
        case 9:
            
            printf("Letter Grade: A\n");
            break;
        
        case 8:
            
            printf("Letter Grade: B\n");
            break;
        
        case 7:
            
            printf("Letter Grade: C\n");
            break;
            
        case 6:
            
            printf("Letter Grade: D\n");
            break;
            
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            
            printf("Failed\n");
            break;
            
    
    return 0;
    
    }
}