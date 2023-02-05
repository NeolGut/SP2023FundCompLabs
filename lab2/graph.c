/*
Neol Gutierrez
Fundamentals of Computing 
Lab 2 part 3
graph.c
*/
#include <stdio.h> 
#include <math.h>

int main(){
    // I am using a min and max array to have less variables
    double lowB = 0.0, upperB = 30.0, interval = 0.20, min[2] = {upperB,0}, max[2] = {lowB,0}, y;

    printf("Plot for y = 3 * (sin(x) + x^(.5)) for x from 0.0 to 30.0\n");
    printf("   X     Y\n");
    
    for (double i = lowB; i <= upperB; i += interval){
        y = 3 * (sin(i) + sqrt(i));
        if (y >= max[0]){
            max[0] = (float)y; // max value
            max[1] = i; // x value of max
        } 
        if (y <= min[0]){
            min[0] = (float)y; // min value
            min[1] = i; // x value of min
        }

        printf("%5.2lf  %5.2lf ",i,y);

        y = ceil(y); // rounding up, to match example code
        for (int j = 1; j<=y; j++){
            printf("#");
        }
        printf("\n");
    }
    
    printf("The maximum of %.2lf was at %.2lf\n", max[0], max[1]);
    printf("The minimum of %.2lf was at %.2lf\n", min[0], min[1]);

    return 0;
}

