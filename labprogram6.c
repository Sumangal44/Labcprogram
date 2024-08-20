//calculate the sum of n natural number ??
#include <stdio.h>
#include <conio.h>
void main()
{
    int n ,sum;
   // clrscr();
    printf("Enter the vaule of n:  ");
    scanf("%d",&n);
    sum=n*(n+1)/2;
    printf("sum of n number is %d",sum);
    getch();
}