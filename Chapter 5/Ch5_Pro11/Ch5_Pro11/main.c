//
//  main.c
//  Ch5_Pro11
//
//  Created by Tom Massey on 29/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    int num_tens = 0, num_ones = 0;
    
    printf("Enter a two-digit number: \n");
    scanf("%1d%1d", &num_tens, &num_ones);
    
    printf("You entered the number: ");
    
    if (num_tens == 1)
    {
        switch (num_ones)
        {
            case 1:
                printf("Eleven\n");
                break;
            case 2:
                printf("Twelve\n");
                break;
            case 3:
                printf("Thirteen\n");
                break;
            case 4:
                printf("Fourteen\n");
                break;
            case 5:
                printf("Fifteen\n");
                break;
            case 6:
                printf("Sixteen\n");
                break;
            case 7:
                printf("Seventeen\n");
                break;
            case 8:
                printf("Eighteen\n");
                break;
            case 9:
                printf("Nineteen\n");
                break;
            default:
                break;
        }
        return 0;
    }
    
    switch (num_tens)
    
    {
        case 9:
            printf("Ninety ");
            break;
        case 8:
            printf("Eighty ");
            break;
        case 7:
            printf("Seventy ");
            break;
        case 6:
            printf("Sixty ");
            break;
        case 5:
            printf("Fifty ");
            break;
        case 4:
            printf("Forty ");
            break;
        case 3:
            printf("Thirty ");
            break;
        case 2:
            printf("Twenty ");
            break;
        default:
            break;
    }
    
    switch (num_ones)
    
    {
        case 9:
            printf("Nine \n");
            break;
        case 8:
            printf("Eight \n");
            break;
        case 7:
            printf("Seven \n");
            break;
        case 6:
            printf("Six \n");
            break;
        case 5:
            printf("Five \n");
            break;
        case 4:
            printf("Four \n");
            break;
        case 3:
            printf("Three \n");
            break;
        case 2:
            printf("Two \n");
            break;
        case 1:
            printf("One \n");
            break;
        case 0:
            printf("\n");
            break;
        default:
            break;
    }

}
