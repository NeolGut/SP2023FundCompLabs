/*
Neol Gutierrez
Fundamentals of Computing
Lab 1 part 2
*/

#include <stdio.h>
#include <math.h>

// The equation being emulated is the pythagoream theorem

int main(){
    float sideA, sideB, sideC;

    printf("Please input leg A: ");
    scanf("%f",&sideA);
    printf("Please input leg B: ");
    scanf("%f",&sideB);

    sideC = sqrt(pow(sideA,2)+pow(sideB,2)); // using the pow command to square each side, then adding them together and using the sqrt command
    printf("The hyptoenus side has a length of %f",sideC );

    return 0;
}