//check any number is perfect or not
#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int n ,p;
    clrscr();
    printf("Enter the number: ");
    scanf("%d",&n);
    p= sqrt(n);
    if (p*p==n)
    {
        printf("%d is perfect squre",n);
    }
    else
    {
        printf("%d is not perfect squre ",n);
    }
    getch();        
}
