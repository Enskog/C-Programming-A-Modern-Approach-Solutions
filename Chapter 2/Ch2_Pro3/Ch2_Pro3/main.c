//
//  main.c
//  Ch2_Pro3
//
//  Created by Tom Massey on 18/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>
#define PI 3.142

int main(void)
{
    int radius = 0;
    float volume = 0;
    
    printf("Please enter the radius of the circle: ");
    scanf("%d", &radius);
    
    
    volume = ((4.0f/3.0f) * PI * (radius * radius * radius));
    printf("%f\n", volume);
    return 0;
    
    
}
