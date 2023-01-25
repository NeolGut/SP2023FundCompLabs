/*
Neol Gutierrez
Fundamentals of Computing
Lab 1 part 1
*/

#include <stdio.h>

int main(){

    int touchD, extraP, fGoals, safeties; 
    printf("How many touchdowns were scored by the Irish: ");
    scanf("%d", &touchD);
    printf("How many extra points were scored by the Irish: ");
    scanf("%d", &extraP);
    printf("How many field goals were scored by the Irish: ");
    scanf("%d", &fGoals);
    printf("How many safeties were scored by the Irish: ");
    scanf("%d", &safeties);

    touchD = touchD * 6;
    fGoals = fGoals * 3;
    safeties = safeties * 2;

    printf ("Total Score: %d",(touchD + extraP + fGoals + safeties));

    return 0;
}