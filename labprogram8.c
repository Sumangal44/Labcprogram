// find largest number between two numbers
#include <stdio.h>
#include <conio.h>
void main()
{
int num1 ,num2 ;
clrscr();
printf("Enter the two number: ");
scanf("%d%d",&num1,&num2);
if(num1>num2)
{
printf("%d is largest from %d",num1,num2);
}
else
{
printf("%d is largest from %d",num2,num1);
}
getch();
}