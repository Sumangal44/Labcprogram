
#include <stdio.h>
#include <stdlib.h>

void main() {
    system("clear");
    float C, F;
    printf("Enter fahrenheit temperature::  ");
    scanf("%f", &F);
    C = (F - 32) * 5 / 9;
    printf("Your celsius value is = %f\n", C);
    return 0;  
    getch ();
}
    
