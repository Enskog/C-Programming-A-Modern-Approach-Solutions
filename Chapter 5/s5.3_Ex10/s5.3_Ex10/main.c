//
//  main.c
//  s5.3_Ex10
//
//  Created by Tom Massey on 25/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    int AreaCode = 706;
    
    switch (AreaCode)
    
    {
        case 229:   printf("Albany\n");
                    break;
        
        case 404: case 470: case 678: case 770:
                    printf("Atlanta\n");
                    break;
        
        case 478:   printf("Macon\n");
                    break;
            
        case 706: case 762:
                    printf("Columbus\n");
                    break;
        
        case 912:   printf("Savannah\n");
                    break;
        
        default:    printf("Invalid Area code\n");
                    break;
    
    }
    
    return 0;
    
}