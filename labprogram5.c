//check a number even or odd
#include <stdio.h>
#include <conio.h> 

void main() {
int n ;
  //clrscr();
  printf("enter the number ");
  scanf("%d",&n);
  if(n%2==0)
  {
    printf("%d the number is even ",n);
  }
  else
  {
    printf("%d the number is odd",n);
  }
  getch();
}
