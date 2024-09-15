// find smallest number between two number
#include <stdio.h>
#include <conio.h>
void main()
{
int num1, num2;
clrscr();
printf("Enter the two number:: ");
scanf("%d%d",&num1,&num2);
if(num1<num2)
{
printf("%d is smallest %d",num1,num2);
}
else
{
printf("%d is smallest %d" ,num2,num1);

}
getch();
}