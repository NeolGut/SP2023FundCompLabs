/*
Neol Gutierrez
Fundamentals of Computing 
Lab 2 part 1
table.c
*/

#include <stdio.h>

int main(){
    int uRow, uCol;
    printf("What dimensions do you want for the table(x-axis x y-axis): ");
    scanf("%d %d",&uCol,&uRow);
    
    // header
    printf("*     ");
    for (int i = 1; i <=uCol; i++){
        printf("%3d  ",i);
    }
    printf("\n    ");
    for (int i = 1; i <=uCol;i++){
        printf("-----");
    }
    
    // numbers
    for(int iy = 1; iy <= uRow; iy++){
        printf("\n%d  |  ",iy);
        for (int ix = 1;ix <= uCol; ix++){
            printf("%3d  ",ix *iy);
        }
    }
    printf("\n");
    
    return 0;
}