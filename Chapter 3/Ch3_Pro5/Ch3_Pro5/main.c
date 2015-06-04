//
//  main.c
//  Ch3_Pro5
//
//  Created by Tom Massey on 19/05/2015.
//  Copyright (c) 2015 Tom Massey. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    int n1, n2, n3, n4, n5, n6, n7, n8;
    int n9, n10, n11, n12, n13, n14, n15, n16;
    int col1_sum, col2_sum, col3_sum, col4_sum;
    int row1_sum, row2_sum, row3_sum, row4_sum;
    int diag1_sum, diag2_sum;
    
    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5, &n6, &n7,
          &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15, &n16);
    
    printf("%d \t%d \t%d \t%d\n", n1,n2,n3,n4);
    printf("%d \t%d \t%d \t%d\n", n5,n6,n7,n8);
    printf("%d \t%d \t%d \t%d\n", n9,n10,n11,n12);
    printf("%d \t%d \t%d \t%d\n", n13,n14,n15,n16);
    
    row1_sum = n1+n2+n3+n4;
    row2_sum = n5+n6+n7+n8;
    row3_sum = n9+n10+n11+n12;
    row4_sum = n13+n14+n15+n16;
    
    col1_sum = n1+n5+n9+n13;
    col2_sum = n2+n6+n10+n14;
    col3_sum = n3+n7+n11+n15;
    col4_sum = n4+n8+n12+n16;
    
    diag1_sum = n1+n6+n11+n16;
    diag2_sum = n4+n7+n10+n13;
    
    printf("Row sums: %d %d %d %d\n", row1_sum, row2_sum, row3_sum, row4_sum);
    printf("Column sums: %d %d %d %d\n", col1_sum, col2_sum, col3_sum, col4_sum);
    printf("Diagonal sums: %d %d\n", diag1_sum, diag2_sum);
    
    return 0;
    
    
    
    
}
