/*
Neol Gutierrez
Fundamentals of Computing
Lab 1 part 2
*/

#include <stdio.h>
#include <math.h>

// Pythagoream theorem

int main(){
    float sideA, sideB, sideC;
    printf("Please input side A: ");
    scanf("%f",&sideA);
    printf("Please input side B: ");
    scanf("%f",&sideB);

    sideC = sqrt(pow(sideA,2)+pow(sideB,2));
    printf("The 3 side has a length of %f",sideC );
    return 0;
}