//check a number is divisible by 7 or not ??
#include <stdio.h>
#include <conio.h> 

void main() {
int n ;
  //clrscr();
  printf("enter the number ");
  scanf("%d",&n);
  if(n%7==0)
  {
    printf("%d the number is divisible by 7 ",n);
  }
  else
  {
    printf("%d the number is not divisible by 7",n);
  }
  getch();
}
