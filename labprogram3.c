// convert fahrenheite to celsius temperature 
#include <stdio.h>
#include <conio.h>

void main() {
    float C, F;
    clrscr();
    printf("Enter fahrenheit temperature::  ");
    scanf("%f", &F);
    C = (F - 32) * 5 / 9;
    printf("Your celsius value is = %f\n", C);
    getch ();
}
    
