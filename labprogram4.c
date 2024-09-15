// convert celsius to fahrenhite temperature 
#include <stdio.h>
#include <conio.h>

void main() {
    float C, F;
    clrscr();
    printf("Enter celsius temperature::  ");
    scanf("%f", &C);
    F = (C * 9)/5 +32;
    printf("Your fahrenheite value is = %f\n", F);
    getch ();
}
    
