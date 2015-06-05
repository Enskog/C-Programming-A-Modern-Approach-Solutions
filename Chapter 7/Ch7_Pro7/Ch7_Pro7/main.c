//
//  main.c
//  Ch7_Pro7
//
//  Created by Tom Massey on 04/06/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//


#include <stdio.h>

int main(void)

{
    int m1, m2, n1, n2, temp_m = 0,
    temp_n = 0, GCD = 0, remainder = 0, comb_m = 0, comb_n = 0;
    char ch;
    
    printf("Enter numerical operator: ");
    scanf("%c", &ch);
    
    printf("Enter a fraction: ");
    scanf("%d/%d", &m1, &n1);
    printf("Enter a second fraction: ");
    scanf("%d/%d", &m2, &n2);
    
    

        switch (ch)
        {
            case '+':
                
                comb_m = ((m1 * n2) + (m2 * n1));
                comb_n = (n1 * n2);
                break;
            
            case '-':
                
                comb_m = ((m1 * n2) - (m2 * n1));
                comb_n = ((n1 * n2));
                break;
            
            case '\\':
                
                comb_m = (m1 * n2);
                comb_n = (n1 * m2);
                break;
            
            case '*':
                
                comb_m = (m1 * m2);
                comb_n = (n1 * n2);
                break;
                
                
            default:
                break;
        }

    
    
    
    temp_m = comb_m;
    temp_n = comb_n;
    
    while (comb_n != 0)
    {
        remainder = comb_m % comb_n;
        comb_m = comb_n;
        comb_n = remainder;
    }
    
    GCD = comb_m;
    
    if (temp_n/GCD == 1)
        printf("In lowest terms %d/%d %c %d/%d = %d\n", m1, n1, ch, m2, n2, (temp_m/GCD));
    else
    {
        printf("In lowest terms %d/%d %c %d/%d = %d/%d\n", m1, n1, ch, m2, n2, (temp_m/GCD), (temp_n/GCD));
        printf("Expressed in decimal form: %f\n", ((float)(temp_m/GCD)/(float)(temp_n/GCD)));
    }
    
    return 0;
    
    
}
