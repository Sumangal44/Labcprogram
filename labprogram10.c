// claculate the  factorial of n number?? 
#include <stdio.h>
#include <conio.h>

void main() {
   int n,i, f ; 
    // clrscr();
    printf("Enter the value of n :  ");
    scanf("%d", &n);
    f= 1;
    for (i = 1; i <= n; i++)
    {
       f *= i;
    }
    printf("%d factorial is %d",n,f);

     
    getch ();
}
    