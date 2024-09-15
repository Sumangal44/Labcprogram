// perfrom all arithmetic operator
#include <stdio.h>
#include <conio.h>
void main()
{
    int num1, num2, sum, sub, div, mul, mod;
    // clrscr();
    printf("Enter any two number: ");
    scanf("%d%d", &num1, &num2);
    sum = num1 + num2;
    sub = num1 - num2;
    div = num1 / num2;
    mul = num1 * num2;
    mod = num1 % num2;
    printf("\nsum=%d", sum);
    printf("\nsub=%d", sub);
    printf("\ndiv=%d", div);
    printf("\nmul=%d", mul);
    printf("\nmod=%d", mod);
    getch();
}
